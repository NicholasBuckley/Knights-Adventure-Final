// Source File

#include "FINAL.h"
#include <iostream>
#include <string>

using namespace std;

// instruction function
void Instructions()
{
	cout << "\t\tThis is Knights Adventure!\n\n";
	cout << "You will be asked to input numbers and words to help complete the adventure.\n";
	cout << "Make sure to look at the options available when asked each question.\n";
	cout << "\n\n";
}
// Greet Function
void Greet(string user1, string user2)
{
	cout << "Welcome ";
	cout << user1;
	cout << " ";
	cout << user2;
	cout << "!\n\n";
}


// get text function
string GetText(string prompt)
{
	string text; // create string text
	cout << prompt; // print prompt
	cin >> text; // assign input to text
	return text; // return user input
}

// get number function
int GetNumber(int* const px, int* const py) //restrict high and low input
{
	int num; // create in num

	cout << "Please enter a number" << " (" << *py << " - " << *px << "): "; //tell user high and low
	cin >> num; // assign input


	return num;

}

//tell story function
void Tellstory(string name, string weapon, int number, string bodypart, string queen) // using input gathered from user
{
	cout << "\n\n";
	cout << "========================================================================================\n\n";
	cout << "A long time ago in a far away land there was a farmer named ";
	cout << name;
	cout << ".\n";
	cout << name;
	cout << " lived in a large kingdom that was ruled by a beloved queen named ";
	cout << queen;
	cout << ".\n";
	cout << "But something horrible had happened and the queen was taken by a dragon!\n";
	cout << name;
	cout << " knew that if he had the right gear he might have a chance at saving the queen.\n";
	cout << "Stopping by the local market ";
	cout << name;
	cout << " started to look for the perfect weapon to defeat the dragon.\n";
	cout << "Thats when he finally saw it .... the perfect ";
	cout << weapon;
	cout << " that would give him the strength to vanquish the dragon.\n";
	cout << name;
	cout << " must have it no matter the cost so he offered the shop keep ";
	cout << number;
	cout << " gold coins and he accepted!\n";
	cout << name;
	cout << " set off on the quest to save the queen at first light.\n";
	cout << "After four days of searching ";
	cout << name;
	cout << " finally found the dragons secret cave.\n";
	cout << "The battle raged on for hours as ";
	cout << name;
	cout << " used the ";
	cout << weapon;
	cout << " the best that he could to save the queen.\n";
	cout << ".\n";
	cout << "..\n";
	cout << "...\n";
	cout << name;
	cout << " finally defeated the dragon but lost his ";
	cout << bodypart;
	cout << " in the process.\n";
	cout << "Returning queen ";
	cout << queen;
	cout << " to the village ";
	cout << name;
	cout << " was a true hero and lived out the rest of his days as queen ";
	cout << queen;
	cout << "'s loyal protector.\n";
	cout << "\n\n";
	cout << "The End\n";
	cout << "========================================================================================\n\n";
}