
/*
      Alokasi dan Dealokasi Memori Dinamis pada C++
      Microsoft Visual Studio Express 2012
      [RS]
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
      int jum;

      cout<<"ALOKASI DAN DEALOKASI MEMORI DINAMIS ARRAY"<<endl;
      cout<<"------------------------------------------"<<endl;
      cout<<"Masukkan jumlah nilai : ";
      cin>>jum;
      cout<<endl;

      //alokasi memori dinamis array
      int *nilai;
      nilai = new int[jum];

      //input nilai
      cout<<"Masukkan NILAI"<<endl;
      for (int i = 0; i < jum; i++)
      {
            cout<<"Nilai "<<i+1<<" : ";
            cin>>*(nilai+i);
      }
     
      cout<<endl;

      //menampilkan nilai
      cout<<"Menampilkan NILAI"<<endl;
      for (int j = 0; j < jum; j++)
      {
            cout<<"Nilai "<<j+1<<" = "<<*(nilai+j)<<endl;
      }

      //dealokasi memori dinamis array
      delete [] nilai;

      _getche();
      return 0;
}
