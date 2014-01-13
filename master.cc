#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    int x1, x2 = 0;
    double a, b, c = 0;
    double answerpos, answerneg;
    double square;
    
    std::cout << "~~Quadratic Equation Solver~~ \nEnter A, B, and C: ";
    std::cin >> a >> b >> c;
    
    //'a' CANNOT = 0 in a quadratic equation. 
    if(a<=0){
        std::cout << "\nThat's not a quadratic equation yo! Your A can't equal 0. Try again. \n" << std::endl;
        
        // Ask for input again, cuz peeps be dumb like, yo A can't be zero man. It aint hard.
        do{
            std::cout << "~~Quadratic Equation Solver~~ \nEnter A, B, and C: ";
            std::cin >> a >> b >> c;
        }
        while(a<=0);
        
    }
    
    
    //Quadratic equation formula. x=-b±(√b^2-4(ac))/2*a
    square = sqrt(b*b-(4*a*c));
    answerpos = (-b+square)/(2*a);
    answerneg = (-b-square)/(2*a);
    
    std::cout << "\n" << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerpos << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerneg << std::endl;
    /* 
    Commented out, used for math debugging and stuff.
    std::cout << square << std::endl;
    */
    
    x1 = ((a*answerpos*answerpos)+(b*answerpos));
    x2 = ((a*answerneg*answerneg)+(b*answerneg));
    
    if((x1 && x2 == c*-1)){
        std::cout << "Math check - Correct" << std::endl;
    }
    
    else{
        std::cout <<"Math check - Wrong.\nRepeating decimals don't check properly.\nWorked: " << x2 << std::endl;
    }
    
    return 0;
}