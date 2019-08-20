// arrays example
#include <stdio.h>
#include<conio.h>
#include <cstdlib>

int foo [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n];
    
  }
  //result = foo[1];
  printf("\n Nilai Array  : %d\n", result);
  return 0;
}
