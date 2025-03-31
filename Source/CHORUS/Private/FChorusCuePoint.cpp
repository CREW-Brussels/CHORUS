#include "FChorusCuePoint.h"
#include "CHORSubsystem.h"

FChorusCuePoint::FChorusCuePoint()
{
    this->Fps = 0;
    this->Track = 0;
    this->Index = 0;
    _TimeStamp = -1;
    //this->Timestamp = 0;
}

FChorusCuePoint::FChorusCuePoint(const int Fps, const int Track, const int Index, const float Timestamp)
{
    this->Fps = Fps;
    this->Track = Track;
    this->Index = Index;
    _TimeStamp = -1;
   // this->Timestamp = Timestamp;
}

FChorusCuePoint::~FChorusCuePoint()
{
    
}

double const FChorusCuePoint::Timestamp(UCHORUSSubsystem *Subsystem)
{
    if (_TimeStamp != -1)
        return _TimeStamp;
    if (Subsystem == NULL || !Subsystem->Tracks.Contains(Track) || !Subsystem->Tracks[Track].Frames.IsValidIndex(Index))
        return 0;
    return Subsystem->Tracks[Track].Frames[Index].time;
}


