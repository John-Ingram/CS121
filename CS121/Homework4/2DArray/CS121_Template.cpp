//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int ROWS = 4;
const int COLS = 6;

void initialize(int array_in[][COLS], int rows, int cols);
void print(int array_in[][COLS], int rows, int cols);

int main(void)
{
	int numbers[ROWS][COLS] = { 0 };
	int values[8][10] = { 0 };
	int k = 0, j = 0;
	//initialize array numbers
	initialize(numbers, ROWS, COLS);
	//print the array
	cout << "Array Numbers:" << endl;
	print(numbers, ROWS, COLS);

	
	system("pause");
	return 0;
}

void initialize(int array_in[][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			array_in[i][j] = rand() % 100;
		}
	}
	return;
}

void print(int array_in[][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			cout <<setw(5)<< array_in[i][j]<<" ";
		}
		cout << endl;
	}
	return;
}