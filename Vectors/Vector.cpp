#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    vector<int> vNums(2);
    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3);
    cout << vNums.size() << endl;
}