#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

int main()
{
    int x1, x2 = 0;
    double a, b, c = 0;
    double answerpos, answerneg;
    double squareRT;
    
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
    squareRT = sqrt(b*b-(4*a*c));
    answerpos = (-b+squareRT)/(2*a);
    answerneg = (-b-squareRT)/(2*a);
    
    // The math used to check if answers are correct
    x1 = ((a*answerpos*answerpos)+(b*answerpos));
    x2 = ((a*answerneg*answerneg)+(b*answerneg));
    
    // Checks to see if it's a complex answer
    if((b*b - (4*a*c) < 0)){
        std::cout << "\n"
            << "This is a complex answer, and out of the scope of this program. Please try again with different numbers!" << std::endl;
        
        return 0;
    }
    
    // Checks to see if there's only one root or not.
    if(answerpos == answerneg){
        std::cout << "\n" 
            << "x = " << std::setprecision(3) << answerpos << " (only one root)" << std::endl;
        
        if((x1 && x2 == c * -1)){
            std::cout << "Math check - Correct" << std::endl;
        }
        
        
        return 0;
    }
    
    // If there's more than one root than they're both outputted here.
    std::cout << "\n" << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerpos << std::endl;
    std::cout << "x = " << std::setprecision(3) << answerneg << std::endl;
    /* 
    Commented out, used for math debugging and stuff.
    std::cout << squareRT << std::endl;
    */
    
    if((x1 && x2 == c*-1)){
        std::cout << "Math check - Correct" << std::endl;
    }
    
    else{
        std::cout <<"Math check - Wrong.\nRepeating decimals don't check properly.\nWorked: " << x2 << std::endl;
    }
    
    //Type anything to quit proggie. Added for .exe file. When I learn how, I'll give options to quit, or rerun proggie.
    std::string quit;
    std::cin >> quit;
    
}