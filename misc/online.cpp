// C++ Program to demonstrate C-style string declaration
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char s1[] = {'g', 'f', 'g'};
    char s2[] = {'a', 'b', 'd', '\0'};

    cout << "Size of s1 = " << sizeof(s1) << endl;
    cout << "Length of s1 = " << strlen(s1) << endl;
    cout << "Size of s2 = " << sizeof(s2) << endl;
    cout << "Length of s2 = " << strlen(s2) << endl;

    return 0;
}
