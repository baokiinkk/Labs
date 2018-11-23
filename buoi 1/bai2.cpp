#include<iostream>
#include <sstream>
#include<string>
#define ll long long
#define For(i,a,b)  for( ll i=(a);i<(b);i++)
#define Fors(i,a,b)  for( ll i=(a);i<=(b);i++)
using namespace std;
double ans(ll n,ll k,double l)
{
	double u=n;
	double s=l/100;
	For(i,0,k)
	{
		u=u+(u*s);
	}
	return u;
}
int main()
{
	ll n,k;
	double  l;
	cout<<"Enter initial amount: ";cin>>n;
	cout<<"\nEnter number of years: ";cin>>k;
	cout<<"\nEnter interest rate (percent per year): ";cin>>l;
	cout<<"\nAt the end of 10 years, you will have : ";
	cout<<ans(n,k,l)<<endl;
	return 0;
}
