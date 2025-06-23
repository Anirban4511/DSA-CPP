/*
Write a program to calculate the total no of persons occupied by cookies(Maximize the result)
->Suppose there is two array called Persons and Cookies array like
->Persons = [1,5,3,3,4] and Cookie = [4,2,1,2,1,3]. Assign the cookies to the maximum of Children.
*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    vector<pair<int, int>> maxAssignCookies(vector<int> &children, vector<int> &cookie)
    {
        vector<pair<int, int>> result;
        int l, r;
        l = r = 0;
        while (l < children.size() && r < cookie.size())
        {
            if (children[l] <= cookie[r])
            {
                result.push_back(make_pair(children[l], cookie[r]));
                l++, r++;
            }
            else
            {
                r++;
            }
        }
        return result;
    }
};
int main()
{
    vector<int> children = {1, 5, 3, 3, 4};
    vector<int> cookies = {4, 2, 1, 2, 1, 3};
    sort(children.begin(), children.end());
    sort(cookies.begin(), cookies.end());
    vector<pair<int, int>> result;
    A obj;
    result = obj.maxAssignCookies(children, cookies);
    // printing the result vector of pairs
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i].first << "->" << result[i].second;
        cout << endl;
    }
}