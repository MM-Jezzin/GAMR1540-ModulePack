#include <iostream>
using namespace std;
int main()
{
	int Table[12][12]; //2d array 12 by 12
	for (int row = 0; row < 12; row ++) //loop, runs 12 times
	{
		for (int col = 0; col < 12; col++) //nested loop, also runs 12 times (for every 1 run on the outer loop)
		{
			Table[row][col] = (row + 1) * (col + 1); // adds the number into the array
		}
	}
	int number1;
	int number2;


	cout << "Enter a number from 1 to 12" << endl; // ask user for first number
	cin >> number1;


	cout << "Enter a number from 1 to 12" << endl; // ask user for second number
	cin >> number2;

	if (number1 >=1 && number1 <=12 && number2 >=1 && number2 <= 12) //checking if both numbers are between 1 and 12
	{
		cout << number1 << "x" << number2 << "=" << Table[number1 - 1][number2 - 1] << endl; //printing the result from the table :)
	}
	else
	{
		cout << "You didnt enter a number between 1 and 12, try again." << endl;
	}


	return 0;
}
