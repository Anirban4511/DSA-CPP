// #include<bits/stdc++.h>
// using namespace std;
// pair <int,int>findPairTarget(vector<int> &v)
// {
//     vector<pair<int,int>> v1;
//     int target=18;
//     for(int i=0;i<v.size()-1;i++)
//     {
//         for(int j=0;j<v.size();j++)
//         {
//             if(v[i]>=v[j])
//             {
//                 if(v[i]+v[j]==target)
//                 {
//                     v1.push_back(make_pair(v[i],v[j]));
//                 }
//             }
//         }
//     }
//     int max=INT_MIN,index=INT_MIN;
//     for(int i=0;i<v1.size();i++)
//     {
//         if(max<(v1[i].first*v1[i].second))
//         {
//             max=v1[i].first*v1[i].second;
//             index=i;
//         }
//     }
//     return v1[index];

    
// }
// int main()
// {
//     vector<int> v={10,9,1,2,6,7,8,9,11,12};
//     pair<int,int> result;
//     result=findPairTarget(v);
//     cout<<result.first<<","<<result.second;

// }


//Suppose if  I want to see all the pairs whose sum is equals to the target value, assuming the first value will be larger
// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>> findPairTarget(vector<int> &v)
// {
//     vector<pair<int,int>> v1;
//     int target=18;
//     for(int i=0;i<v.size();i++)
//     {
//         for(int j=i+1;j<v.size();j++)
//         {
//                 if(v[i]+v[j]==target)
//                 {
//                     if(v[i]>v[j])
//                     {
//                     v1.push_back(make_pair(v[i],v[j]));
//                     }
//                     else{
//                     v1.push_back(make_pair(v[j],v[i]));
//                     }
//                 }
        
//         }
//     }
//     return v1;

    
// }
// int main()
// {
//     vector<int> v={10,9,1,2,6,7,8,11,12,9};
//     vector<pair<int,int>>result;
//     result=findPairTarget(v);
//     for(int i=0;i<result.size();i++)
//     {
//         cout<<"("<<result[i].first<<","<<result[i].second<<")"<<endl;
//     }

// }



#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> findPairTarget(vector<int> &v)
{
    vector<pair<int,int>> v1;
    int target=18;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
                if(v[i]+v[j]==target)
                {
                    if(v[i]==v[j])
                    {
                        v1.push_back(make_pair(v[i],v[j]));
                    }
                    else{
                    v1.push_back(make_pair(v[i],v[j]));
                    v1.push_back(make_pair(v[j],v[i]));
                    }
                }
        
        }
    }
    return v1;

    
}
int main()
{
    vector<int> v={10,9,1,2,6,7,8,11,12,9};
    vector<pair<int,int>>result;
    result=findPairTarget(v);
    for(int i=0;i<result.size();i++)
    {
        cout<<"("<<result[i].first<<","<<result[i].second<<")"<<endl;
    }

}



