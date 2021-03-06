// Header File
#pragma once

#ifndef FINAL_H
#define FINAL_H

// TODO: add headers that you want to pre-compile here
//function prototype(declaration)

#include <iostream>
#include <string>

using namespace std;

// Creation of the parent class
class Adventure
{
	//Access specifier
public:

	// Data Member
	string adventurename;

	// Member Functions
	void printname()
	{
		cout << "The Adventure's name is: " << adventurename;
	}
	// Private Information
protected:
	int health = 10;

};
// Creation of the child class through the parent class
class Queen : public Adventure
{
	//Access specifier
public:

	// Data Member
	string queenname;

	//Member Function
	void printname()
	{
		cout << "The Queen's name is: " << queenname;
	}
};

void Greet(string user1, string user2); // Function to greet the user
void Instructions(); // function to display instructions
string GetText(string prompt); // function to gather input
int GetNumber(int* const px, int* const py); // getting number function
void Tellstory(string adventurename, string weapon, int number, string bodypart, string queenname); // telling story function
#endif //FINAL_H#pragma once