#include <stdio.h>
#include<conio.h>
#include <cstdlib>
//multidimensional Array
void print(int A[][3],int N, int M)
{
  for (int R = 0; R < N; R++){
    for (int C = 0; C < M; C++){
    	 printf("\n Element At x[%d][%d] \n", R,C);
         printf("\n Value : %d \n", A[R][C]);
    	 //printf("Jumlah Keseluruhan : %d \n",A[R][C] );
    }  	
  }
   
}
	int main ()
	{
	  int arr[4][3] ={{12, 29, 11},
	                  {25, 25, 13},
	                  {24, 64, 67},
	                  {11, 18, 14}};
	
	print (arr,4,3);
	  return 0;
	}

