#include<fstream>
#include<vector>
#include<string>
using namespace std;
int f(int x)
{
	return 28+(x+(x/8))%2+2%x+2*(1/x);
}
struct F
{
	int d;			// Число.
	int a, b;		// Номера дежурящих.
	int dn;			// День недели.
};
int main()
{
	ofstream out("output.txt");
	int n=27; // Кол-во человек.
	int start=1; // Первый день года. 1 - понедельник, 2 - вторник и т. д.. Но! 0 - воскресенье.
	vector<vector<F> >D(13);
	for(int i=1; i<D.size(); i++) D[i].resize(f(i));
	for(int i=1, k=0, dn=start; i<D.size(); i++)
	{
		for(int j=0, d=1; j<D[i].size(); j++, d++)
		{
			if(dn==0)
			{
				D[i][j].d=-1;
				D[i][j].a=-1;
				D[i][j].b=-1;
				D[i][j].dn-1;
			}	
			else
			{
				D[i][j].d=d;
				D[i][j].a=k%n+1;
				D[i][j].b=(k+1)%n+1;
				D[i][j].dn=dn;
				k=(k+2)%n;
			}
			dn=(dn+1)%7;
		}
	}
	for(int i=1; i<D.size(); i++)
	{
		out<<D[i].size()<<endl;
		for(int j=0; j<D[i].size(); j++)
		{
			out<<i/10<<i%10<<"."<<D[i][j].d/10<<D[i][j].d%10<<" "<<D[i][j].a<<" "<<D[i][j].b<<endl;
		}
	}
}
