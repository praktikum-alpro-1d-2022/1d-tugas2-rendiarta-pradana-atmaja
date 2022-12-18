#include<iostream>
using namespace std;
int main()
{
	float r, phi = 3.14;
	double L;
	cout<<" Masukkan jari - jari = ";
	cin>>r;
	
	L = phi * r * r;
	
	cout<<" Luas Lingkaran = "<<L<<endl;
	
	return 0;
}