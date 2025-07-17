/*
    This code is the implementation of the KMP algorithm like we
    use an array or vector to store some values for corresponding 
    longest prefix suffix. Whenever the str[prefix]!=str[suffix]
    it will goes to the vector[prefix-1] and it will become the new
    prefix unless it becomes 0.
*/

#include<bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string &s)
{
    int prefix,suffix;
    prefix=0;
    suffix=1;
    vector<int>lps(s.size(),0);
    while(suffix<s.size())
    {
        if(s[prefix]==s[suffix]){
            lps[suffix]=prefix+1;
            prefix++;suffix++;
        }
        else
        {
            if(prefix==0)
            {
                lps[suffix]=prefix;
                suffix++;
            }
            else
            {
                prefix=lps[prefix-1];
            }
        }
    }
    return lps[s.size()-1];
}
int main()
{
    string s;
    cin>>s;
    int lps=longestPrefixSuffix(s);
    cout<<"LPS length is : "<<lps<<endl;
}