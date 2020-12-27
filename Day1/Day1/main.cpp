#include <iostream>
#include <fstream>

using namespace std;

// total number of lines in text file
const int NUMBERS = 200;

int main()
{
	// important declarations
	fstream input = fstream("numbers.txt");
	int arr[NUMBERS];

	// filling array with numbers from text file
	for (int i = 0; i < NUMBERS; i++)
		input >> arr[i];

	// searching for two numbers that add to 2020
	// prints out the product of the two numbers
	for (int i = 0; i < NUMBERS; i++)
	{
		for (int j = i + 1; j < NUMBERS; j++)
		{
			if (arr[i] + arr[j] == 2020)
			{
				cout << arr[i] * arr[j] << endl;
				break;
			}
		}
	}

	return 0;
}