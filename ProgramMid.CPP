#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()                      
{
char Nama[30],Grade;
float NT1,NT2,NT3,Nim,NM,NF,TNT,NA,NH;
	cout<<"====================================="<<endl;
   cout<<"PROGRAM MENGHITUNG NILAI AKHIR: "<<endl;
   cout<<"====================================="<<endl;
	cout<<"Masukan Nama : ";cin>>Nama;
   cout<<"Masukan Nim : ";cin>>Nim;
   cout<<endl;
   cout<<"Masukan Nilai Tugas 1 : ";cin>>NT1;
   cout<<"Masukan Nilai Tugas 2 : ";cin>>NT2;
   cout<<"Masukan Nilai Tugas 3 : ";cin>>NT3;
   cout<<"Masukan Nilai Mid : ";cin>>NM;
   cout<<"Masukan Nilai Final : ";cin>>NF;

   TNT=(NT1+NT2+NT3)/3;

   cout<<endl;
   NA=TNT*0.2;
   NA=NM*0.4;
   NA=NF*0.4;
   NA=(0.2*TNT)+(0.4*NM)+(0.4*NF);
   cout<<endl;

    if(NA>=80){
    Grade = 'A';
    }
    else
    if(NA>=70){
    Grade = 'B';
    }
    else
    if(NA>=60){
    Grade = 'C';
    }
    else
    if(NA<=50){
    Grade = 'D';
    }
    cout<<endl;
    cout<<"Nilai Akhir : "<<NA<<endl;
    cout<<"Grade : "<<Grade<<endl;
 getch();
}
