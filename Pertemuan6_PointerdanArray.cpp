#include <stdio.h>
#include<conio.h>
#include <cstdlib>
 
int main(){
int nilaiArray[5] = {2,5,4,6,7};
int *pointerArray;
pointerArray = nilaiArray;
//cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
printf("\n Nilai pada elemen 0 nilaiArray adalah : %d \n", nilaiArray[0]);
//cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
printf("\n Nilai pada elemen 0 nilaiArray (Pointer) adalah : %d \n", *pointerArray);
pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
*pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
//cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
printf("\n Nilai pada elemen 1 nilaiArray adalah : %d \n", nilaiArray[1]);
//cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
printf("\n Nilai pada elemen 1 nilaiArray (Pointer) adalah : %d \n", *pointerArray);
pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
//cout<<endl;
printf("\n ");
printf("\n Akses nilai semua array dengan pointer dan looping for : %d \n", *pointerArray);
//cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;

for (int i=0; i<5; i++){
 //cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
 printf("\n Nilai indeks [%d] adalah = %d \n", i,*(pointerArray+i));
}
return 0;
}
