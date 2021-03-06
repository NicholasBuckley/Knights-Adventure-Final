// Final Project
//Nicholas Buckley 11.11.2018

#include "FINAL.h"
#include <iostream>
#include <string>


using namespace std;




// main function
int main()
{
	Adventure obj1; // First object created through parent class
	Queen obj2; // Second object created though child class
	char again; // variable to use for do while loop
	int high = 10; // The limitations for high variable
	int low = 1; // The limitation for low variable
	int number = 0; // The creation of variable number

	string user1 = GetText("Please enter your first name: "); // return get text to string user1
	string user2 = GetText("Please enter your last name: "); // return get text to string user2

	Greet(user1, user2); // call function greet
	Instructions(); // call instrunction function

	do
	{

		cout << "\n";
		obj1.adventurename = GetText("Please enter a boy name: "); // return get text to string name
		obj1.printname(); // Call the print function for object 1
		string weapon = GetText("\n\nPlease enter a weapon: "); // return get text to string weapon
		cout << "The weapon for this story will be a(n) " << weapon << ".\n\n";
		int number = GetNumber(&high, &low); // return get number to int number
		cout << "The amount of gold for the story will be " << number << " coins.\n\n";
		string bodyPart = GetText("Please enter a body part: "); //return get text to string body part
		cout << "The body part for the story will be a(n) " << bodyPart << ".\n\n";
		obj2.queenname = GetText("Please enter a girl name: "); // return get text to string name
		obj2.printname(); // Call the print function for object 2

		Tellstory(obj1.adventurename, weapon, number, bodyPart, obj2.queenname); // call tell story function

		cout << "\nYou have completed the adventure!";
		cout << "\nWould you like to play again? Y/N: "; // Ask user to play again
		cin >> again; // record user input


	} while (again == 'Y'); // While statement to play again

	cout << "Thank you for playing!\n";
	cout << "Ending game...\n";

	system("pause"); // Pause system


	return 0; // Return for no errors
}