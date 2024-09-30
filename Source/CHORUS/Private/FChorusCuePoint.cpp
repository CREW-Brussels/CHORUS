#include "FChorusCuePoint.h"

FChorusCuePoint::FChorusCuePoint()
{
    this->Fps = 0;
    this->Track = 0;
    this->Index = 0;
    this->Timestamp = 0;
}

FChorusCuePoint::FChorusCuePoint(const int Fps, const int Track, const int Index, const float Timestamp)
{
    this->Fps = Fps;
    this->Track = Track;
    this->Index = Index;
    this->Timestamp = Timestamp;
}

FChorusCuePoint::~FChorusCuePoint()
{
    
}


