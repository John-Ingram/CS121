
//
// Switches
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
	switch (day)
	{
	case 1: printf("Sunday\n")
		break;
			.
			.
			.
	default: printf("Error\n")
	}

	return 0;
}
