/*Program Untuk Menghitung Gaji Karyawan*/

#include<iostream>
using namespace std;
int main()
{
	char pil, nama, golongan;
	int jam = 0, jml, total, sisa, sisa1;
		
	;cout<<"================================"<<endl;
	cout<<"		 PT MAKMUR		 "<<endl;
	cout<<" Dalam 1 minggu bekerja 48 jam "<<endl;
	cout<<"================================"<<endl;	
	cout<<"Nama Karyawan :";cin>>nama;
	cout<<"Jam Kerja :";cin>>jam;
	cout<<"Golongan	(A/B/C/D) :";cin>>pil;
	
	if (pil == 'A')
	{
		jml = 5000;
	}
	else if (pil == 'B')
	{
		jml = 7000;
	}
	if (pil == 'C')
	{
		jml = 8000;
	}
	else if (pil == 'D')
	{
		jml = 10000;
	}
	
	if (jam > 48)
	{
		sisa = jam - 48;
		sisa1 = jml * (jam-sisa);
		total = 4000 * sisa;
		jml = sisa1 + total;
	}
	else
	{
		jml = jml * jam;
	}
	
	cout<<jml<<endl;
}
