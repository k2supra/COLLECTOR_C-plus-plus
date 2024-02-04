#include "isp.h"


int main()
{
    SportsCar sportsCar;
    sportsCar.startEngine();
    sportsCar.drive();
    sportsCar.stop();

    cout << endl;

    MountainBike mountainBike;
    mountainBike.pedal();
    mountainBike.ringBell();

    cout << endl;

    Sailboat sailboat;
    sailboat.startEngine();
    sailboat.sail();
    sailboat.dock();

}
