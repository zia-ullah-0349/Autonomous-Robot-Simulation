# Autonomous Robot Simulation System

A semester project developed for the **Object-Oriented Programming (OOP)** course in the BS Artificial Intelligence program at the University of Malakand. This project is built incrementally in versions to demonstrate practical software engineering principles and core OOP concepts applied to autonomous agents.

---

## 👥 Project Information
* **Developer:** Ziaullah
* **Program:** BS Artificial Intelligence (2nd Semester)
* **Course Instructor:** Dr. Muhammad Kazim
* **Project Domain:** Multi-Agent Control & Command Simulation

---

## 🚀 Project Overview
This application models a multi-agent environment where different types of autonomous machinery (such as Aerial Drones and Terrestrial Rovers) manage energy levels, spatial coordinates, and delivery tasks. 

---

## 🗺️ Development Version Roadmap

### 📦 Version 1.0 
* **Features:** Implements a baseline `Robot` class framework, positional tracking coordinates using simple structures, and data encapsulation.
* **Syllabus Focus:** Introduction to classes, attributes, methods, access controls, and explicit instantiation.

### 📦 Version 2.0 
* **Features:** Introduces specialized robot behaviors by creating distinct `Drone` and `Rover` logic.
* **Syllabus Focus:** Inheritance (`protected` access modifiers), base class constructors, and functional extension.

### 📦 Version 3.0 
* **Features:** Implements a centralized command system (`FleetManager`) and a job routing object (`DeliveryTask`).
* **Syllabus Focus:** Object relationships (Association, Aggregation, and Composition).

### 📦 Version 4.0 
* **Features:** Standardizes execution across varying agent types using base class pointer arrays.
* **Syllabus Focus:** Abstract classes, pure virtual functions, and runtime polymorphism.

### 📦 Version 5.0 (Current Presentation Target)
* **Features:** Adds system error boundaries, operator overloads, and logs active operations permanently to a local disk report.
* **Syllabus Focus:** Custom Exception Handling (`try-catch` blocks), Operator Overloading (`operator<<`), and File I/O Streams (`ofstream`).
---

## 🧑‍🏫 Syllabus Mapping Table
The current system architecture completely satisfies and demonstrates the following core academic benchmarks:

| Academic Concept | Implementation Location in Project |
| :--- | :--- |
| **Classes & Objects** | `BaseRobot`, `DeliveryTask`, and `FleetManager` structures |
| **Encapsulation** | `protected` and `private` attribute control with safe access functions |
| **Inheritance** | Derived `Drone` and `Rover` child models |
| **Polymorphism** | Dynamic execution via base class pointer arrays inside loops |
| **Operator Overloading** | Custom `<<` operator to stream object attributes natively with `cout` |
| **Exception Handling** | Runtime checks preventing registration of depleted battery units (<10%) |
| **File Handling** | Serializing active simulation logs into external `simulation_report.txt` files |

---

## 🛠️ How to Compile and Run
Ensure you have a standard C++ compiler installed (such as GCC/G++ or Dev-C++ environment).

1. Clone this repository:
   git clone [https://github.com/zia-ullah-0349/Autonomous-Robot-Simulation.git](https://github.com/zia-ullah-0349/Autonomous-Robot-Simulation.git)
2. Navigate to the directory and compile the source file:
   g++ main.cpp -o Simulation
3. Execute the binary:
   ./Simulation
   
