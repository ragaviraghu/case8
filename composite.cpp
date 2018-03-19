#include<iostream>
using namespace std;
int main()
{
int i,n,c=0;
cout<<"Enter a number : "<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if(c==2)
cout<<"No (given number is not composite,i.e prime number) "<<endl;
else
cout<<"Yes (given number is composite) "<<endl;
return 0;
}
