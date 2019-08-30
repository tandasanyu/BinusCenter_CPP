// C++ program to demonstrate function 
// declaration outside class 

#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
	public: 
	string geekname; 
	int id; 
	
	// printname is not defined inside class defination 
	void printname(); 
	
	// printid is defined inside class defination 
	void printid() 
	{ 
		printf("\n ID Anda : %d \n", id);
	} 
}; 

// Definition of printname using scope resolution operator :: 
void Geeks::printname() 
{ 
	printf("\n Nama Anda : %s \n", geekname.c_str());
} 
int main() { 
	
	Geeks obj1; 
	obj1.geekname = "Herlambang"; 
	obj1.id=15; 
	
	// call printname() 
	obj1.printname(); 
	printf("\n");
	
	// call printid() 
	obj1.printid(); 
	return 0; 
} 

