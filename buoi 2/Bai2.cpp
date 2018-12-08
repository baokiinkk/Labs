#include <iostream>
#include <conio.h>
using namespace std;

class employer
{
	private:
	 	int id, senority;
	public:
		void ID();
		void compensation();
		void out();
	
};
void INPUT(employer a[],int n);
void OUTPUT(employer a[],int n);
int main() 
{
	
	employer a[100];
	INPUT(a,1);
	cout<<"\n\n====================================\n\n";
	OUTPUT(a,1);
	return 0;
}

void employer::ID() 
{
	cout<<"\nInput your ID:";
	cin>>id;
	cout<<"Input your senority:";
	cin>>senority;	
}
void employer::compensation() 
{
	float comp=3000;
	float r=0.055;
	for (int i=1;i<=senority;i++) {
		comp=comp+(comp*r);
	}
	cout<<"\nYour compensation: "<<comp<<endl;
}

void employer::out() 
{
	cout<<"\nResult:\n";
	cout<<"ID: "<<id<<" senority: "<<senority;
}

void INPUT(employer a[],int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"\nEmployer "<<i+1<<":\n";
		a[i].ID();
	}
}

void OUTPUT(employer a[],int n)
{
	for (int i=0; i<n; i++)
	{
		a[i].out();
		a[i].compensation();
	}
}

