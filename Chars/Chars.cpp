#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char letterZ = 'Z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "is z a letter or a number " << isalnum(letterZ) << endl;
    cout << "is z a letter or a number " << isalpha(letterZ) << endl;
    cout << "is 5 a number " << isalpha(num5) << endl;
    cout << "is space a spacr " << isspace(aSpace) << endl;
}