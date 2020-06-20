#include <iostream>
#include <cstdlib>
using namespace std;

void AssignAge(int *pAge);

//comment from derek banas
// ---------- POINTERS ----------
// A Pointer stores a address in memory
// You declare a pointer to be of the same type as the data
// type to which it points
// If you are storing the address of an int then the
// pointer is an int
// When you declare a pointer give it a null value
int main(int argc, char **argv)
{
    int age = 21;
    AssignAge(&age); //reference operator
    cout << "Age: " << age << endl;

    int *pAge2 = NULL;
    pAge2 = &age;
    cout << "Address of pAge2 " << pAge2 << endl;
    cout << "Value of pAge2 " << *pAge2 << endl;
}

void AssignAge(int *pAge)
{
    *pAge = 42; //dereference operator
}