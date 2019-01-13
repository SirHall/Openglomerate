#ifndef Clock_hpp
#define Clock_hpp

#include <chrono>
#include <functional>
#include <iostream>
using namespace std::chrono;

// namespace Openglomerate{

    class Clock{
        public:
            Clock(){}

            bool IsRunning(){return running;}

            void SetTPS(double tps){
                this->microsecondsPerTick = (1.0 / tps) * 1.0e6;
                //std::cout << "Set Mspt to: " << this->microsecondsPerTick << "\n";
            }
            double GetTPS(){return 1.0 / (this->microsecondsPerTick / 1.0e6);}

            void SetTimeScale(double timeScale){this->timeScale = timeScale;}
            double GetTimeScale(){return this->timeScale;}

            double GetScaledDeltaTime(){return this->scaledDeltaTime;}
            double GetUnscaledDeltaTime(){return this->unscaledDeltaTime;}

            void StartLoop();

            void EndLoop();

        private:
            void Loop();

            void CallUpdates();
            
            void CallSleep();

            long MicroS_DeltaTime(
                time_point<high_resolution_clock> a, 
                time_point<high_resolution_clock> b);

            time_point<high_resolution_clock> start;
            time_point<high_resolution_clock> last;
            bool running = false;
            unsigned long microsecondsPerTick = 33333.0; //Default for 30tps
            double scaledDeltaTime = 0.0;
            double unscaledDeltaTime = 0.0;
            double timeScale = 1.0;

    };
// }

#endif //Clock.hpp
