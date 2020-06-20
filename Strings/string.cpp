#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string str1 = "Im a string";
    cout << "first " << str1[0] << endl;
    cout << "last " << str1.back() << endl;
    cout << "lenght " << str1.length() << endl;
    //Copying string
    string str2 = str1;
    string str3(str2, 4); //copy after the firs four char
    string str4 = str1 + "and you're not";
    str4.append("!");
    str4.erase(12, str4.length() - 1); //erase characters starting at the 12th char till the end

    if (str4.find("string") != string::npos) //string::pos is the end same as the end of the string
        cout << "string index " << str4.find("string") << endl;

    cout << "substring " << str4.substr(6, 6) << endl; //start at the sixtth index and go 6 characters after that

    string strNum = to_string(1 + 2);
    cout << "I'm a string " << strNum << endl;
}