
//
// Hello World
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	int grade = 0, sum = 0, counter = 0, num_grades = 0;
	printf("Enter number of grades.\n");
	scanf_s("%d", &num_grades);
	while (counter < num_grades)
	{
		printf("Enter a grade\n");
		scanf_s("%d", &grade);
		sum += grade;
		counter++;
	}

	printf("sum = % 6d\n", sum);
	for (counter = 0; counter < num_grades; counter++)
	{
		printf("Enter a grade\n");
		scanf_s("%d", &grade);
		sum += grade;
	}

	do
	{

	} while (counter < num_grades);
}
