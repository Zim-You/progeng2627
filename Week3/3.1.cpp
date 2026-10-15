#include <iostream>

int main(){
    int n, i = 0;
    std::cin >> n;
    while(i < n){
        std::cout << "hello" << std::endl;
        i = i + 1;
    }
}


int main(){
    int n=4, counter = 0;

    while(counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }
}


int main(){
    int x;
    int sum = 0, counter = 0;
    int n;

    std::cin >> x >> n;

    while(counter < n){
        sum = sum + x;
        counter = counter + 1;
    }
    std::cout << x << " * " << n <<  " = " << sum << std::endl;
}

//echo within range

int main(){
    int n;

    std::cin >> n;

    while(-11 < n && n < 11){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}

//echo with several stops

int main(){
    std::string n;

    std::cin >> n;

    while(n != "stop" && n != "STOP" && n != "Stop"){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}

//the sum so far

int main(){
    std::cout << "enter a number: " << std::endl;
    int n, sum = 0;
    std::cin >> n;
    while (n != 0){
        sum = sum + n;
        std::cout << "the sum so far is: "  << std::endl;
        std::cout << sum << std::endl;
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
} 

//the average so far

int main(){
    std::cout << "enter a number: " << std::endl;
    int n, count = 0;
    double sum = 0, average = 0;
    std::cin >> n;
    while (n != 0){
        count = count + 1;
        sum = sum + n;
        average = sum/count;
        std::cout << "the average so far is: "  << std::endl;
        std::cout << average << std::endl;
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;
    }
} 

//division as repeated subtraction

int main(){
    int a, b;
    int quotient = 0;
    std::cout << "enter the first number: " << std::endl;
    std::cin >> a;
    std::cout << "enter the second number: " << std::endl;
    std::cin >> b;
    std::cout << "for " << a << " / " << b << " : " << std::endl;

    while (a >= b){
        quotient = quotient + 1;
        a = a-b;
    }
    std::cout << "the quotient is: " << quotient << std::endl;
    std::cout << "the remainder is: " << a << std::endl;
} 
