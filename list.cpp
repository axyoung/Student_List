/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/11/2017
 */

// use vector for myVector, cstring for strcmp, and iomanip for setPrecision

#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

// stuct that stores each student
struct Student {
	// name can hold 20 characters
	char first[21];
	char last[21];
	int id;
	float gpa;
};

void add(vector<Student>&);
void print(vector<Student>&);
void erase(vector<Student>&);

int main() {
	// program runs until continue is false, which is when you QUIT
	bool cont = true;
	// vector that hold the students, this is my list
	vector<Student> myVector;

	// while the programs runs go through the loop and check for commands
	while (cont) {
		cout << "Student List, you can (ADD, PRINT, DELETE, or QUIT)" << endl;
		// I will get their entry, which will be ADD, PRINT, DELETE, or QUIT, or else ask again
		char entry[10] = "";
		cin.get(entry, sizeof(entry));
		cin.get();

		// if they ask to add, run add function, passing in the list of students
		if (strcmp(entry, "ADD") == 0) { 
			add(myVector);
		}

		// if they say print, run print function, passing list of students
		else if (strcmp(entry, "PRINT") == 0) { 
			print(myVector);
		}

		// if they want to delete an entry, run corresponding function
		else if (strcmp(entry, "DELETE") == 0) { 
			erase(myVector);
		}

		// if they want to exit, stop the program
		else if (strcmp(entry, "QUIT") == 0) { 
			cont = false;
		}

	}

	return 0;
}

// function to add an entry for a student
void add(vector<Student>& myVector) {
	// empty local variable for student struct
	// my dad gave me the idea to use a local variable to add to the vector
	Student s = { 0 };

	// get what they enter for names, id and gpa, then set the local struct to that value
	cout << "Student First Name: ";
	cin.get(s.first, sizeof(s.first));
	cin.get();
	
	cout << "Student Last Name: ";
	cin.get(s.last, sizeof(s.last));
	cin.get();

	cout << "Student ID: ";
	cin >> s.id;
	// if user types in a long number here it breaks the code?
	cout << "Student GPA: ";
	cin >> s.gpa;

	cin.get();

	// this will add a new entry to my vector, and then adds the new struct to the end
	myVector.push_back(s);
}

// function to print out all the students stored
void print(vector<Student>& myVector) {
	// use an unsigned int because it is a vector
	/*
	for (unsigned int i = 0; i < myVector.size(); i++) {
		// use fixed and set precision for 2 decimal places for gpa
		cout << myVector[i].first << " " << myVector[i].last << ", " << myVector[i].id << ", "
		     << fixed << setprecision(2) << myVector[i].gpa << endl;
	}
	*/
	// use iterators to avoid overflow
	// use fixed and setprecision for the gpa to have 2 digits
	for (std::vector<Student>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		cout << it -> first << " " << it -> last << ", " << it -> id << ", "
		     << fixed << setprecision(2) << it -> gpa << endl;
	}
}

// function to prompt for student id to delete a student from the list
void erase(vector<Student>& myVector) {
	int deleteID = 0;
	cout << "Student ID to delete: ";
	cin >> deleteID;
	cin.get();
	
	// the code below works, but if there is a too large of a value inside the struct it will mess up
	/*
	for (unsigned int i = 0; i < myVector.size(); i++) {
		if (deleteID == myVector[i].id) {
			myVector.erase(myVector.begin() + i);
		}
	}
	*/

	// I use iterators instead to loop through and erase a struct from my vector
	for (std::vector<Student>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
		// cout << it -> id << endl; for debugging
		if (deleteID == (it -> id)) {
			// cout << "hi" << endl; for debugging
			myVector.erase(it);
			// from Galbraith - need it so that after I erase the struct, it doesn't mess up for loop
			break;
		}
	}
}
