#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
   int x = 0;
   int y = 0; 
   int coef1,coef2 = 0;
    
    std::cout << "Enter x: " << std::endl;
    std:: cin >> x;
    std::cout << "Enter numerial coefficients of 'x': ";
    std:: cin >> coef1 >> coef2;
    
    y = (coef1*x*x)+(coef2*x)+(-16);
    
    if(y==0){
        std::cout << "YAY IT'S RIGHT!" << std::endl;
    }
    else{
        std::cout <<" Nope, wrong." << std::endl;
    }
    
	return 0;
}
