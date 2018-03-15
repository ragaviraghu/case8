#include<iostream>
using namespace std;
int main()
{
int N,M,product,c=0;
cout<<"Enter number1 : "<<endl;
cin>>N;
cout<<"Enter number2 : "<<endl;
cin>>M;
product=N*M;
for(int i=0;i<=product;i++)
{
if(product==i*i)
{
c=1;
break;
}
else
{c=2;
}
}
if(c==1)
cout<<"Yes(The product of given 2 numbers is a perfect square)"<<endl;
else
cout<<"No"<<endl;
return 0;
}
