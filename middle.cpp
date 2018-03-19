#include <iostream>
using namespace std;
int main()
{
string s;
int r;
cout<<"Enter the string : "<<endl;
cin>>s;
r=s.size();
int m=r/2;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==s[m])
cout<<'*';
else
cout<<s[i];
}
return 0;
}
