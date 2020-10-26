#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int s1,s2,s3,r,t,c,kbr,b,sisi,panjang,status;
    float pembagi=0.5, luas, keliling, miring, tegak, datar;
    char a;
    cout<<"Menghitung Segitiga"<<endl;
    cout<<"1. Panjang Sisi Miring Segitiga"<<endl;
    cout<<"2. Luas Segitiga"<<endl;
    cout<<"3. Keliling Segitiga"<<endl;
    cout<<"Pilihan Anda :";cin>>kbr;

    switch(kbr){
        case 1 :    {
                    cout<<"menghitung panjang sisi miring segitiga"<<endl;
                    cout<<"masukan sisi 1	=";cin>>s1;
                    cout<<"masukan sisi 2	=";cin>>s2;
                    s3=sqrt((s1*s1)+(s2*s2));
                    cout<<"panjang sisi miring	= " <<s3<<endl;
                    cout<<"Apakah Anda Ingin Keluar dari Program?"<<endl;
                    cout<<"[Y]Ya [N]Tidak :";cin>>a;
                    if(a=='y'||a=='Y'){
       				exit(0);
		  			 }
					else if(a=='n'||a=='N'){
					cout<<"Kembali Ke Menu Utama";
					}
					else{
					cout<<"Pilihan Tidak Ada";
					}
                    };
                    break;
        case 2 :    {
                    cout<<"menghitung luas segitiga"<<endl;
                    cout<<"masukan alas   = ";cin>>a;
                    cout<<"masukan tinggi = ";cin>>t;
                    luas=pembagi*a*t;
                	cout<<"luas segitiga  = " <<luas<<endl;
                	cout<<"Apakah Anda Ingin Keluar dari Program?"<<endl;
                    cout<<"[Y]Ya [N]Tidak :";cin>>a;
                    if(a=='y'||a=='Y'){
       				exit(0);
		   			}
					else if(a=='n'||a=='N'){
					cout<<"Kembali Ke Menu Utama";
					}
					else{
					cout<<"Pilihan Tidak Ada";
					}
                    };
                    break;
        case 3 :    {
                    cout<<"menghitung keliling segitiga"<<endl;
                    cout<<"masukan sisi 1 segitiga	=";cin>>s1;
                    cout<<"masukan sisi 2 segitiga	=";cin>>s2;
                    cout<<"masukan sisi 3 segitiga	=";cin>>s3;
                    keliling=s1+s2+s3;
                    cout<<"keliling segitiga	= " <<keliling<<endl;
                    cout<<"Apakah Anda Ingin Keluar dari Program?"<<endl;
                    cout<<"[Y]Ya [N]Tidak :";cin>>a;
                    if(a=='y'||a=='Y'){
       				exit(0);
		   			}
					else if(a=='n'||a=='N'){
					cout<<"Kembali Ke Menu Utama";
					}
                    };
                    break;
			
       	return 0;
            }
}
       
