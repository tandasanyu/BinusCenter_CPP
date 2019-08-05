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
	system("cls");// membersihkan tampilan sebelumnya
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
	if (pilihan == 1){
		system("cls");
		Lingkaran();
	}else if (pilihan ==2){
		system("cls");
		Persegi();
	}else{
        printf("Maaf, pilihan yang Anda Masukan Tidak Tersedia!");
        system("pause");
        main();		
	}
}
/*Sub Menu lingkaran*/
void Lingkaran (){
	int jari2;
	 printf("\t\t\t\t Menu Lingkaran \n");
}
// sub menu persegi
void Persegi (){
	int sisi;
	 printf("\t\t\t\t Menu Persegi \n");
}
