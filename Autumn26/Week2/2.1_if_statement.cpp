#include <iostream>

// checking for multiple of 3
int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 3;

    if(rem == 0){
        // if the remainder is 0...
        std::cout << "the number is divisible by 3" << std::endl;
    }
    else{
        // otherwise...
        std::cout << "the number is not divisible by 3" << std::endl;
    }
}

// computing absolute value
int main(){

    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute
    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;

    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
        // TODO: assign the value of n to absv
    }
    std::cout << "|" << n << "| = " << absv << std::endl;
}    