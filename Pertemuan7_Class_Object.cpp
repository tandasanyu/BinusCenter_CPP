#include <bits/stdc++.h> 
using namespace std; 
class Geeks 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string geekname; 
  
    // Member Functions() 
    void printname() 
    { 
       printf("\n Nama Anda : %s \n", geekname.c_str());
    } 
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.geekname = "Herlambang"; 
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
} 
