#include <stdio.h>
#include<conio.h>
#include <cstdlib>
int angka;

void cetak_angka_for();
void cetak_angka_while();
void cetak_angka_dowhile();

int main (){
	
	//cetak_angka_for();
	//cetak_angka_while();
	//cetak_angka_dowhile();
	return 0;
}

void cetak_angka_for (){
	int i, k;
	int j=5;
    for (i = 1; i <= j; i++){
    	angka = i;
        printf("\n Print Angka dengan For: %d \n", angka);
    }	
}
void cetak_angka_while(){
   int a = 1;

   while( a < 10 ) {
   	angka =a;
     printf("\n Print Angka dengan while: %d \n", angka);
      a++;
   }
}
void cetak_angka_dowhile(){
   int a = 1;
   //angka=a;
   do {
   	//angka=a;
      printf("\n Print Angka dengan while: %d \n", angka);
      a = a + 1;
   } while ( a < 10 );
}
