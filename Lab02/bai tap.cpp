#include<iostream>
#include <sstream>
#include<string>
using namespace std;
typedef struct data 
{
	int number1;
	int number2;
	int number3;
} Data;
void in(Data &x)
{
	cout<<"Enter your area code, exchange, and number: ";
	cin>>x.number1;
	cin>>x.number2;
	cin>>x.number3;
	cout<<"\nMy number is (212) 767-8900\n";
}
string out(Data x)
{
	string a="(";
	string b=") ";
	string c="-";
	stringstream s,k,l;
	s<<x.number1;
	k<<x.number2;
	l<<x.number3;
	string u=a+s.str()+b+k.str()+c+l.str();
	return u;
}
int main ()
{
	Data x;
	in(x);
	cout<<"Your number is ";
	cout<<out(x)<<endl;
	return 0;
}
