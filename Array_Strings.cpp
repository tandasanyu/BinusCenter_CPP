#include<bits/stdc++.h> 
#include <stdio.h>
#include <string.h>
using namespace std; 

void array_2d(){
	    // Initialize 2D array 
    
    char colour[4][10] = {"Blue", "Red", "Orange",  
                    "Yellow"};  
      
    // Printing Strings stored in 2D array  
    for (int i = 0; i < 4; i++)  {
    printf("%s \n",colour[i]);
	}
    	
        printf(" \n");
}
void array_str(){

    // Initialize String Array 
    string colour[4] = {"Blue", "Red", "Orange", "Yellow"}; 
      
    // Print Strings 
    for (int i = 0; i < 4; i++)  

	printf("%s\n", colour[i].c_str());
}

int main() 
{ 
	array_2d();
	
    array_str();
	

	  
    return 0; 
} 


