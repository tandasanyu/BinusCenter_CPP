#include <stdio.h>
#include<conio.h>
#include <cstdlib>

//dengan argumen dan nilai kembalian
int bilangan_prime(int n);

int main (){
	int num, flag = 0;
    printf("Masukkan Nilai Angka untuk di Cek: ");scanf("%d", &num);
    // Argument num is passed to check() function
    flag = bilangan_prime(num);
    if(flag == 1)
        printf("Bukan Bilangan Prima");
    else
        printf("Bilangan Prima");
    return 0;
}


int bilangan_prime(int n)
{
    int i;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
            return 1;
    }
    return 0;
}
