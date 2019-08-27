#include <stdio.h>
#include<conio.h>
#include <cstdlib>
 
int main(){
int a=5; //Memberikan nilai 5 pada variabel a
int *b; //Mendeklarasikan variabel b sebagai pointer
b = &a; //Mengkopikan alamat variabel a kedalam variabel pointer b

printf("\n Nilai variabel a adalah : %d \n", a);
printf("\n Alamat variabel a adalah : %p \n", &a);
printf("\n Isi dari variabel b adalah : %p \n", b);
printf("\n Nilai yang tertampung dalam variabel b adalah : %d \n", *b);
return 0;

}

/*
Yes, the cast to void* is required.

int a;
printf("address of a = %p\n", &a);


&a is of type int*; printf's "%p" format requires an argument of type void*. The int* argument is not implicitly converted to void*, because the declaration of printf doesn't provide type information for parameters other than the first (the format string). All arguments after the format string have the default argument promotions applied to them; these promotions do not convert int* to void*.

The likely result is that printf sees an argument that's really of type int* and interprets it as if it were of type void*. This is type-punning, not conversion, and it has undefined behavior. It will likely happen to work if int* and void* happen to have the same representation, but the language standard does not guarantee that, even by implication. And the type-punning I described is only one possible behavior; the standard says literally nothing about what can happen.

(If you do the same thing with a non-variadic function with a visible prototype, so the compiler knows at the point of the call that the parameter is of type void*, then it will generate code to do an implicit int*-to-void* conversion. That's not the case here.)

https://stackoverflow.com/questions/1055959/print-the-address-or-pointer-for-value-in-c

*/
