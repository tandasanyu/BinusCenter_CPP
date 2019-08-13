#include <stdio.h>
#include<conio.h>
#include <cstdlib>
#include<string.h>

//1.input string
//2.if dengan string variabel
//3.mendapatkan nilai string dengan scanf

//program cek apakah anda Beprofesi sebagai guru / bukan
char str[100];
char str_result[100];

char TampilProfesi (char s[100]){ // case sesitive
	/*Nomor 2 dengan Mengandalkan Kondisi True & False (1/0)*/
	int res = strcmp(s, "Guru");
	if (res==0) {
        printf("Profesi Anda Guru"); 	
		}
    else {

        printf("Profesi Anda Bukan Guru");     
	}
      
    return 0;  
}

int main (){
	printf("Masukan Profesi Anda : ");
	/*Nomor 1 & 3*/
	scanf("%s", &str); 
	//gets(str); -- bentuk lain mendapatkan string 
	//printf(" Profesi Anda : %s", str);
	
	char str_result = TampilProfesi(str);
	return 0;
}
