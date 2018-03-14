#include <iostream>
using namespace std;
int main() 
{string s;
int flag=0;
cout<<"Enter the string : "<<endl;
getline(cin,s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
flag=1;	
}
if(flag==1)
cout<<"The given string contains vowels(Yes)"<<endl;
else
cout<<"The given string does not contain vowels(No)"<<endl;
return 0;
}
