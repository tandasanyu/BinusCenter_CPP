#include <stdio.h>
#include<conio.h>
#include <cstdlib>

//tanpa argumen & dengan nilai kembalian 

int bilanganprimer();

int main (){
	int num, result;
	
	result = bilanganprimer();
	if (result){
		printf("Bilangan Prima");
	}else{
		printf("Bukan Bilangan Prima");
	}
	return 0;
}
//fungsi cek bilangan prima
int bilanganprimer(){
	int num;
    
	//printf("Angka yang Anda Masukan : %d ", num);

	printf("Masukkan Nilai Angka untuk di Cek: ");scanf("%d", &num);
	int prima = 1;
	for(int i=2; i<num; i++) {
	if(num%i==0)
	prima=0;
	}
	if (prima) {
		return 1;
	}
	else {
		return 0;
	}
}
