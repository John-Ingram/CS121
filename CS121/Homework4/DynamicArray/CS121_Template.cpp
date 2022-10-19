//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
void init_array(int array_in[], int elements);
void print(int array_in[], int elements);


int main(void)
{
	int *number; // pointer to an int
	int j = 0, k = 0, value;
	char answer = 'y';
	do
	{
		cout << "How many numbers do you want?" << endl;
		cin >> value;
		number = new int[value];
		init_array(number, value);
		print(number, value);
		cout << endl << "Repeat?(Y/N)";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			delete number;
		}
	} while (answer == 'y'||answer == 'Y');
	system("pause");
	return 0;
}

void init_array(int array_in[], int elements)
{
	int k = 0;
	for (k = 0; k < elements; k++)
	{
		array_in[k] = rand() % 100;
	}
}

void print(int array_in[], int elements)
{
	int k = 0;
	for (k = 0; k < elements; k++)
	{
		cout << setw(5) <<array_in[k];
	}
}