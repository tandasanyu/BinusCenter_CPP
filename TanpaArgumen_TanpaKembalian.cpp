#include <stdio.h>
#include<conio.h>
#include <cstdlib>

//tanpa argumen & kembalian

void bilanganprimer();

int main (){
	//tidak ada argumen yang di berikan
	bilanganprimer();
    return 0;
}

void bilanganprimer()
{
    int num;
    
	//printf("Angka yang Anda Masukan : %d ", num);

	printf("Masukkan Nilai Angka untuk di Cek: ");scanf("%d", &num);
	int prima = 1;
	for(int i=2; i<num; i++) {
	if(num%i==0)
	prima=0;
	}
	if (prima) {//ketika prima bernilai 1 / true
		printf("Bilangan Prima");
	}
	else {
		printf("Bukan Bilangan Prima");
	}

}

