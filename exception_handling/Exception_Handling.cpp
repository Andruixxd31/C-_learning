#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    double num = 10,
           num2 = 0;
    try
    {
        if (num2 == 0)
        {
            throw "Division by zero";
        }
        else
        {
            printf("%.1f / %.1f = %.1f", num, num2, num / num2);
        }
    }
    catch (const char *exp)
    {
        cout << "Error: " << exp << endl;
    }
}
