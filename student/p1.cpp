#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int a;//variable declaration(must)
    a=9;//variable initialization with a value
    */
   int a=9; //variable declaration with initialization 
   int b=23;
   int sum=a+b;
   int rem;
   rem=sum%6;
   /*
   int sum;
   sum=a+b;  sum=9+23;
   */
  int div=sum/6;
  int result=div*2;

  cout<<"Remainder is = "<<rem<<endl;
  cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
  cout<< "Addition = "<<sum<<" "<<"division = "<<div<<endl;
  cout<<"The result is = "<<result;

}
