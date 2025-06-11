#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
float area(float a, float b, float c);
int main()
{
    float s1, s2, s3;
    float ar;
    cout << "Enter the three sides of the triangle - ";
    cin >> s1 >> s2 >> s3;
    try
    {
        ar = area(s1, s2, s3);
        cout << "The area of the triangle is - " << ar;
    }
    catch (char[])
    {
        cout << "Inconsistent data";
    }
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2.0;
    float ar = s * (s - a) * (s - b) * (s - c);
    if (ar < 0)
    {
        throw "Error";
    }
    ar = sqrt(ar);
    return ar;
}