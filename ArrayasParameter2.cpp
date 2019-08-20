// arrays as parameters
#include <stdio.h>
#include<conio.h>
#include <cstdlib>

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
  printf("%d ",arg[n] );
  printf("\n " );
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}
