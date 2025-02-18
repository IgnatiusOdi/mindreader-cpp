#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int memo=0;
	cout<<"                    MIND GAMES"<<endl;
	cout<<"1. Pikirkan suatu angka antara 10 - 99 (misal 10)"<<endl;
	cout<<"2. Tambahkan kedua angka tersebut (1 + 0 = 1)"<<endl;
	cout<<"3. Jadikan angka hasil penjumlahan menjadi bil pengurang (10 - 1 = 9)"<<endl;
	cout<<"4. Konsentrasikan pikiran anda pada karakter dari angka anda (angka anda = 9)"<<endl;
	cout<<endl;
	int acak=rand()%67+33;
	memo=acak;
	for(int a=99;a>=0;a--)
	{
		acak=rand()%67+33;
		if(a%9==0&&a<=81)
		printf("%3d=%c\t",a,memo);
		else
		printf("%3d=%c\t",a,acak);
		if(a%10==0)
		printf("\n");
	}
	cout<<endl;
	cout<<"Tiap angka diatas mewakili sebuah karakter"<<endl;
	cout<<"Tekan Enter Untuk Melihat Karakter Dari Angka Yang Anda Pikirkan !!!";
	char temp;
	scanf("%c",&temp);
	cout<<endl;
	printf("Karakter yang anda konsentrasikan adalah --> %c",memo);
}
