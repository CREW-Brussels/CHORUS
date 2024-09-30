#include "FChorusTrack.h"

FChorusTrack::FChorusTrack()
{
	Fps = 120;
}

void FChorusTrack::SetFps(int32 NewFps)
{
	NewFps = NewFps <= 0 ? NewFps = 120 : NewFps;
	if (this->Fps != NewFps)
	{
		this->Fps = NewFps;
		// TODO: create CupPoint to record FPS change.
		// shouldn't be needed anymore
	}
}
