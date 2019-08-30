//Aplikasi penghitung total bilangan genap, ganjil,
//jumlah seluruh dan rata-rata dari deret bilangan.
//Dev. Info I Wayan Aditya Suranata - 110010129 - AD111
    
    
//deklarasi header
#include <iostream>
#include <conio.h>
#include <iomanip> //untuk menentukan jml digit pada bilangan float
using namespace std;
//fungsi penghitung rata-rata
float f_rata(float batas, float total)
    { float hasil;
    hasil = total / batas;
      return hasil;
    }
        
int main ()
{
int* data = NULL;  //pointer untuk membuat array dimamis
int max;
data = new int[max];
cout<<"Masukan batas maximal : ";cin>>max;  //get maximal deret bilangand dari user
cout<<endl;
for (int i=0;i<max;i++)
    {
   cout<<"Masukan bilangan ke "<<i<<" : ";cin>>data[i];    //minta masukan dari user dan input ke array
   }
   cout<<endl;
   cout<<"Bilangan yang anda inputkan : ";  //print bilangan yang dimasukan user
for (int i=0;i<max;i++)
    {
    cout<<data[i]<<" ";
   }
//jumlah bilangan genap & ganjil
int tampung_genap = 0;
int tampung_ganjil = 0;
for (int i=0;i<max;i++)
   {
   if ((data[i]%2)==0)
    {
      tampung_genap += data[i];
      }
    else tampung_ganjil += data[i];
   }
    
int tampung_total = tampung_genap + tampung_ganjil;  //hitung total jumlah bilangan
cout<<endl;
cout<<"Total bilangan genap adalah : "<<tampung_genap<<endl;  //print total bilangan genap
cout<<"Total bilangan ganjil adalah : "<<tampung_ganjil<<endl;  //print total bilanga ganjil
cout<<"Total seluruh bilangan adalah : "<<tampung_total<<endl;  //print total jumlah semua bilangan
cout<<"Rata-rata dari seluruh bilangan : "<<setprecision(3)<<f_rata(max,tampung_total)<<endl; //print rata-rata
getch();

return 0;
}
