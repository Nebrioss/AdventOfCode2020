#include <iostream>
#include <fstream>

using namespace std;

const int PASSWORDS = 1000;

int main()
{
	fstream input = fstream("passwords.txt");
	int minAllowed, maxAllowed, numOfLetter, validPasswords = 0;
	char letter, ignore;
	string password;

	for (int i = 0; i < PASSWORDS; i++)
	{
		input >> minAllowed >> ignore >> maxAllowed >> letter >> ignore >> password;

		numOfLetter = 0;

		for (int j = 0; j < password.size(); j++)
		{
			if (password.at(j) == letter)
				numOfLetter++;
		}

		if (numOfLetter >= minAllowed && numOfLetter <= maxAllowed)
			validPasswords++;
	}

	cout << validPasswords << endl;

	return 0;
}