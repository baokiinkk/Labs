#include<iostream>
#include <sstream>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long
#define For(i,a,b)  for( ll i=(a);i<(b);i++)
#define Fors(i,a,b)  for( ll i=(a);i<=(b);i++)
using namespace std;
int UCLN(int a, int b)
{
	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
class PhanSo
{
private:

	int TuSo, MauSo;
public:
	void in();
	void out();
	PhanSo operator+(PhanSo);
	PhanSo operator-(PhanSo);
	PhanSo operator*(PhanSo);
	PhanSo operator/(PhanSo);

};
void PhanSo::in()
{
x:
	cout << "\t\t\tnhap tu so : "; cin >> TuSo;
	cout << "\t\t\tnhap mau so : "; cin >> MauSo; 
	if (MauSo == 0) { cout << "khong hop le xin kiem tra lai!\n"; goto x; }
}
void PhanSo::out()
{
	int s = UCLN(TuSo, MauSo);
	cout << "\t\t\t\t   KETQUA = " << TuSo << "/" << MauSo;
	cout << "\n \t\t\tKETQUA da rut gon = " << TuSo / s << "/" << MauSo / s << endl;
}
PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo Tong;

	Tong.TuSo = this->TuSo * a.MauSo + this->MauSo * a.TuSo;

	Tong.MauSo = this->MauSo * a.MauSo;

	return Tong;
}
PhanSo PhanSo::operator-(PhanSo a)
{
	PhanSo Tong;

	Tong.TuSo = this->TuSo * a.MauSo - this->MauSo * a.TuSo;

	Tong.MauSo = this->MauSo * a.MauSo;

	return Tong;
}
PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo Tong;

	Tong.TuSo = this->TuSo * a.TuSo;

	Tong.MauSo = this->MauSo * a.MauSo;

	return Tong;
}
PhanSo PhanSo::operator/(PhanSo a)
{
	PhanSo Tong;

	Tong.TuSo = this->TuSo * a.MauSo;

	Tong.MauSo = this->MauSo * a.TuSo;

	return Tong;
}
int main()
{
	string u;
	PhanSo x, y, s;
x:
	cout << "\t\t\t========================= PHAN SO A ==========================\n";
	x.in();
	cout << "\t\t\t==============================================================\n\n";
	cout << "\nphep toan can tinh :";
	cin >> u; cout << endl;
	cout << "\t\t\t========================= PHAN SO B ==========================\n";
	y.in();
	cout << "\t\t\t==============================================================\n\n\n\n\n";
	cout << "\t\t-------------------------------------------------------------------------------\n";
	cout << "\t\t\t===================== KET QUA PHEP TOAN ======================\n";
	if (u == "+")
	{
		string a;
		s = x + y; s.out();
		cout << "\t\t\t==============================================================\n\n";
		cout << "\t\t\tDo another (y/n)? "; cin >> a;
		if (a == "y")goto x;
	}
	if (u == "-")
	{
		string a;
		s = x - y; s.out();
		cout << "\t\t\t==============================================================\n";
		cout << "\t\t\tDo another (y/n)? "; cin >> a;
		if (a == "y")goto x;
	}
	if (u == "*")
	{
		string a;
		s = x*y; s.out();
		cout << "\t\t\t==============================================================\n";
		cout << "\t\t\tDo another (y/n)? "; cin >> a;
		if (a == "y")goto x;
	}
	if (u == "/")
	{
		string a;
		s = x / y; s.out();
		cout << "\t\t\t==============================================================\n";
		cout << "\t\t\tDo another (y/n)? "; cin >> a;
		if (a == "y")goto x;
	}


	return 0;
}
