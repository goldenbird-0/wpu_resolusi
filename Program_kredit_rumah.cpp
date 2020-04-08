#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

main(){
	char nofak[10],nama[20][50],type,jenis[50];
	int jk,lc[50];
	long int um[50],harga,hutang,bunga,thutang;
	int x,br,i;

	clrscr();
   gotoxy(10,2);cout<<"Tampilan Input";
   gotoxy(5,3); cout<<"Input No. Faktur      : "; cin>>nofak;
   gotoxy(5,4); cout<<"Input Jumlah Kreditur : "; cin>>jk;

   for (i=1;i<=jk;i++){
   	gotoxy(5,5); cout<<"Input Nama Kreditur   : "; gets(nama[i]);
      gotoxy(5,6); cout<<"Input Jenis Rumah     : "; cin>>jenis[i];
      gotoxy(5,7); cout<<"Input Uang Muka       : "; cin>>um[i];
      gotoxy(5,8); cout<<"Input Lama Cicilan    : "; cin>>lc[i];
   }

   clrscr();
   	gotoxy(1,1); cout<<"No Faktur    : "<<nofak;
      gotoxy(20,3);cout<<"LAPORAN DATA KREDIT RUMAH";
                         //        1         2         3         4         5         6         7
                        //12345678901234567890123456789012345678901234567890123456789012345678901234567890
      gotoxy(1,4); cout<<"================================================================================";
      gotoxy(1,5); cout<<"|NO|        Nama         | Type  |   Harga  |  Hutang  |  Bunga  | Total Hutang |";
      gotoxy(1,6); cout<<"|  |      Kreditur       | Rumah |   Rumah  |  Pokok   |         |              |";
      gotoxy(1,7); cout<<"================================================================================";
      br=8;
      for(x=1;x<=i-1;x++){
      if (strcmp(jenis[x]=='A')==0){
      	stcpy(type,"RS-36");
         harga=25000000;
      }
      else if(strcmp(jenis[x]=='B')==0){
      	strcpy(type,"RS-45");
         harga=40000000;
      }
      else if(strcmp(jenis[x]=='C')==0){
      	strcpy(type,"RS-54");
         harga=50000000;
      }
      else if(strcmp(jenis[x]=='D')==0){
      	strcpy(type,"RS-60");
         harga=65000000;
      }
      else if(strcmp(jenis[x]=='E')==0){
      	strcpy(type,"RS-70");
         harga=80000000;
      }
      else{
      	strcpy(type,"----");
         harga=0;
      }
      hutang=harga-um;
      if (lc>=3){
      	bunga=0.1*hutang;
      }
      else if (lc<3){
      	bunga=0.09*hutang;
      }
      thutang=hutang+bunga;

      gotoxy(1,br); cout<<"| "<<x;
      gotoxy(4,br); cout<<"| "<<nama;
      gotoxy(26,br);cout<<"| "<<type;
      gotoxy(34,br);cout<<"| "<<harga;
      gotoxy(45,br);cout<<"| "<<hutang;
      gotoxy(56,br);cout<<"| "<<bunga;
      gotoxy(66,br);cout<<"| "<<thutang;
      gotoxy(80,br);cout<<"|";
      br=br+1;
      gotoxy(1,br); cout<<"================================================================================";

   getch();
}
