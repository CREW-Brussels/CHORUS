# CHORUS

The _CHORUS Animation Subsystem_ is a set of tools that help bridge the gap between performers and a variety of animation possibilities. Whether the performers want to duplicate themselves, record and play an animation on an avatar, or incorporate any avatar, the possibilities are endless.

> As an analogy, imagine you are recording a video (using a **recorder**): you record and then it creates a **track** (a file) composed of multiple frames (numbers). A precise frame is called a **cue point** and acts as a **bookmark**. Once this video is recorded, you can open a video player to read and watch this track. You are then using a **player**. That is basically what we are doing using Chorus Subsystem.


***
Prerequesites:

* Your project must contain a Skeletal Mesh Actor, or you have a skinned FBX character to import into Unreal Engine. If you don't have any, you can always use our Skeletal Mesh SKM_Manu in our XR utilities template (link coming) or create one using Blender and a Plugin such as [Auto-Rig Pro](https://www.lucky3d.fr/auto-rig-pro/doc/). Documentation on this topic is available online! 

* Download [CHORUS Plugin](https://github.com/CREW-Brussels/CHORUS/releases) and put it in the Unreal Plugins Folder of your project
(Don't forget to activate it in the plugins section)


***


> #### _Good to know_
> * If you want to use any node related to Chorus, you need to first look for the node **CHORUSSUBSYSTEM**.
> * Cue point: A cue point is a defined position marker that belongs to a track.

***

# Example 1: Record and Replay any animation

  
![CHORUS-Record_Replay](https://github.com/user-attachments/assets/45a60d18-13c0-48f1-b2ef-756e7e0330a5)


> In this first example, we are going to replay and record an animation from one avatar to the other. Here, the right character is the one being recorded, and left one is the one replaying the animation.

***

## 1. Create two animation blueprints:
> An Animation Blueprint in Unreal Engine is a visual scripting system that manages character animation logic.

![record_ABP-ezgif com-video-to-gif-converter](https://github.com/user-attachments/assets/42834292-e70a-4cd0-a650-fb2e9df9d430)

→ **ABP\_ChorusRecorder** is the animation blueprint we are recording data from. Here, we are using the Skeleton SKM_Manu_Skeleton, which is the same Skeleton as our Skeletal Mesh, SKM_Manu.

It's composed of a sequence player (or live link if you're using MOCAP) and Chorus Recorder.
The sequence player here will be the one being recorded.
  

![Screenshot 2025-04-02 112624](https://github.com/user-attachments/assets/6e7093bb-cd8f-4500-a186-6e145f899b8f)
> _For the example, we are using a run animation. But any animation file, live or not, can be used_
  

→ **ABP\_ChorusPlayer** is the animation blueprint that will playback the data from the recorder. Here, we are using the Skeleton SKM_Manu_Skeleton, which is the same Skeleton as our Skeletal Mesh, SKM_Manu.



![Screenshot 2025-04-02 112529](https://github.com/user-attachments/assets/c909d190-22a3-4bbe-ab15-8864ba18d43c)
> _For the example, we are using an idle animation. But any animation file, live or not, can be used_
***

## 2. Create two actor blueprints

  ![BPGIF-ezgif com-optimize](https://github.com/user-attachments/assets/6e46baa0-d84f-4648-a9b6-d4e6aa8aff18)


→ **BP\_ChorusRecorder**

* Import your skeleton mesh in the blueprint
![Screenshot 2025-05-13 111754](https://github.com/user-attachments/assets/21b4be36-e003-4430-ba02-0c108b0a6a24)

![](https://t9012172487.p.clickup-attachments.com/t9012172487/069fd209-4656-4cc4-a5ba-058ace23a82a/Screenshot%202025-03-28%20134109.png)

* Use the APB_ChorusRecorder we previously created

![](https://t9012172487.p.clickup-attachments.com/t9012172487/62dbeb31-6260-4fe5-9799-9514bdffe78e/Screenshot%202025-03-28%20134218.png)

→ **BP\_ChorusPlayer**

* Import your skeleton mesh in the blueprint


![](https://t9012172487.p.clickup-attachments.com/t9012172487/ac3892ef-8629-4012-93de-e16afb5df8f4/image.png)

*  Use the APB_ChorusPlayer we previously created

![](https://t9012172487.p.clickup-attachments.com/t9012172487/9b170ee9-be70-4107-bf02-aa40e6cddf0e/Screenshot%202025-03-28%20134749.png)

  

***


## 3. Edit **BP\_ChorusPlayer**
> _in the Event Graph_


As part of the example, we've decided here to add inputs + and - from keyboard and from the gamepad controller to modify the speed. We are using an Inputs Mapping Context and Input Actions. You should then first enable inputs in the event graph. If you need to know more about inputs, you can find more in [Unreal's documentation](https://dev.epicgames.com/documentation/en-us/unreal-engine/enhanced-input-in-unreal-engine).


  
![Screenshot 2025-04-01 141207](https://github.com/user-attachments/assets/cbeb1c28-874b-4cef-b9f3-6ff0827811ef)

  
First, create a float variable called "Speed".
You should drag and drop it in your event graph, and Set Speed. We use the nodes **Add** and **Substract** to modify faster or slower the player's speed.
We use the node _Set Player Speed_ from ChorusSubsystem to modify the speed of the replay, but it can also modified on some of the nodes themselves if "speed" is mentionned.

![Screenshot 2025-04-01 122138](https://github.com/user-attachments/assets/95dd88c6-3a4f-4513-94fc-2bdc2d7dfb87)


***
## 4. Edit **BP_ChorusRecorder**

> _in the Event Graph_

  
As part of the example, we've decided here to add debug key o to start and stop/play the recordings. You should then first enable inputs in the event graph.

  

![](https://t9012172487.p.clickup-attachments.com/t9012172487/1d53006c-ae3a-416a-bb1b-91058652b97e/Screenshot%202025-03-28%20145712.png)

  

BP_ChorusRecorder is used to start and stop the recording. It then creates the link with the BP\_Chorus Player.

  

Cue points from start and stop recording nodes should be promoted as variables 
> ![](https://t9012172487.p.clickup-attachments.com/t9012172487/d0d04ba3-f41a-45a4-92d6-00380e1c2db1/Screenshot%202025-03-28%20142538.png)
( imagine them being brackets in the track \[ \] )

![ezgif com-video-to-gif-converter](https://github.com/user-attachments/assets/cefae223-6a24-4592-adaf-c66a629f39ff)


  

On Start Recording Node, **Track should set at 0 by default**, it will then never overwrite a used track.

![Screenshot 2025-04-01 121741](https://github.com/user-attachments/assets/2109b104-cc9f-4ff6-bf00-dd59525a3313)


After the Stop recording node, with the node _Get Actor of Class_, chose Actor Class **BP\_ChorusPlayer** that we created earlier. It will allow replaying the recorded animation in the player.
We are also using the Speed variable created earlier in BP_Chorus Player. From the node Get Actor of Glass, we're going to search as return value "get Speed", in order to use the Speed variable controllable with the - and + inputs or from the gamepad.
  

![Screenshot 2025-04-01 122022](https://github.com/user-attachments/assets/61d38101-93b4-4bac-998d-ffde81f5e0a3)

***
The system is now ready! :-) Drag and drop the two blueprints in the scene.
You can now, in play mode and with your inputs, Start and Stop the recording of an animation, and display it on an other avatar once it's stopped!

***
# Example 2: Echoes


![CHORUS_Echoes](https://github.com/user-attachments/assets/1a9fa0d3-403c-4681-804f-4ac6bc9de0dc)

> In this example, we are creating iterations of an animation.

  

-> We are using the same steps as the previous example. We need to add a few different nodes. The difference between this example and the last is that the Echoes are not targeted to a player skeleton mesh directly present in the scene.


> * Additional note: We are using here an additional blueprint from the plugin called EchoManager.
EchoManager will create, depending on the echo count, a pool with all of the echoes before they appear. They are basically present already but invisible.
Using that, all of the echoes are able to be recorded and replayed using our CIRCA tool for example.

  

1. In the **BP\_ChorusRecorder** like created earlier, create these nodes:

![Screenshot 2025-04-01 141815](https://github.com/user-attachments/assets/df520d35-94ba-4363-a920-e26cb0e7f4b7)

* The node Get Actor Of Class is linked to **BP\_EchoManager** from the CHORUS Plugin.
* Here, we are using the On Start node, which means that the iteration will appear when the Game Mode starts. However this can be unlinked, and used with an input or an other event.


2. Drop the **BP\_EchoManager** from the CHORUS Plugin in your scene.
3. In the Blueprint details, The EchoClass should be BP\_ChorusPlayer. Chose the Count (number of iterations), delay (time between the iterations).

![](https://t9012172487.p.clickup-attachments.com/t9012172487/91c2c8dc-9bc7-405d-ab00-db61c37a81e4/Screenshot%202025-03-28%20153106.png)

> In this case, because we are using a hovering animation (the character is runing but not moving forward), we can add these aditional nodes in the BP_ChorusRecorder:
> 
> ![Screenshot 2025-04-02 113747](https://github.com/user-attachments/assets/adad055c-a1ec-487a-a9b2-a02990b8d821)
> 
> Add EditBonePosition in the ABP_ChorusRecorder:
> 
> ![Screenshot 2025-04-02 112647](https://github.com/user-attachments/assets/3795dedd-5a74-4edc-9301-6ae128620144)
> As a parameter of this node, chose the bone Pelvis

***

## Index
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

***


## About
<img src="https://github.com/user-attachments/assets/2ffa225b-2966-4f68-8106-3fd403fd6988" alt="CREW-LOGO" width="130"/>  
<img src="https://emil-xr.eu/wp-content/uploads/2022/10/logo_emil-272x300.png)" alt="EMIL-XR-LOGO" width="100"/>

> CHORUS, a submodule of EXP, is being developed by [CREW](http://crew.brussels) as part of [EMIL](https://emil-xr.eu/), the European Media and Immersion Lab, an Innovation Action funded by the European Union and co-funded by Innovate UK. 

## Funding
<img src="https://emil-xr.eu/wp-content/uploads/2022/10/EN-Funded-by-the-EU-POS-1024x215.png)" alt="EU" height="100"/>

> This project has received funding from the European Union's Horizon Europe Research and Innovation Programme under Grant Agreement No 101070533 EMIL.

