/* C++ Galbraith Period 5
 * Student List
 * Alex Young
 * This project will allow you to read in, print out, and delete students
 * 10/3/2017
 */

/* Ok so the basic idea is that that there is a vector that will store stuct pointers
 * when you add a student to the list, you will push back and add one to vector2 and create a vector of struct pointers
 * these struct pointers will be accessed when you print out the list using a for loop and vector.at(index)
 * then empty the pointer then erase the pointer to delete
 * check out programminghelporg tutorials
 */

#include <iostream>
#inlcude <vector>

using namespace std;

// still getting errors for functions
void add(vector<int>&, Student *bob);
void print(const vector<int>&, Student *bob);
void erase(Student *bob);

// vector pointers and push_back
struct Student {
	char first[10];
	char last[10];
	int id;
	float gpa;
};

int main() {
	Student bob;
	vector<int> myVector;

	add(bob);
	return 0;
}

// function to add an entry for a student
void add(Student *bob) {
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
void print(Student *bob) {

	cout << bob.first << " " << bob.last << "  ID: " << bob.id << " GPA: " << bob.gpa << endl;
}

// function to delete a student from the list
void erase(Student *bob) {

}
