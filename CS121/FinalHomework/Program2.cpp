// This program is a modified version of the instructor 
// provided "dynamic_2d_arrays_case2" program
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#define SKIP2 cout << endl << endl;

using namespace std;

void initialize(unsigned int **array, unsigned int rows, unsigned int cols);
bool contains(vector<unsigned int> array, unsigned int number);
void transpose(unsigned int **sourceArray, unsigned int **transporseArray, unsigned int rows);

void printarray(unsigned int **array, unsigned int rows, unsigned int cols);


vector<unsigned int> usedNumbers;

int main()
{
	int j, k;
	int rows = 0, columns = 0;
	unsigned int old_numbers[6][10] = { 0 };
	unsigned int **table = nullptr;
    unsigned int **array_transpose = nullptr;

	
	// Create 2D Dynamic array with arbitrary rows and columns

	cout << "Enter the number of rows and columns for the array " << endl;
	cin >> rows;

	table = new unsigned int*[rows];
	for (k = 0; k < rows; k++)
		table[k] = new unsigned int[rows];

    array_transpose = new unsigned int*[rows];
	for (k = 0; k < rows; k++)
		array_transpose[k] = new unsigned int[rows];
	cout << "Initialize and print 2D array table" << endl;
	initialize(table, rows, rows);
	printarray(table, rows, rows);
	SKIP2
    cout << "Transposed Array" << endl;
    transpose(table, array_transpose, rows);
    printarray(array_transpose, rows, rows);

	cout << endl;

	return 0;
}




//
// Initialize a two dimensional array with random positive integers 
// This function requires a pointer to unsigned int for formal parameter array
// This function has been modified from it's original to 
// ensure that each unsigned integer is unique
//
void initialize(unsigned int **array, unsigned int rows, unsigned int cols)
{
	unsigned int i, j, current = rand() % 4000;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
            //Keep generating numbers till one hasn't already been used
            while(contains(usedNumbers, current)) 
            {
                current = rand() % 4000;
            }
            usedNumbers.push_back(current);
            array[i][j] = current;
		}
	}
}

bool contains(vector<unsigned int> array, unsigned int number)
{
    for(unsigned int i = 0; i < array.size(); i++)
    {
        if(array.at(i) == number) return true;
    }
    return false;
}



//
// Print the contents of a two dimensional array with variable rows and columns
// The actual array passed to the function must contain pointers to unsigned int
// This function has been modified to support the format requested by the instructor
//
void printarray(unsigned int **array, unsigned int rows, unsigned int cols)
{
	unsigned int j, k;
	for (j = 0; j < rows; j++)
	{
		for (k = 0; k < cols; k++) {
			cout << setw(4) << array[j][k] << "   ";
		}
		cout << endl;
	}
	cout << endl;
	return;
}

void transpose(unsigned int **sourceArray, unsigned int **transporseArray, unsigned int rows)
{
    for(unsigned int r = 0; r < rows; r++)
    {
        for(unsigned int c = 0; c < rows; c++)
        {
            transporseArray[r][c] = sourceArray[c][r];
        }
    }
    return;
}