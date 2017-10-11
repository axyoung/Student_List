/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/11/2017
 */

// It is done, but need get it to use iterators instead for printing and erasing

#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

// stuct that stores each student
struct Student {
	char first[21];
	char last[21];
	int id;
	float gpa;
};

void add(vector<Student>&);
void print(const vector<Student>&);
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

	cout << "Student GPA: ";
	cin >> s.gpa;

	cin.get();

	// this will add a new entry to my vector, and then adds the new struct to the end
	myVector.push_back(s);
}

// function to print out all the students stored
void print(const vector<Student>& myVector) {
	// use an unsigned int because it is a vector
	for (unsigned int i = 0; i < myVector.size(); i++) {
		// use fixed and set precision for 2 decimal places for gpa
		cout << myVector[i].first << " " << myVector[i].last << ", " << myVector[i].id << ", "
		     << fixed << setprecision(2) << myVector[i].gpa << endl;
	}
}

// function to prompt for student id to delete a student from the list
void erase(vector<Student>& myVector) {
	int deleteID = 0;
	cout << "Student ID to delete: ";
	cin >> deleteID;
	cin.get();
	for (unsigned int i = 0; i < myVector.size(); i++) {
		if (deleteID == myVector[i].id) {
			myVector.erase(myVector.begin() + i);
		}
	}
	// check out vector begin and vector erase
	// need to use an iterator to erase
	// just need to erase, not empty, because not using pointers
	// it->first
}
