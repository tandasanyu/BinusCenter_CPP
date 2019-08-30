#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char nama[100];
	int umur;
	printf("Masukkan nama : "); scanf("%[^\n]", &nama); 
	printf("Masukkan umur : "); scanf("%d", &umur);

	FILE *out=fopen("test.txt","w");
	fprintf(out,"Nama :%s Umur : %d\n",nama, umur);
	fclose(out);
	printf("Sukses menambah data.");
	getchar();
        return 0;
}
