/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/3/2017
 */

#include <iostream>

using namespace std;

// still getting errors for functions
void add(Student &bob);
void print(Student &bob);
void erase(Student &bob);

// vector pointers and push_back
struct Student {
	char first[10];
	char last[10];
	int id;
	float gpa;
};

int main() {
	Student bob;
	add(bob);
	return 0;
}

// function to add an entry for a student
void add(Student &bob) {
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
void print(Student &bob) {

	cout << bob.first << " " << bob.last << "  ID: " << bob.id << " GPA: " << bob.gpa << endl;
}

// function to delete a student from the list
void erase(Student &bob) {

}
