#include<iostream>
#include<string.h>
using namespace std;

class mobil
{
	private :
		char merek[20],ket[20];
		int kecepatan,gigi;
		public :
		void setInput(int k,int gear);
		void setInput2(char *merek_m);
		void cek();
		void tampil()
		{
			cout<<" Mobil : "<<merek;cout<<"\n";
			cout<<" Gigi : "<<gigi;cout<<"\n";
			cout<<" Kecepatan : "<<kecepatan<<" Km/h ";cout<<"\n";
			cek();
			cout<<" Keterangan : "<<ket;cout<<"\n";
		}
		
};
void mobil::setInput(int k,int gear)
{
	kecepatan=k;
	gigi=gear;

}
void mobil::setInput2(char *merek_m)
{
	strcpy(merek,merek_m);
}
void mobil::cek()
{
	if((kecepatan>=0)&&(kecepatan<50))
	{
		strcpy(ket,"kecepatan Mobil pelan");
	}
	else if((kecepatan>=50)&&(kecepatan<80))
	{
		strcpy(ket,"kecepatan Mobil sedang");
	}
	else if((kecepatan>=80)&&(kecepatan<100))
	{
		strcpy(ket,"kecepatan Mobil cepat");
	}
	else
	{
		strcpy(ket,"kecepatan Mobil sangat cepat");
	}
}
	int main()
	{
	
		mobil m;
		int i,j=0;
		m.setInput2("Avanza Veloz ");
		for(i=1;i<=4;i++)
		{
			j=j+30;
			m.setInput(j,1+i);
			m.tampil();
			cout<<"\n\n";
		}
	}

