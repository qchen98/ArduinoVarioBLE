#ifndef VarioToneGenerator_h
#define VarioToneGenerator_h

#include <Arduino.h>

int climbsinkrateTable[12] = {-100,-30,-20,-10,-5,0,5,10,20,30,50,100};
int frequencyTable[12]  = {200, 293,369,440,475,493,550,595,675,745,880,1108};
int dutyTable[12]  = {100,100,100,100,100,50,50,50,50,50,50,50};
int cycleTable[12]  = {200,200,200,200,600,600,550,500,400,310,250,200};


class VarioToneGenerator
{
private:
    
public:
    VarioToneGenerator();
    void initiateFrequencyArray();
    void initiateDutyArray();
    void initiateCycleArray();
  

};


#endif
