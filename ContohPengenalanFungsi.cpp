#include <stdio.h>
#include<conio.h>
#include <cstdlib>

//pengenalan sebuah contoh untuk implememtasi fungsi dalam bahasa c++
/*Program menghitung Luas Persegi Panjang*/
int LuasPersegi (int Panjang, int Lebar); //Prototype function
int main (){
	int a, b, hasil;
	printf("Program Menghitung Luas Persegi Panjang \n");
	getch();
	system("cls");
	printf("Masukkan Nilai Panjang: ");scanf("%d", &a);
	getch();
	printf("Masukkan Nilai Lebar: ");scanf("%d", &b);
	hasil=LuasPersegi(a, b);
	printf("Luas Persegi: %d ", hasil);
	return 0;
}	

//fungsi untuk menghitung luas persegi
int LuasPersegi(int Panjang, int Lebar){
	
	int Luas = Panjang * Lebar;	
	return Luas;	
}
