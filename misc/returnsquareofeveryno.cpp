#include<bits/stdc++.h>
using namespace std;
long int squareNumberEach(int num)
{
    string s=to_string(num);
    string result="";
    int i=0;
    while(i<s.length())
    {   
        int digit=s[i]-'0';
        int square=digit*digit;
        result+=to_string(square);
        i++;
    }
    return stoi(result);
}

int main()
{
    long int x;
    cin>>x;
    cout<<squareNumberEach(x);
}