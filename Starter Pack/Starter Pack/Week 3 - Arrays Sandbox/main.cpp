#include <iostream>
using namespace std;
int main()
{
	//// 6x6 array
 //   int iarr[6][6] = { 
	//	{1,2,3,9,1,7},
	//	{4,5,6,1,2,3},
	//	{1,2,3,7,8,9},
	//	{1,2,3,9,1,7},
	//	{4,5,6,1,2,3},
	//	{1,2,3,7,8,9}
	//};


	//
 //   int iRow = sizeof iArr / sizeof iArr[0];   // Dividing the size of the array by the size of one row gives how many rows there are. 
	//int iCol = sizeof iArr[0] / sizeof iArr[0][0];  //size of one row, divided by size of one integer - Gives number of colums

	//// use nested for loops to print the content of the array
	//for (int i = 0; i < iRow; i++) //Loop where i is 0, and repeats while i is less than 6. i increased by 1 - used to go through each row
	//{
	//	for (int j = 0; j < iCol; j++)//nested loop, Same as previous loop, but for j - goes through the colums
	//	{
	//		std::cout << "index " << i << j << " = " << iArr[i][j] << "\t"; // "index", index positions(i,row)(j,column), then value in that index, then space
	//	}
	//	std::cout << std::endl; //Moves to next line
	//}


	//float afNumbers[6] = { 86.5, 95.6, 12.0, -6.5, 104.2, 34.9 };
	//float total = 0;
	//for (int i = 0; i < 6; i++) // Loop
	//{
	//	total = total + afNumbers[i]; // adds each number up (adds 1 to i each time so it adds the next number along)
	//}
	//float average = total / 6.0; //  divides by 6 to get the average
	//cout << "The average is : " << average;

    int timesTable1[12];  //setting each number in the array seperately
    timesTable1[0] = 12;
    timesTable1[1] = 24;
    timesTable1[2] = 36;
    timesTable1[3] = 48;
    timesTable1[4] = 60;
    timesTable1[5] = 72;
    timesTable1[6] = 84;
    timesTable1[7] = 96;
    timesTable1[8] = 108;
    timesTable1[9] = 120;
    timesTable1[10] = 132;
    timesTable1[11] = 144;

    // Print the array using a for loop
    for (int i = 0; i < 12; i++)
    {
        cout << "12 x " << (i + 1) << " = " << timesTable1[i] << endl;
    }
    cout << endl;

    // 2️⃣ Declare and initialize the array at the same time
    int timesTable2[12] = { 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144 };
    // Print the array using a for loop
    for (int i = 0; i < 12; i++) 
    {
        cout << "12 x " << (i + 1) << " = " << timesTable2[i] << endl;
    }
    cout << endl;

    // 3️⃣ Use a for loop to set and then print each number
    int timesTable3[12];

    // Set the numbers using a for loop
    for (int i = 0; i < 12; i++) 
    {
        timesTable3[i] = 12 * (i + 1);
    }

    // Print the numbers using a for loop
    for (int i = 0; i < 12; i++)
    {
        cout << "12 x " << (i + 1) << " = " << timesTable3[i] << endl;
    }
    cout << endl;

    int number;
    cout << "enter a number berween 1 and 12"; //gets user to enter a number
    cin >> number;

    if (number >= 1 && number <= 12) //checks if number is between 1 and 12
    {
        cout << "12 x" << number << " = " << timesTable3[number - 1] << endl; //prints "12 x" number user selected "=" then finds the number in the list, -1 because list starts at 0.
    }
    else
    {
        cout << "Error, enter a number between 1 and 12" << endl;
    }
	system("PAUSE");
    return 0;
