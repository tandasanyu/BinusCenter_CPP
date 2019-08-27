#include <stdio.h>
#include <string.h>

int print(char *nama, char *password);

int main()

{
	char nama [10];
	char password [10];
	int pilih;
	
	printf(" Selamat Datang Di Menu Login!\n\n\n");
	printf(" Masukan Nama : ");scanf("%s",&nama);
	
	printf(" Masukan Password : ");scanf("%s",&password);
	
	pilih = print(nama, password);
	
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


int print(char *nama, char *password)
{
	int pilih;
	
	if(strcmp(nama,"annis")==0 && strcmp(password,"123")==0)
	{
		pilih=1;
	}
	
	else
	{
		pilih=0;
	}
	
		return pilih;
	
	
	
}
