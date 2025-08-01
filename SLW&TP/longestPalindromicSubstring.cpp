#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string &s)
{
    int left,right,start,maxlen;
    for(int i =0;i<s.size();i++)
    {
        //even case
        left=i;
        right=i+1;
        while(left>=0 && right<s.size()&&s[left]==s[right])
        {
            if(right-left+1>maxlen)
            {
                maxlen=right-left+1;
                start=left;
            }
            left-=1;
            right+=1;
        }
        //odd case
        left=i-1;
        right=i+1;
        while(left>=0 && right<s.size()&&s[left]==s[right])
        {
            if(right-left+1>maxlen)
            {
                maxlen=right-left+1;
                start=left;
            }
            left-=1;
            right+=1;
        }

    }
    return s.substr(start,maxlen);
}
int main()
{
    string s="abbaca";
    string longString=longestPalindrome(s);
    cout<<longString;
}