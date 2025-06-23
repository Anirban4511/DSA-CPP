#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void backtrack(int index, vector<int> &nums, vector<int> &current, vector<vector<int>> &result)
    {
        if (index == nums.size())
        {
            result.push_back(current);
            return;
        }
        backtrack(index + 1, nums, current, result);
        current.push_back(nums[index]);
        backtrack(index + 1, nums, current, result);
        current.pop_back();
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0, nums, current, result);
        return result;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    A obj;
    result = obj.subsets(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout <<result[i][j];
        }
        cout<<"]";
        cout << endl;
    }
}
