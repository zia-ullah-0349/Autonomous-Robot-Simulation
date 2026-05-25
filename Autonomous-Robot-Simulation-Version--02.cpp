#include <iostream>
#include <string>
using namespace std;
                   // Simple structure to store map positions
struct Position {
    int x;
    int y;
};
                   // Base Class (The Parent)
class BaseRobot {
protected:         // Accessible by child classes
    int id;
    string name;
    double batteryLevel;
    double speed;
    Position pos;
public:
                 // Base Constructor 
    BaseRobot(int robotId, string robotName, double robotSpeed, int startX, int startY) {
        id = robotId;
        name = robotName;
        speed = robotSpeed;
        batteryLevel = 100.0;     // Start fully charged
        pos.x = startX;
        pos.y = startY;
    }
                 // display function that child classes can override
    void displayStatus() {
        cout << "ID: " << id << " | Name: " << name << " | Battery: " << batteryLevel << "%" << endl;
        cout << "Position: (" << pos.x << ", " << pos.y << ") | Base Speed: " << speed << " m/s" << endl;
    }
};

// Derived Class - Drone (The Child)
class Drone : public BaseRobot {
private:
    double flightAltitude;    // Unique attribute for Drones
public:
    Drone(int robotId, string robotName, double robotSpeed, int startX, int startY, double altitude) 
        : BaseRobot(robotId, robotName, robotSpeed, startX, startY) {
        flightAltitude = altitude;     // Initialize drone-specific data
    }
    // Method Overriding 
    void displayDroneStatus() {
        cout << "--- Drone Agent Status ---" << endl;
        displayStatus(); // Call the parent function
        cout << "Flight Altitude: " << flightAltitude << " meters" << endl;
        cout << "--------------------------" << endl;
    }
};

// Derived Class - Rover (The Child)
class Rover : public BaseRobot {
private:
    int cargoCapacity; // Unique attribute for Rovers
public:
    Rover(int robotId, string robotName, double robotSpeed, int startX, int startY, int capacity) 
        : BaseRobot(robotId, robotName, robotSpeed, startX, startY) {
        cargoCapacity = capacity;      // Initialize rover-specific data
    }
    // Method Overriding
    void displayRoverStatus() {
        cout << "--- Rover Agent Status ---" << endl;
        displayStatus(); // Call the parent function
        cout << "Cargo Capacity: " << cargoCapacity << " kg" << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    cout << "Autonomous Robot Simulation - Version 2.0 (Inheritance)" << endl << endl;
    // Instantiating specialized child objects directly
    Drone myDrone(2001, "SkyHawk", 15.5, 0, 0, 50.0);
    Rover myRover(2002, "Titan", 4.5, 2, 5, 100);
    // Displaying their structures
    myDrone.displayDroneStatus();
    myRover.displayRoverStatus();
    return 0;
}