/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/3/2017
 */

/* Ok so the basic idea is that that there is a vector that will store stuct pointers
 * when you add a student to the list, you will push back and add one to the vector
 * these struct pointers will be accessed when you print out the list using a for loop and vector.at(index)
 * then erase the vector at a position to delete
 * To quit just return, otherwise repeat a loop
 * check out programminghelporg tutorials
 */

#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

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
	bool cont = true;
	vector<Student> myVector;

	while (cont) {
		cout << "Student List, you can (ADD, PRINT, DELETE, or QUIT)" << endl;
		char entry[10] = "";
		cin.get(entry, sizeof(entry));
		cin.get();

		if (strcmp(entry, "ADD") == 0) { 
			add(myVector);
		}

		else if (strcmp(entry, "PRINT") == 0) { 
			print(myVector);
		}

		else if (strcmp(entry, "DELETE") == 0) { 
			erase(myVector);
		}

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
	for (unsigned int i = 0; i < myVector.size(); i++) {
		cout << myVector[i].first << " " << myVector[i].last << ", " << myVector[i].id << ", "
		     << fixed << setprecision(2) << myVector[i].gpa << endl;
	}
}

// function to delete a student from the list
void erase(vector<Student>& myVector) {
	// check out vector begin and vector erase
	// need to use an iterator to erase
	// just need to erase, not empty, because not using pointers
	// it->first
}
