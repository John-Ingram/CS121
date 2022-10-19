//
// Program 3
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


int main(void)
{
	float min = 9999;
	vector<float> grades;
	int count = 0;
	string input;
	while (true)
	{
		cout << "Enter a grade or enter 'E' to exit " << endl;
		cin >> input;
		if (input == "E")
		{
			break;
		}
		else if (strtof((input).c_str(), 0) < min)
		{
			if (min != 9999)
			{
				grades.push_back(min);
				count++;
			}
			min = strtof((input).c_str(), 0);
		}
		else
		{
			grades.push_back(strtof((input).c_str(), 0));
			count++;
		}
	}

	cout << "The average of the " << grades.size() << " grades ";
	//Output grades
	for (auto const& grade : grades) 
	{
		cout << grade << ' ';
	}
	cout << endl << "The lowest grade " << min << " will be dropped" << endl;
	int i = 0;
	float total = 0;
	while (i < grades.size())
	{
		total += grades[i];
		i++;
	}
	cout << "Average: " << (total / i) << endl;


	return 0;
}

