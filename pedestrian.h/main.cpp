#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

enum color_of_pedestrian{ //may be should be put in private or public of pedestrian ?
    Blue, Red, Yellow, Green, Purple, Orange, Brown, Gray, Gold
};

class pedestrian {

    friend void blablabla();

private:


public:
    pedestrian(){}


    ~pedestrian(){}



    pedestrian *calclulate_bestroute(){ //calculate the routine when a pedestrian is generated

    }

    pedestrian *action(){ //a combination of actions that should be done in a single frame
                          //should be able to decide what actions should be done
                          // ex: move , check if itself has arrived at its destination,
                          // and update personal rage value
    }

    //the generation and elimination of a pedestrian might need to be written in another .h file
    //also need to write functions to generate pedestrians once every certain amount of time
    //the input when generating a pedestrian may include spawn location, destination, its color,
    //

};


int main() {

}
