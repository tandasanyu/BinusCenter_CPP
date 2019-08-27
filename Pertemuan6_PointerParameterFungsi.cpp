#include <stdio.h>
#include<conio.h>
#include <cstdlib>
 
void tambah(int *angka){
*angka +=20;
}
 
int main(){
int nilai = 10;
//cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
printf("\n Nilai variabel nilai adalah = : %d \n", nilai);
tambah(&nilai); //Memasukkan alamat variabel nilai pada fungsi tambah
printf("\n Nilai variabel nilai adalah =  : %d \n", nilai);
//cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
return 0;
}
