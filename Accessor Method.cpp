#include <iostream>
using namespace std;
class segitiga
{
	private:
		double alas=6.2,tinggi=8;
		public:
			double Getluas();
			void tampil()
			{
				cout<<" Luas Segitiga : "<<Getluas();
			}
			
};
class balok
{
	private:
		int panjang=12,lebar=9,tinggi=10;
		public:
			int GetLuasB();
			void luas()
			{
				cout<<" Luas Balok : "<<GetLuasB();
			}
};
int balok::GetLuasB()
{
	return ((2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar));
}
double segitiga::Getluas()
{
	return (alas*tinggi/2);
}
int main()
{
	segitiga s;
	balok b;
	s.Getluas();
	cout<<"\n\n";
	s.tampil();
	cout<<"\n\n";
	b.luas();
}
