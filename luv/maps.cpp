#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;

    // mp[0] = "anirban";
    // mp[5] = "Dishari";
    // mp[4] = "ayan";
    // map<int, string>::iterator it;
    // //normal map is naturally ordered map and it print after sorting the key value
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout <<(*it).first << "->" << (*it).second << endl;
    // }

    // now this is the example of dynamically taking the input for the map;

    int n;
    cout << "Enter the total no of pairs of maps";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key;
        string value;
        cout << "Enter the keys of the " << i + 1 << "pair for the map" << endl;
        cin >> key;
        cout << "Enter the values for the " << i + 1 << "pair for the map" << endl;
        cin >> value;
        mp.insert(make_pair(key, value));
    }
    // printing the pairs for the map
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout << (*it).first << "->" << (*it).second << endl;
        cout << it->first << "->" << it->second << endl;
    }
}