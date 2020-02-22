#include<iostream>
using namespace std;
class gelombang
{
	private :
		int alfa,beta;
		public :
			gelombang(int u=5,int l=10)
			{
				alfa=u;
				beta=l;
			}
			int gamma=30;
			void setAlfa(int a)
			{
				alfa+=a;
			}
			int GetAlfa()
			{
				return alfa;
			}
			void setBeta(int b)
			{
				beta+=b;
			}
			int GetBeta()
			{
				return beta;
			}
};
int main()
{
	gelombang g;
	g.setAlfa(34);
	g.setBeta(90);
	cout<<" Panjang Gelombang Alfa : "<<g.GetAlfa();
	cout<<"\n Panjang Gelombang Beta : "<<g.GetBeta();
	cout<<"\n Panjang Gelombang Gamma : "<<g.gamma;
}

