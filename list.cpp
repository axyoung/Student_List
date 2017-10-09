/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/3/2017
 */

/* Ok so the basic idea is that that there is a vector that will store stuct pointers
 * when you add a student to the list, you will push back and add one to the vector
 * these struct pointers will be accessed when you print out the list using a for loop and vector.at(index)
 * then empty the pointer then erase the pointer in the vector to delete
 * To quit just return, otherwise repeat a loop
 * check out programminghelporg tutorials
 */

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

// still getting errors for functions
void add(vector<int>&, struct Student *bob);
void print(const vector<int>&, struct Student *bob);
void erase(struct Student *bob);

// vector pointers and push_back
struct Student {
	char first[10];
	char last[10];
	int id;
	float gpa;
};

int main() {
	int cont = 0;
	struct Student bob;
	vector<int> myVector;

	while (cont = 0) {
		cout << "Student List, you can (ADD, PRINT, DELETE, or QUIT)" << endl;
		if (cin >> "ADD") { 
			add(bob);
		}

		else if (cin >> "PRINT") { 
			print(bob);
		}

		else if (cin >> "DELETE") { 
			erase(bob);
		}

		else if (cin >> "QUIT") { 
			cont == 1;
		}

	}
	return 0;
}

// function to add an entry for a student
void add(vector<int>&, struct Student *bob) {
	cout << "Student First Name: ";
	cin >> bob.first;
	cout << "Student Last Name: ";
	cin >> bob.last;
	cout << "Student ID: ";
	cin >> bob.id;
	cout << "Student GPA: ";
	cin >> bob.gpa;

}

// function to print out all the students stored
void print(const vector<int>&, struct Student *bob) {

	cout << bob.first << " " << bob.last << "  ID: " << bob.id << " GPA: " << bob.gpa << endl;
}

// function to delete a student from the list
void erase(struct Student *bob) {

}
