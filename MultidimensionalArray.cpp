// C++ Program to print the elements of a 
// Two-Dimensional array 
#include <stdio.h>
#include<conio.h>
#include <cstdlib>
  
int main() 
{ 
    // an array with 3 rows and 2 columns. 
    int x[3][2] = {{0,1}, {2,3}, {4,5}}; 
  
    // output each array element's value 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
          printf("\n Element At x[%d][%d] \n", i,j);
          printf("\n Value : %d \n", x[i][j]);
        } 
    } 
  
    return 0; 
} 
