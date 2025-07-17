/*
Longest substring without repeating characters : [substring : continuous sequence of characters in a string]
Eg : s = "cabdzabcd"

longest length will be here : 5(cabdz or zabcd)

*/

// #include<bits/stdc++.h>
// using namespace std;    

// int longSub(string &s,int size)
// {
//     if(size<2)return size;
//     int maxlen=0;
//     for(int i=0;i<size;i++)
//     {
//         int len=0;
//         int hash[256]={0};
//         for(int j=i;j<size;j++)
//         {
//             if(hash[s[j]]==1)break;
//             len=j-i+1;
//             maxlen=max(len,maxlen);
//             hash[s[j]]=1;
//         }
//     }
//     return maxlen;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     int len;
//     len=longSub(s,s.size());
//     cout<<len;
// }

/*
Time Complexity: O(N^2) because for each character, we may scan the rest of the string in the worst case.
Space Complexity: O(1) since the hash array size is constant (256).
*/


/*Better and Optimal Approach : Using Sliding Window and Two Pointer*/
#include<bits/stdc++.h>
using namespace std;

int longSub(string s)
{
    int n=s.size();
    unordered_map <char,int> hashMap;
    int l,r,maxlen,len;
    l=r=len=maxlen=0;
    while(r<n)
    {
        if(hashMap.find(s[r])!=hashMap.end())
        {
            if(hashMap[s[r]]>l)
            {
                l=hashMap[s[r]]+1;
            }
        }
        len=r-l+1;
        maxlen=max(len,maxlen);
        hashMap[s[r]]=r;
        r++;
    }
    return maxlen;

}
int main()
{
    string s;
    cin>>s;
    int len=longSub(s);
    cout<<len<<endl;
    
}