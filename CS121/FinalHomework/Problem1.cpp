//
//  This is an adapted version of the instructor provided "find_word" program
//  Modified By John Ingram
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string reverseit(string line);
string getVertical(unsigned int col);


int main(void)
{
	string horizontal_word = "";
	string reversed_horizontal_word =  "";
    string vertical_word = "";
    string reversed_vertical_word = "";
	string puzzle_line = "";
    string puzzle_low = "";
	string dictionary_word = "";
    unsigned int j, k;
    char ch;
    bool found = false;

	ifstream dictionary;
	ifstream puzzle;
	puzzle.open("./Puzzle.txt");
	if (!puzzle)
	{
		cout << "Unable to open puzzle file" << endl;
		system("pause");
		return 1;
	}
	else
	{
		cout << "Puzzle file opened" << endl;
	}

	dictionary.open("./Dict.txt");
	if (!dictionary)
	{
		cout << "Unable to open dictionary file" << endl;
		system("pause");
		return 1;
	}
	else
	{
		cout << "Dictionary file opened" << endl << endl;
	}

    // Get a line from the puzzle
	while (!puzzle.eof())
	{
		puzzle >> puzzle_line;
        cout << endl << puzzle_line << endl;

        // Make sure it is lowercase.
        puzzle_low = "";
        for (j = 0; j < puzzle_line.length(); j++)
		{
            ch = tolower(puzzle_line.at(j));
            puzzle_low = puzzle_low + ch;
		}

        // Extract 4 characters 
		for (k = 0; k < puzzle_low.length() - 3; k++)
		{
			horizontal_word = puzzle_low.substr(k,4);

			// Make a reverse copy of the test_word	
			reversed_horizontal_word = reverseit(horizontal_word);

            // Now go through the whole dictionary to see if these are words
			dictionary >> dictionary_word; // Get one word from the dictionary
			while(!dictionary.eof())
			{

					if (dictionary_word == horizontal_word)
					{
						cout << horizontal_word << " is a word" << endl;
					}
					if (dictionary_word == reversed_horizontal_word)
					{
						cout << reversed_horizontal_word << " is a word" << endl;
					}

                    dictionary >> dictionary_word; // Get next word from the dictionary

			} // End dictionary search loop

            // Reset the dictionary file to test the next words.
			dictionary.clear();
			dictionary.seekg(0, ios::beg);
            
		} // End loop for processing one line of the puzzle

	} // End loop for testing each line of the puzzle
		
//
//
//  Test  columns
//

    


    for(unsigned int i = 0; i < 10; i++)
	{
		puzzle_line = getVertical(i);
        cout << endl << puzzle_line << endl;

        // Make sure it is lowercase.
        puzzle_low = "";
        for (j = 0; j < puzzle_line.length(); j++)
		{
            ch = tolower(puzzle_line.at(j));
            puzzle_low = puzzle_low + ch;
		}

        // Extract 4 characters 
		for (k = 0; k < puzzle_low.length() - 3; k++)
		{
			horizontal_word = puzzle_low.substr(k,4);

			// Make a reverse copy of the test_word	
			reversed_horizontal_word = reverseit(horizontal_word);

            // Now go through the whole dictionary to see if these are words
			dictionary >> dictionary_word; // Get one word from the dictionary
			while(!dictionary.eof())
			{

					if (dictionary_word == horizontal_word)
					{
						cout << horizontal_word << " is a word" << endl;
					}
					if (dictionary_word == reversed_horizontal_word)
					{
						cout << reversed_horizontal_word << " is a word" << endl;
					}

                    dictionary >> dictionary_word; // Get next word from the dictionary

			} // End dictionary search loop

            // Reset the dictionary file to test the next words.
			dictionary.clear();
			dictionary.seekg(0, ios::beg);

		} // End loop for processing one line of the puzzle

	} // End loop for testing each line of the puzzle
    cout << endl << endl << endl;
	return 0;
}

//
// Function Reversit
//

string reverseit(string line)
{
	string invert_line = "";
	int position = 0;

	for (position = line.length() - 1; position >= 0; position--)
		invert_line += line.at(position);

	return invert_line;

}

string getVertical(unsigned int col)
{
	ifstream puzzle;
	puzzle.open("./Puzzle.txt");
    string result = "";
	string line = "";
	while(!puzzle.eof())
	{
		puzzle >> line;
		result += line[col];
	}
	puzzle.clear();
	puzzle.seekg(0, ios::beg);
    return result;
	
}