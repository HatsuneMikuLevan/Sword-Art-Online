#include<iostream>
using namespace std;
 
int main()
{
int n,x=9;
cin>>n;
x+=n%10*100+n%100-n%10+n/100;
 
cout<<x;
return 0;
}
