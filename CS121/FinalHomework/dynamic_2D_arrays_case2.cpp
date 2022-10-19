#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#define SKIP2 cout << endl << endl;

using namespace std;

// Note the overloaded functions for initialize and printarray
void initialize(unsigned int array_in[], unsigned int elements);
void initialize(unsigned int array[][10], unsigned int rows, unsigned int cols);
void initialize(unsigned int **array, unsigned int rows, unsigned int cols);

void printarray(unsigned array_in[], unsigned int elements);
void printarray(unsigned int array[][10], unsigned int rows, unsigned int cols);
void printarray(unsigned int **array, unsigned int rows, unsigned int cols);

int main()
{

	int j, k;
	int rows = 0, columns = 0;
	unsigned int old_numbers[6][10] = { 0 };
	unsigned int *values = new unsigned int[20];
	unsigned int **numbers = nullptr;
	unsigned int **table = nullptr;

	cout << "Initilaize and print 1D array old_numbers." << endl;
	// Note that the array must be declared with 10 columns
	// but the function can be called with fewer columns.
	//
	initialize(old_numbers, 6, 8);
	printarray(old_numbers, 6, 8);
	SKIP2

	cout << "Initilaize and print 1D array values." << endl;
	initialize(values, 20);
	printarray(values, 20);
	SKIP2

	// Dynamically create array numbers with 4 rows and 10 columns

	numbers = new unsigned int*[4];
	for (k = 0; k < 10; k++)
		numbers[k] = new unsigned int[10];

	cout << "Initialize and print 2D array numbers" << endl;
	initialize(numbers, 4, 10);
	printarray(numbers, 4, 10);
	SKIP2

	system("pause");

	// Create 2D Dynamic array with arbitrary rows and columns

	cout << "Enter the number of rows and columns for the array " << endl;
	cin >> rows >> columns;

	table = new unsigned int*[rows];
	for (k = 0; k < rows; k++)
		table[k] = new unsigned int[10];

	cout << "Initialize and print 2D array table" << endl;
	initialize(table, 4, 10);
	printarray(table, 4, 10);
	SKIP2

	cout << endl;
	system("pause");

	return 0;
}

//
// Initialize a one dimensional array with random positive integers 
// This function is overloaded: There is more than one function with this name.
//
void initialize(unsigned int array_in[], unsigned int elements)
{
	unsigned int k;

		for (k = 0; k < elements; k++)
		{
			array_in[k] = rand() % 100;
		}

}
//
// Initialize a two dimensional array with random positive integers 
// The actual array passed to the function must be declared with 10 columns
// This function is overloaded: There is more than one function with this name.
//

void initialize(unsigned int array[][10], unsigned int rows, unsigned int cols)
{
	unsigned int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			array[i][j] = rand() % 100;
		}
	}
}

//
// Initialize a two dimensional array with random positive integers 
// This function requires a pointer to unsigned int for formal parameter array
// This function is overloaded: There is more than one function with this name.
//
void initialize(unsigned int **array, unsigned int rows, unsigned int cols)
{
	unsigned int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			array[i][j] = rand() % 100;
		}
	}
}

//
// Print the contents of a one dimensional array of unsigned integers
// This function is overloaded: There is more than one function with this name.
//

void printarray(unsigned array_in[], unsigned int elements)
{
	unsigned int k;
	cout << "VARIABLE    CONTENTS" << endl;
	for(k = 0; k < elements; k++) 
	{
		cout << "array[" << setw(2) << k << "]" << setw(8) << array_in[k] << endl;
	}
	cout << endl;
	return;
}
//
// Print the contents of a two dimensional array
// The actual array passed to the function must be declared with 10 columns
// This function is overloaded: There is more than one function with this name.
//

void printarray(unsigned int array[][10], unsigned int rows, unsigned int cols)
{
	unsigned int j, k;
	cout << "VARIABLE    CONTENTS" << endl;
	for (j = 0; j < rows; j++)
	{
		for (k = 0; k < cols; k++) {
			cout << "array[" << j << "][" << k << "]" << setw(5) << array[j][k] << endl;
		}
		cout << endl;
	}
	cout << endl;
	return;
}

//
// Print the contents of a two dimensional array with variable rows and columns
// The actual array passed to the function must contain pointers to unsigned int
// This is identical to printarray_2Dptr since array[] is the same as *array
// This function is overloaded: There is more than one function with this name.

void printarray(unsigned int **array, unsigned int rows, unsigned int cols)
{
	unsigned int j, k;
	cout << "VARIABLE    CONTENTS" << endl;
	for (j = 0; j < rows; j++)
	{
		for (k = 0; k < cols; k++) {
			cout << "array[" << j << "][" << k << "]" << setw(5) << array[j][k] << endl;
		}
		cout << endl;
	}
	cout << endl;
	return;
}