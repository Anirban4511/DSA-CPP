#include<bits\stdc++.h>
using namespace std;
int main()
{
    string str="This is A Uppercase LETTER";
    string s="";
    int i=0,count=0;
    while(i<str.length())
    {
        if(str[i]>='a' && str[i]<='z')
        {
            s+=str[i];
            count++;
        }
        i++;
    }
    s+=":";
    s+=to_string(count);
    cout<<s;
}