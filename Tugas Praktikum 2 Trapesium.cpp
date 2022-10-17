#include<iostream>
using namespace std;
int main()
{
	float a, b, t, L;
	cout<<" Masukkan alas a = ";
	cin>>a;
	
	cout<<" Masukkan alas b = ";
	cin>>b;
	
	cout<<" Masukkan tinggi = ";
	cin>>t;
	
	L = 0.5 * ( a +b ) * t;
	
	cout<<" luas trapesium : "<<L<<endl;
	
	return 0;
}