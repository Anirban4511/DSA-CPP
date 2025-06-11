#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="";
    cin>>str;
    int s=stoi(str);
    int rem=0,quot=0;
    rem=s%10;
    quot=s/10;
    if(rem<=5)
    {
        str=to_string(quot*10);
    }
    else{
        str=to_string((quot+1)*10);
    }
    s=stoi(str);
    cout<<s;
}