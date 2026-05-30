#include <iostream>
#include <string>
using namespace std;
struct Position {
    int x;
    int y;
};

// Base Class 
class BaseRobot {
protected:
    int id;
    string name;
    double batteryLevel;
    double speed;
    Position pos;
public:
    BaseRobot(int robotId, string robotName, double robotSpeed, int startX, int startY) {
        id = robotId;
        name = robotName;
        speed = robotSpeed;
        batteryLevel = 100.0;
        pos.x = startX;
        pos.y = startY;
    }
    void displayStatus() {
        cout << "ID: " << id << " | Name: " << name << " | Battery: " << batteryLevel << "%" << endl;
        cout << "Position: (" << pos.x << ", " << pos.y << ") | Speed: " << speed << " m/s" << endl;
    }
    int getId() { return id; }
    string getName() { return name; }
};

// The Association Class
class DeliveryTask {
private:
    int taskId;
    string destinationName;
    Position targetPos;
    bool isCompleted;
public:
    DeliveryTask(int tId, string dest, int targetX, int targetY) {
        taskId = tId;
        destinationName = dest;
        targetPos.x = targetX;
        targetPos.y = targetY;
        isCompleted = false;
    }
    void displayTaskDetails() {
        cout << "Task ID: " << taskId << " | Destination: " << destinationName 
             << " | Target: (" << targetPos.x << ", " << targetPos.y << ")"
             << " | Status: " << (isCompleted ? "Completed" : "Pending") << endl;
    }
};

// Derived Child Classes 
class Drone : public BaseRobot {
private:
    double flightAltitude;
public:
    Drone(int robotId, string robotName, double robotSpeed, int startX, int startY, double altitude) 
        : BaseRobot(robotId, robotName, robotSpeed, startX, startY) {
        flightAltitude = altitude;
    }
    void displayDroneStatus() {
        cout << "--- Drone Agent ---" << endl;
        displayStatus();
        cout << "Flight Altitude: " << flightAltitude << " meters" << endl;
    }
};
class Rover : public BaseRobot {
private:
    int cargoCapacity;
public:
    Rover(int robotId, string robotName, double robotSpeed, int startX, int startY, int capacity) 
        : BaseRobot(robotId, robotName, robotSpeed, startX, startY) {
        cargoCapacity = capacity;
    }
    void displayRoverStatus() {
        cout << "--- Rover Agent ---" << endl;
        displayStatus();
        cout << "Cargo Capacity: " << cargoCapacity << " kg" << endl;
    }
};

// Composition & Aggregation Class
class FleetManager {
private:
    Drone centralDrone;
    Rover centralRover;
    DeliveryTask currentTask;
public:
    FleetManager() 
        : centralDrone(3001, "SkyInterceptor", 22.0, 0, 0, 80.0),
          centralRover(3002, "BehemothGround", 5.0, 0, 0, 250),
          currentTask(501, "City Medical Center", 12, 18) {}
    // Function demonstrating Association
    void assignTaskToDrone() {
        cout << "\n>>> Fleet Management System Routing Active <<<" << endl;
        cout << "Assigning current active task to Drone: " << centralDrone.getName() << endl;
        // Print the details 
        centralDrone.displayDroneStatus();
        currentTask.displayTaskDetails();
    }
};

int main() {
    cout << "Autonomous Robot Simulation - Version 3.0 (Relationships)" << endl << endl;
    FleetManager controlCenter;
    controlCenter.assignTaskToDrone();
    return 0;
}