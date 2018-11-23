
# include<iostream>
using namespace std;

class thoiGian
{
private:
	int gio, phut, giay;
public:
	friend istream& operator >> (istream&, thoiGian&);
	friend ostream& operator <<(ostream&, thoiGian);
	thoiGian  operator +(thoiGian);
	thoiGian operator -(thoiGian);


	thoiGian();
	~thoiGian();
};


istream& operator >> (istream &is, thoiGian &tg)
{
	//0<=gio<=23
	do{
		cout << "nhap gio : "; is >> tg.gio;
		if (tg.gio < 0 || tg.gio>23) cout << "\ngio khong hop le xin kiem tra lai! ";
	} while (tg.gio < 0 || tg.gio>23);

	// 0<=phut<=59
	do
	{
		cout << "nhap phut : "; is >> tg.phut;
		if (tg.phut < 0 || tg.phut>59) cout << "phut khong hop le xin kiem tra lai!";
	
	} while (tg.phut < 0 || tg.phut>59);
	
		// 0<=giay<=59
		do
		{
			cout << "nhap giay : "; is >> tg.giay;
			if (tg.giay < 0 || tg.giay>59) cout << "giay khong hop le xin kiem tra lai!";

		} while (tg.giay < 0 || tg.giay>59);

	return is;
}
ostream& operator << (ostream &os, thoiGian tg)
{
	os << tg.gio << "h:" << tg.phut << "m:" << tg.giay << "s\n";
	return os;
}
thoiGian thoiGian:: operator +(thoiGian x)
{
	thoiGian Tong;
	Tong.giay = this->giay + x.giay;
	Tong.phut = this->phut + x.phut;
	Tong.gio = this->gio + x.gio;
	if (Tong.giay > 59)
	{
		Tong.giay -= 60;
		Tong.phut++;
	}
	if (Tong.phut > 59)
	{
		Tong.phut -= 60;
		Tong.gio++;
	}
	if (Tong.gio > 23)
	{
		Tong.gio -= 24;
	}
	return Tong;
}
thoiGian::thoiGian()
{
	gio=0;
	phut=0;
	giay=0;
}


thoiGian::~thoiGian()
{
}

int main()
{
	thoiGian tg1,tg2;
	cout << "thoi gian thu 1 : \n";
	cin>>tg1;
	cout<<tg1;
	cout << "\nthoi gian thu 2: \n";
	cin >> tg2;
	cout << tg2;
	cout << "\ntg1+tg2 = " << tg1 + tg2;
}


