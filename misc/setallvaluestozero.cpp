// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[5]/*={0}*/;
//     fill(arr,arr+5,0);
//     for(int i =1 ;i<=5;i++)
//     {
//         cout<<arr[i]<<endl;
        
//     }
// }

//Doing the same thing for 2D Array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // int arr[2][3]={0};
    int arr[2][3];
    //setting all the values to 0
    for(int i=0;i<2;i++)
    {
        fill(arr[i],arr[i]+3,0);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}