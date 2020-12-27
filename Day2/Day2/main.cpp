#include <iostream>
#include <fstream>

using namespace std;

// number of lines in text file
const int PASSWORDS = 1000;

int main()
{
	// setting up important variables
	fstream input = fstream("passwords.txt");
	int minAllowed, maxAllowed, numOfLetter, validPasswords = 0;
	char letter, ignore;
	string password;

	// loop to test each password's information
	for (int i = 0; i < PASSWORDS; i++)
	{
		// pulling data from the text file
		input >> minAllowed >> ignore >> maxAllowed >> letter >> ignore >> password;

		// making sure this variable equals zero
		numOfLetter = 0;

		// testing to see if each letter matches the letter given
		for (int j = 0; j < password.size(); j++)
		{
			if (password.at(j) == letter)
				numOfLetter++;
		}

		// determines if the password is allowed
		if (numOfLetter >= minAllowed && numOfLetter <= maxAllowed)
			validPasswords++;
	}

	// prints number of valid passwords
	cout << validPasswords << endl;

	return 0;
}