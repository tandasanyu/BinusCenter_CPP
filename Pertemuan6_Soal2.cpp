#include <stdio.h>
#include <string.h>

int main (){
	char nama [20];
	printf(" Masukan Nama Anda: ");scanf("%s",&nama);
	
	for (int i=0; nama[i]!='\0'; i++){ // akan selalu looping hingga elemen kosong / habis
	printf("%c", nama[i]);
	}
	return 0;
}
