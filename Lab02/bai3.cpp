#include<iostream>
#include <sstream>
#include<string>
#define ll long long
#define For(i,a,b)  for( ll i=(a);i<(b);i++)
#define Fors(i,a,b)  for( ll i=(a);i<=(b);i++)
using namespace std;

int main()
{
	ll a,b;
	string s;
x:
	cout<<"Enter first number, operator, second number: ";
	cin>>a>>s>>b;
	if(s=="/")
		{	string k;
			cout<<"\nAnswer = "<<(double)a/b;
			cout<<"\nDo another (y/n)? ";cin>>k;
			if(k=="y")goto x;
		}
	if(s=="*")
		{	string k;
			cout<<"Answer = "<<a*b;
			cout<<"\nDo another (y/n)? ";cin>>k;
			if(k=="y")goto x;
		}
	if(s=="+")
		{	string k;
			cout<<"Answer = "<<a+b;
			cout<<"\nDo another (y/n)? ";cin>>k;
			if(k=="y")goto x;
		}
	if(s=="-")
		{	string k;
			cout<<"Answer = "<<a-b;
			cout<<"\nDo another (y/n)? ";cin>>k;
			if(k=="y")goto x;
		}
	return 0;
}
