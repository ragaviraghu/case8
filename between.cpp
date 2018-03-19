#include <iostream>
using namespace std;
int main()
{
int N,L,R;
cout<<"Enter the value of N : "<<endl;
cin>>N;
cout<<"Enter the value of L and R : "<<endl;
cin>>L>>R;
if(N>=L && N<=R)
cout<<"Yes(given number lies between L and R)"<<endl;
else
cout<<"No"<<endl;
return 0;
}
