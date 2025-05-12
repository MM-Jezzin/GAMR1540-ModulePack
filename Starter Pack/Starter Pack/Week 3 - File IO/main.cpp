#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream inputFile("text.txt");
    ofstream outputFile("converted.txt");

    char character;
    while (inputFile.get(character)) 
    {
        outputFile.put(toupper(character));

    }

    return 0;
}
