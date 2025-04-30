#include <iostream>

using namespace std;

int main()
{

    int iNumber1 = 0;
    int iNumber2 = 0;
    int iNumber3 = 0;
    int iNumber4 = 0;
    int iNumber5 = 0;
    int iNumber6 = 0;

    int iSum;
    int iMean;


    cout << "Give me 6 numbers" << endl;

    cin >> iNumber1 >> iNumber2 >> iNumber3 >> iNumber4 >> iNumber5 >> iNumber6;


    iSum = iNumber1 + iNumber2 + iNumber3 + iNumber4 + iNumber5 + iNumber6;
    iMean = iSum / 6;

    cout << "the mean is " << iMean << endl;

    return 0;
}