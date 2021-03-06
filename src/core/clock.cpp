#include "clock.hpp"

void Clock::Loop(){
	while(running){
		double dt = MicroS_DeltaTime(
			high_resolution_clock::now(), last);
		if(dt >= microsecondsPerTick){
			//Run frame
			last = high_resolution_clock::now();
			unscaledDeltaTime = dt / (1.0e6);
			scaledDeltaTime = unscaledDeltaTime * timeScale;
			this->CallUpdates();
		}else{
			//Do other stuff while we wait
			this->CallSleep();
		}
	}
}

void Clock::StartLoop(){
	if(this->running)
		return;
	this->running = true;
	this->start = high_resolution_clock::now();
	this->last = this->start;
	Loop();
}

void Clock::EndLoop(){
	this->running = false;
}

long Clock::MicroS_DeltaTime(
				time_point<high_resolution_clock> a, 
				time_point<high_resolution_clock> b){
	return duration_cast<microseconds>(a - b).count();
}

void Clock::CallUpdates(){

}

void Clock::CallSleep(){

}