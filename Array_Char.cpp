#include <stdio.h>
#include <string.h>



int main()

{
	char nama [10];
	char password [10];
	int pilih;
	
	printf(" Selamat Datang !\n\n\n");
	printf(" Masukan Nama : ");scanf("%s",&nama);
	
	printf(" Masukan Password : ");scanf("%s",&password);
	
	if(strcmp(nama,"Herlambang")==0 && strcmp(password,"123")==0)
	{
		pilih=1;
	}
	
	else
	{
		pilih=0;
	}
	
	if(pilih==1)
	{
		printf (" \n\n Data benar !");
	}
	
	else
	{
		printf("Data salah ");
	}
	
	return 0;
}


