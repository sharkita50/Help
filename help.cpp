//help/user guide
#include<iostream>

using namespace std;

void help (int);

int main()
{
	int start;
	cout << "Press 1 for help or instructions on how to use the game." << endl;
	cin >> start;
	help(start);


	return 0;
}
void help(int a)		// Function to display user guide.
{
	cout << "To play the game select 2 places on the board to see if they match." << endl;
	cout << "The places on the board are as follows: "<< endl;
	cout << "1   2  3  4" << endl;
	cout << "5   6  7  8" << endl;
	cout << "9  10 11 12" << endl;
	cout << "13 14 15 16" << endl;
	cout << "If they don't match try again, if they do select another 2 places until you win the game." << endl;


}