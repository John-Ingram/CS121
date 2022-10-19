
//
// If Statements
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	unsigned int day = 0;
	printf("Enter day of week as 1-7");
	scanf_s("%u", &day);
	if (day == 1)
	{
		printf("Sunday\n");
	}
	else if (day == 2)
	{
		printf("Monday\n");
	}
	//Test other days
	else
	{
		printf("Error. Invalid input\n");
	}
	return 0;
}
