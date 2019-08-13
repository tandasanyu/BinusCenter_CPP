#include <stdio.h>
#include <stdio.h>
#include<conio.h>
#include <cstdlib>

//dengan argumen tanpa nilai kembalian
void bilanganprimer (int n);

int main (){
	int num;
	printf("Masukkan Nilai Angka untuk di Cek: ");scanf("%d", &num);
	bilanganprimer(num);
	return 0;
	
}

void bilanganprimer (int n){
	int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    //logic hasil 
    if (flag == 1)
    {
        printf("Bukan Bilangan Prima");
    }
    else {
        printf("Bilangan Prima");
    }
}
