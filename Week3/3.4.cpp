#include <iostream>

// the maximum and the minimum so far

int main(){
    int n, curmax, curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n > curmax){
            curmax = n;
        }
        if(n < curmin){
            curmin = n;
        }
        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
    }
}

// Collatz conjecture algorithm

#include <iostream>

int main(){
    int n, result, max = 0, step = 0;
    std::cout << "enter a natural number: " << std::endl;
    std::cin >> n;
    max = n;

    while (n != 1){
        if (n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n + 1;
        }
        if (n > max){
            max = n;
        }
        step ++;
        std::cout << n << "\t";
        std::cout << std::endl;
    }
    std::cout << step << " steps were taken to reach 1." << std::endl;
    std::cout << "the maximum number generated in the process is " << max << std::endl;
}

//guess the number
//more suitable to use WHILE loop, because it can exit immidiately as soon as the actual number is correctly guessed.

#include <iostream>
#include <string>

int main(){
    int low, high, guess;
    std::string feedback, decision;
    bool flag = false;

    std::cout << "please enter the integer lower bound: " << std::endl;
    std::cin >> low;
    std::cout << "please enter the integer higher bound: " << std::endl;
    std::cin >> high;

    while (not flag){
        guess = (high+low)/2;
        std::cout << "my guess for your number is " << guess << std::endl;
        std::cout << "am I right? Please enter true or false." << std::endl;
        std::cin >> decision;
        if (decision == "true"){
            flag = true;
        }
        else{
            std::cout << "is my guessing smaller or greater than your number? Please enter smaller or greater." << std::endl;
            std::cin >> feedback;
            if (feedback == "smaller"){
                low = guess + 1;
            }
            else{
                high = guess - 1;
            }
        }
    }
}

//modified test for prime number
//only needs to be checked from 2 to sqrt(n), also while loop used to finish searching asap


int main(){
    int n, cf = 2;
    bool found_factor = false;

    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;

    while (not found_factor && cf * cf <= n){
        if (n % cf == 0){
            found_factor = true;
        }
        else{
            cf++;
        }
    }
    if (not found_factor){
        std::cout << "the number is prime" << std::endl;
    }
    else{
        std::cout << "the number is not prime" << std::endl;
    }
}
