#include <iostream>
using namespace std;

int playerInput;
string Name;
string CharacterName1;
void Characterselction();
void CharacterName();
string ChosenClass;

string Classes[5] = { "Spearman", "Knight", "Archer", "Warlock", "Rogue" };

struct 
{
	string ChosenClass;
	string CharacterName1;

}userstruct;

void Characterselction()
{
	cout << "Please choose a character class below:" << "\n";
	cout << "1. Spearman" << "\n";
	cout << "2. Knight" << "\n";
	cout << "3. Archer" << "\n";
	cout << "4. Warlock" << "\n";
	cout << "5. Rogue" << "\n";
	cout << "\n" << ">";
	cin >> playerInput;

	if (playerInput >= 1)
	{
		if (playerInput <= 5)
		{
			cout << "You have chosen " << Classes[playerInput - 1] << "\n";
			ChosenClass = Classes[playerInput - 1];
			CharacterName();
		}
		else
		{
			cout << "Invalid Input" << "\n\n";
		}
	}
	
}

void CharacterName()
{
	cout<< "\n" << "Please enter your name: ";
	cin >> Name;

	CharacterName1 = Name;
	cout << "\n" << "Player details:" << "\n";
	cout << "Name: " << CharacterName1 << "\n";
	cout << "Class: " << ChosenClass << "\n\n\n\n\n";

}

int main()
{
	Characterselction();


}