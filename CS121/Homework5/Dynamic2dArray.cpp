#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void initialize(unsigned int array[][20], unsigned int rows, unsigned int cols);
void print_array2D(unsigned int array[][20], unsigned int rows, unsigned int cols);

int main() 
{

	unsigned int j,k;
	int rows = 0, columns = 0;

	unsigned int *row1, *row2, *row3, *row4;  // Declare pointers for 4 one dimensional arrays

//
// CASE II
//  Dynamically create the table of pointers
//



	cout << "Enter the number of rows and columns that you want." << endl;
	cin >> rows >> columns;

	cout << "Make a dynamic 2D array." << endl;





	// Initialize





	// Print out the contents of table

	cout << endl << "CONTENTS OF TABLE " << endl << endl;



	cout << endl << endl << endl;
	system("pause");

}

void initialize(unsigned int array[][20], unsigned int rows, unsigned int cols) 
{
	unsigned int i, j;
	for(i = 0; i < rows; i++) 
	{
		for(j=0; j < cols; j++) 
		{
			array[i][j] = rand() % 100;
		}
	}
}

void print_array2D(unsigned int array[][20], unsigned int rows, unsigned int cols) 
{
	unsigned int j, k;

	cout << "VARIABLE    CONTENTS   ADDRESS" << endl;
	for(j = 0; j < rows; j++)
	{
		for(k = 0; k < cols; k++) {
			cout << "array["<<j<< "][" << k <<"]" << setw(5) << array[j][k] << setw(14) << (int) &array[j][k] << endl;
		}
		cout << endl;
	}
	cout << endl;
	return;
}