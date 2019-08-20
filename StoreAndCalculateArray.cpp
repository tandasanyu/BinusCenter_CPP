#include <stdio.h>
#include<conio.h>
#include <cstdlib>
int main() 
{
    int numbers[5], sum = 0;
    printf("Enter 5 numbers : \n");
    
    //  simpan nilai input ke dalam array
    //  temukan hasil penjumlahan dari semua elemen array
    for (int i = 0; i < 5; ++i) 
    {
    	scanf("%d",&numbers[i]);
        sum += numbers[i];
    }
    printf("Jumlah Keseluruhan : %d \n",sum );
   
    return 0;
}
