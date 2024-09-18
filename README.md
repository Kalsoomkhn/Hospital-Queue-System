# Hospital-Queue-System
 
# Hospital Queue Management System

## Overview

This project is a simple Hospital Queue Management System implemented in C++. It allows users to manage multiple queues of patients, providing functionality to add and remove patients from queues, as well as display the current status of each queue.

## Features

- **Add Patient to Queue**: Input patient details and add them to a specified queue.
- **Remove Patient from Queue**: Remove the patient at the front of the specified queue.
- **Display Queue Status**: View the number of patients in each queue.
- **Dynamic Queue Management**: Handle multiple queues as defined by the user.

## How It Works

1. **Initialization**:
   - The user is prompted to enter the number of queues. 
   - An array of queues (`std::queue<patient>`) is created based on the user's input.

2. **Menu Options**:
   - **Add Patient**: 
     - Select a queue and input patient details (name, age, father’s name). The patient is then added to the specified queue.
   - **Remove Patient**: 
     - Select a queue and remove the patient at the front of the queue if it’s not empty.
   - **Display Status**: 
     - Shows the size (number of patients) of each queue.
   - **Exit**: 
     - Exits the program and cleans up allocated memory.

## Setup Instructions

1. **Compile the Program**:
   - Use a C++ compiler like `g++` to compile the program:
     ```bash
     g++ -o hospital_queue_management main.cpp
     ```

2. **Run the Program**:
   - Execute the compiled binary:
     ```bash
     ./hospital_queue_management
     ```

3. **Follow the Menu**:
   - Interact with the menu options to manage patient queues.

## Example

```plaintext
enter the number of queues: 3

Hospital Queue System Menu:
1. Add patient to Queue
2. Remove patient from Queue
3. Display Queue Status
4. Exit
Enter your choice: 1

Enter the queue number to add the patient: 0
Enter patient Name: John
Enter patient Age: 30
Enter patient Father Name: Robert
patient added to the queue.

Enter your choice: 3

Queue Status:
Queue 0 Size: 1
Queue 1 Size: 0
Queue 2 Size: 0

Enter your choice: 4
Exiting the program. Goodbye!
```
 
