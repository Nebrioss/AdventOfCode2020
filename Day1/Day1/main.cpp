#include <iostream>
#include <fstream>

using namespace std;

const int NUMBERS = 200;

int main()
{
	int arr[NUMBERS];

	fstream input = fstream("numbers.txt");

	for (int i = 0; i < NUMBERS; i++)
		input >> arr[i];

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