#include <stdio.h>
#include<conio.h>
#include <cstdlib>
void menu_utama();
void Lingkaran();
void Persegi();
	int pilihan;
	int luas;
/*Main screen*/
int main (){
	system("cls");
       printf("\n================== Program Penghitung Luas Bangun Datar ==============\n");
       printf("\n==================        **********************        ==============\n");
       printf("\n==================         ********************         ==============\n");
       printf("\n==================         *******************          ==============\n");
	   getch(); // untuk menahan pointer ketika program berjalan
       system("cls");
       menu_utama();
       return 0;
	}
//menu utama
void menu_utama(){
	printf("\n masukan Pilihan Anda : \n");
	printf("Jawab : ");scanf("%d",&pilihan);	
	switch (pilihan){
		case 1 : 		
		Lingkaran();
		break;
		
		case 2:		
		Persegi();
		break;
		
		default : 
	    printf("Maaf, pilihan yang Anda Masukan Tidak Tersedia!");
        system("pause");
        main();
		break;					
	}

}
/*Sub Menu lingkaran*/
void Lingkaran (){
	system("cls");
	int jari2;
	 printf("\t\t\t\t Menu Lingkaran \n");
}
// sub menu persegi
void Persegi (){
	system("cls");
	int sisi;
		printf("\n masukan Angka Anda : \n");
	printf("Jawab : ");scanf("%d",&sisi);
	luas = sisi*sisi;
	 printf("\t\t\t\t Menu Persegi %d \n", luas);
}
