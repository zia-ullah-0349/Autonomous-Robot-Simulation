#include <iostream>
#include <string>
using namespace std;
                      // A simple structure to store map positions
struct Position {
    int x;
    int y;
};
                       // A simple class for our robot
class Robot {
private:
    int id;
    string name;
    string type;
    double batteryLevel;
    double speed;
    Position pos;
public:
                               // constructor
    Robot(int robotId, string robotName, string robotType, double robotSpeed, int startX, int startY) {
        id = robotId;
        name = robotName;
        type = robotType;
        speed = robotSpeed;
        batteryLevel = 100.0; // Starts charged
        pos.x = startX;
        pos.y = startY;
    }
                              // display data on the screen
    void displayStatus() {
        cout << "--- Robot Info ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Speed: " << speed << " m/s" << endl;
        cout << "Battery: " << batteryLevel << "%" << endl;
        cout << "Position: (" << pos.x << ", " << pos.y << ")" << endl;
        cout << "------------------" << endl;
    }
};
int main() {
    cout << "Autonomous Robot Simulation - Version 1.0" << endl << endl;
                           // Creating our objects manually
Robot myDrone(2001, "SkyHawk", "Drone", 15.5, 0, 0);
Robot myRover(2002, "Titan", "Rover", 4.5, 2, 5);
                            // Display
myDrone.displayStatus();
myRover.displayStatus();
return 0;
}