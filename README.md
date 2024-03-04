# Student Database Management System

This C++ project is a Student Database Management System with a Simple User Interface. It allows users to perform various operations such as adding courses, listing courses, adding new students, managing enrollments, and more.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Persistence](#persistence)
- [Dependencies](#dependencies)
- [Installation](#installation)
- [Test Data](#test-data)
- [Contributing](#contributing)
- [License](#license)

## Features

- Add new Course
- List courses
- Add new student
- Add enrollment
- Print student details
- Search students
- Update student information

## Usage
To run the program, simply compile the source code using a C++ compiler. If you're using Eclipse, you can import the project and build/run it from the IDE.

g++ -o main main.cpp StudentDb.cpp Course.cpp SimpleUI.cpp
./main

Follow the on-screen instructions to interact with the Simple User Interface and perform various operations.

## Persistence
The program supports persistence by writing and reading data to/from a CSV file. The file format follows the CSV format. The implemented methods for reading and writing data are described in the Exercise 3.2 section.

To run the program, simply compile the source code using a C++ compiler. If you're using Eclipse, you can import the project and build/run it from the IDE.

## Dependencies
The project uses standard C++ libraries. No external libraries are required.

## Installation
Clone the repository to your local machine:
git clone git@github.com:swaroop929/StudentDatabase.git

Open the project in Eclipse or your preferred C++ IDE.

## Test Data
To obtain test data, the program can communicate with a remote server - https://www.hhs.users.h-da.cloud/ and on port 4242 for obtaining sample user data in JSON format

## Contributing
If you'd like to contribute to this project, feel free to fork the repository and submit pull requests.

## License
This project is licensed under the MIT License.
