#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{string s,sr;
cout<<"Enter the string : "<<endl;
getline(cin,s);
sr=s;
reverse(sr.begin(),sr.end());
if(s==sr)
cout<<"The given string is a palindrome "<<endl;
else
cout<<"The given string is a not palindrome "<<endl;
return 0;
}
