#include<iostream>
using namespace std;
int decimaltoBinary(int n);
int main()
{
    int n;
    cin>>n;
    cout<<"The binary equivalent to the "<<n<<" is - "<<decimaltoBinary(n);
}
int decimaltoBinary(int n)
{
    int rem=0;
    if(n==0)
    {
        return 0;
    }
    rem=n%2;
    return decimaltoBinary(n/2)*10+rem;

}