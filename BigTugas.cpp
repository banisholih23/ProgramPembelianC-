#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;

class Tiket_konser
{
	public :
		int harga_t, banyak_t, jum_harga,k;
	void input() 
	{
		cout<<"\t Masukan Harga Tiket		: Rp  "; cin>>harga_t;
		cout<<"\t Masukan Banyak Tiket		:    "; cin>>banyak_t;
		jum_harga = harga_t * banyak_t;
	}
	void tampil()
	{
		cout<<"\t Harga Tiket Konser Dangdut	: "<<harga_t<<endl;
		cout<<"\t Banyak Tiket			: "<<banyak_t<<endl;
		cout<<"\t Jumlah Harga			: "<<jum_harga<<endl;
	}
	void harga(int jum_harga)
	{
		k=jum_harga;
	}
};

class Minuman
{
	
	public :
		int harga_m, banyak_m, jum_harga_m,z;
	void input() 
	{
		cout<<"\t Masukan Harga Minum	: Rp  "; cin>>harga_m;
		cout<<"\t Masukan Banyak Pesanan	:    "; cin>>banyak_m;
		jum_harga_m = harga_m * banyak_m;
	}
	void tampil()
	{
		cout<<"\t Harga Minuman Sehat	: "<<harga_m<<endl;
		cout<<"\t Banyak Pesanan		: "<<banyak_m<<endl;
		cout<<"\t Jumlah Harga		: "<<jum_harga_m<<endl;
	}
	void hargaku(int jum_harga_m)
	{
		z=jum_harga_m;
	}
};

class TotalPembayaran
{
	public :
		int  uang_mu;
	void input()
	{
		cout<<"\t Masukan Uang Anda		: Rp ";cin>>uang_mu;
	}
	void tampil()
	{
		cout<<"\t Uang Anda			: Rp "<<uang_mu<<endl;	
	}	
};

class total2:public Tiket_konser, public Minuman
{
	public :
	int getTotal(void)
	{
		return ( jum_harga+jum_harga_m );
	}
	
};

int main ()
{
		total2 b;
		
		Tiket_konser p;
		Minuman sehat;
		TotalPembayaran bayar;
		cout<<"\t Input Data Tiket Konser LigaDangdut"<<endl;
		cout<<"-----------------------------------"<<endl;
		p.input();
		cout<<"	\n\n";
		cout<<"\t Data Tiket Konser LigaDangdut"<<endl;
		cout<<"	------------------------------"<<endl;
		p.tampil();
		cout<<"	\n\n";
		cout<<"---------------------------------------------------------------"<<endl;
		
		cout<<"\t Input Data Minuman Sehat"<<endl;
		cout<<"	-----------------------------------"<<endl;
		sehat.input();
		
		cout<<"	\n\n";
		cout<<"\t Data Minuman Sehat"<<endl;
		cout<<"	------------------------------"<<endl;
		sehat.tampil();	
		cout<<"	\n\n";
		cout<<"	------------------------------"<<endl;
		
		bayar.input();
		
		bayar.tampil();
		cout<<"\n\n";
		cout<<"\t Jumlah Pembayaran Anda	: "<<b.getTotal();
		
}
