//
// This program illustrates the use of single dimensional arrays.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
int add_all(int values[], int elements);

int main(void)
{

	int even[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int numbers[10] = { 0 }; // Initialize all elements to zero

	unsigned int k = 0, count = 0, sum = 0;

	// Print the array

	printf("\n\nEVEN ARRAY VALUES\n\n");
	while (count < 10)
	{
		printf("%3d", even[count]);
		count++;
	}
	printf("\n\n\n");

	// Initialize array numbers with random values between 0 and 99
	for (count = 0; count < 10; count++)
	{
		numbers[count] = rand() % 100;
	}

	// Print the values from array numbers

	printf("\n\nNUMBERS ARRAY VALUES\n\n");
	count = 0;
	do
	{
		printf("%3d", numbers[count]);
		count++;
	} while (count < 10);
	printf("\n\n\n");

	// Call a function to add the values of the arrays

	sum = add_all(even, 10);
	printf("The sum of the numbers in the even array is: %5d\n", sum);

	sum = add_all(numbers, 10);
	printf("The sum of the numbers in the numbers array is: %5d\n", sum);


	system("pause");
	return 0;
}

int add_all(int values[], int elements)
{
	int sum = 0, k = 0;

	for (k = 0; k < elements; k++)
	{
		sum += values[k];
	}
	return sum;
}