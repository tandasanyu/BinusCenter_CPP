#include <stdio.h>
#include<conio.h>
#include <cstdlib>

int main (){
    int angka1, angka2;
    char kalimat[100];
  
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka1);
  
    //while(getchar() != '\n');
      
    printf("Masukkan sebuah kalimat: ");
    gets(kalimat);
  
    printf("Masukkan sebuah angka lagi: ");
    scanf("%d", &angka2);
  
    printf("Angka pertama: %d\n", angka1);
    printf("Kalimat      : %s\n", kalimat);
    printf("Angka kedua  : %d\n", angka2);
  
    return 0;	
}
