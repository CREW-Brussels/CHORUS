# CHORUS

CHORUS Animation Subsystem is a group of tools that help creating a bridge between the performers and multiple animation possibilities. Either the performer wishes to duplicate themselves, record and replay animation on an avatar, or incorporate any avatar, the possibilities are endless.
> As an analogy, imagine you are recording a video (using a **recorder**): you record and then it creates a track (a file) composed of multiple frames (numbers). A precise frame is called a cue point and acts as a bookmark. Once this video is recorded, you can open a video player to read and watch this track. You are then using a **player**. That is basically what we are doing using Chorus Subsystem.


***
  

Here is the detailed list of all of the nodes:

  

* Add Cue Point
* Control Player
* Control Recorder
* Delete Cue Point
* DeleteTrack
* Get Clip Length
* Get New Owner
* Get New Track
* Get Player Status
* Get Recorder Status
* List Cue Points
* List Tracks
* Pause Player
* Play from Cue Point for Duration
* Resume Player
* Set Player Looping
* Set Player Speed
* Start Recording
* Stop Recording
* Trigger End of Track Event

And events:

* OnEndOfTrackEvent
* OnStartOfTrackEvent
* OnLoopEvent

Download [CHORUS Plugin](https://github.com/CREW-Brussels/CHORUS/releases) and put it in the Unreal Plugins Folder of your project

(Don't forget to activate it in the plugins section)


***


> #### _Good to know_
> * Get all of CHORUS tools from the node: **CHORUSSUBSYSTEM**
> * Cue point: A cue point is a defined position marker that belongs to a track.

***

# Example 1: Record and Replay any animation

  
![CHORUS-Record_Replay](https://github.com/user-attachments/assets/45a60d18-13c0-48f1-b2ef-756e7e0330a5)


> In this first example, we are going to replay and record an animation on a desired mesh.

***

## 1. Create two animation blueprints:

  

→ **ABP\_ChorusRecorder** is the animation blueprint we are recording data from.

It's composed of a sequence player (or live link if you're using MOCAP) and Chorus Recorder.

  

> _For the example, we are using a run animation._


![Screenshot 2025-04-02 112624](https://github.com/user-attachments/assets/6e7093bb-cd8f-4500-a186-6e145f899b8f)

  

→ **ABP\_ChorusPlayer** is the animation blueprint that will playback the data from the recorder.


> _For the example, we are using an idle animation._

![Screenshot 2025-04-02 112529](https://github.com/user-attachments/assets/c909d190-22a3-4bbe-ab15-8864ba18d43c)

***

## 2. Create two actor blueprints

  

→ **BP\_ChorusRecorder**

* Import your skeleton mesh in the blueprint

![](https://t9012172487.p.clickup-attachments.com/t9012172487/069fd209-4656-4cc4-a5ba-058ace23a82a/Screenshot%202025-03-28%20134109.png)

* Use the APB_ChorusRecorder we previously created

![](https://t9012172487.p.clickup-attachments.com/t9012172487/62dbeb31-6260-4fe5-9799-9514bdffe78e/Screenshot%202025-03-28%20134218.png)

→ **BP\_ChorusPlayer**

* Import your skeleton mesh in the blueprint

![](https://t9012172487.p.clickup-attachments.com/t9012172487/ac3892ef-8629-4012-93de-e16afb5df8f4/image.png)

*  Use the APB_ChorusPlayer we previously created

![](https://t9012172487.p.clickup-attachments.com/t9012172487/9b170ee9-be70-4107-bf02-aa40e6cddf0e/Screenshot%202025-03-28%20134749.png)

  

***

  

## 3. Edit **BP_ChorusRecorder**

> _in the event graph_

  
As part of the example, we've decided here to add debug key O to start and stop/play the recordings. You should then first enable inputs in the event graph.

  

![](https://t9012172487.p.clickup-attachments.com/t9012172487/1d53006c-ae3a-416a-bb1b-91058652b97e/Screenshot%202025-03-28%20145712.png)

  

BP_ChorusRecorder is used to start and stop the recording. It then creates the link with the BP\_Chorus Player.

  

Cue points from start and stop recording nodes should be promoted as variables 
> ![](https://t9012172487.p.clickup-attachments.com/t9012172487/d0d04ba3-f41a-45a4-92d6-00380e1c2db1/Screenshot%202025-03-28%20142538.png)
( imagine them being brackets in the track \[ \] )

  

  

On Start Recording Node, **Track should set at 0 by default**, it will then never overwrite a used track.

![Screenshot 2025-04-01 121741](https://github.com/user-attachments/assets/2109b104-cc9f-4ff6-bf00-dd59525a3313)


After the Stop recording node, with the node _Get Actor of Class,_ link call Actor Class **BP\_ChorusPlayer** that we created earlier. It will allow replaying the recorded animation in the player.

  

![Screenshot 2025-04-01 122022](https://github.com/user-attachments/assets/61d38101-93b4-4bac-998d-ffde81f5e0a3)

***

## 4. Edit **BP\_ChorusPlayer**

  

As part of the example, we've decided here to add inputs + and - from keyboard and from the gamepad controller to modify the speed. We are using an Inputs Mapping Context and Input Actions. You should then first enable inputs in the event graph


  
![Screenshot 2025-04-01 141207](https://github.com/user-attachments/assets/cbeb1c28-874b-4cef-b9f3-6ff0827811ef)

  

We here use the node Set Player Speed to modify and add the inputs on our replay speed. The speed is a float variable.

![Screenshot 2025-04-01 122138](https://github.com/user-attachments/assets/95dd88c6-3a4f-4513-94fc-2bdc2d7dfb87)


***

# Example 2: Echoes


![CHORUS_Echoes](https://github.com/user-attachments/assets/1a9fa0d3-403c-4681-804f-4ac6bc9de0dc)

> In this example, we are creating iterations of an animation.

  

-> We are using the same steps as the previous example. We need to add a few different nodes. The difference between this example and the last is that the Echoes are not targeted to a player skeleton mesh directly present in the scene.


> * Additional note: We are using here an additional blueprint from the plugin called EchoManager.
EchoManager will create, depending on the echo count, a pool with all of the echoes before they appear. They are basically present already but invisible.
Using that, all of the echoes are able to be recorded and replayed using our CIRCA tool for example.

  

In the **BP\_ChorusRecorder** like created earlier:

  

![Screenshot 2025-04-01 141815](https://github.com/user-attachments/assets/df520d35-94ba-4363-a920-e26cb0e7f4b7)


Drop the **BP\_EchoManager** from the CHORUS Plugin in your scene, and set the Count (number of iterations), delay (time between the iterations)

  

The EchoClass should be BP\_ChorusPlayer

![](https://t9012172487.p.clickup-attachments.com/t9012172487/91c2c8dc-9bc7-405d-ab00-db61c37a81e4/Screenshot%202025-03-28%20153106.png)

> In this case, because we are using a hovering animation (the character is runing but not moving forward), we can add these aditional nodes in the BP_ChorusRecorder:
> 
> ![Screenshot 2025-04-02 113747](https://github.com/user-attachments/assets/adad055c-a1ec-487a-a9b2-a02990b8d821)
> 
> Add EditBonePosition in the ABP_ChorusRecorder:
> 
> ![Screenshot 2025-04-02 112647](https://github.com/user-attachments/assets/3795dedd-5a74-4edc-9301-6ae128620144)
> As a parameter of this node, chose the bone Pelvis

