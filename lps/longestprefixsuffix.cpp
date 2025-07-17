/*
Longest prefix suffix means matching two formed strings from a given string
like the first formed string will be made of letters from the left side and the other
string will be formed by adding the character from right to left but in reverse manner.
Then if the two strings are equal then we will return the string(longest prefix suffix).

Example: 
Str="AACAA"
prefix strings are : A          suffix strings are:   A
                     AA                               AA   
                     AAC                              CAA
                     AACA                             ACAA

Example :
Str="ABCDEABCD"

prefix strings are : A          suffix strings are:  D
                     AB                              CD
                     ABC                             BCD
                     ABCD                            ABCD
                     ABCDE                           EABCD
                     ABCDEA
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s1,s2,s,s3;
    cin>>str;
    int flag=0;
    int len=0;
    int n=str.size();
    s1=s2=s3=s="";
    for(int i=0;i<n-1;i++)
    {
        s1+=str[i];
        s2+=str[n-1-i];
        s3=s2;
        reverse(s3.begin(),s3.end());
        if(s3==s1){
            flag=1;
            s=s1;
            len=s.size();
        }
    }
if(flag==1)cout<<"Longest Prefix Suffix is : "<<s<<" length : "<<len<<endl;
else cout<<"Longest Prefix Suffix is : "<<s<<" length : "<<len<<endl;
}