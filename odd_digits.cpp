#include<iostream>
#include<string>
using namespace std;
int main()
{
int N;
string s;
cout<<"Enter a number : "<<endl;
cin>>N;
s=to_string(N);
cout<<"The odd digits in the number are : "<<endl;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]%2==1)
cout<<s[i]<<endl;	
}
return 0;
}
