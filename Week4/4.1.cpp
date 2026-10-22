#include <iostream>
#include <cmath>

// sum of powers

int main(){
    double x, sum = 0;
    int n;
    std::cout << "enter the base number: " << std::endl;
    std::cin >> x;
    std::cout << "enter the upper bound of power: " << std::endl;
    std::cin >> n;
    for (int i = 1; i < n+1; i++){
        sum += std::pow(x,i);
    }
    std::cout << "the sum of " << x << "to the power of i, from i equals 1 to " << n << " is " << sum << std::endl;
}


// our own simpified std::pow also with negative exponent

#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    int NewExp;
    NewExp = exp;

    if (exp < 0){
        NewExp *= -1;
    }
    for (int i = 1; i < NewExp+1; i++){
        result *= base;
    }
    if (exp < 0){
        result = 1/result;
    }
        return result;
}

int main(){

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-3: " << mypow(2, -3) << std::endl;
}

// factorial

int myfactorial(int in){

    int fact = 1;
    
    for (int i = 1; i < in; i++){
        fact *= (i+1);
    }

    return fact;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}

//leap year

bool leap_year(int year){
    bool ly;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }
    return ly;
}

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
    std::cout << (leap_year(2800) == true) << std::endl;

    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
}

// maximum of two numbers

double findmax(double a, double b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    double a, b;
    std::cout << "enter the two number for comparison: " << std::endl;
    std::cin >> a >> b;
    std::cout << "the maximum of these two numbers is " << findmax(a,b) << std::endl;
}

// maximum of three numbers

double findmax(double a, double b, double c){
    double max = a;
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }
    return max;
}

int main(){
    double a, b, c;
    std::cout << "enter the three number for comparison: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "the maximum of these three numbers is " << findmax(a,b,c) << std::endl;
}

// sum of powers as a function

double mypow(double base, int exp){
    double result = 1; 
    int NewExp;
    NewExp = exp;

    if (exp < 0){
        NewExp *= -1;
    }
    for (int i = 1; i < NewExp+1; i++){
        result *= base;
    }
    if (exp < 0){
        result = 1/result;
    }
        return result;
}

double sumpow (double base, int upp){
    double sum = 0;
    for (int i = 1; i < upp+1; i++){
        sum += mypow(base, i);
    }
    return sum;
}

int main(){
    double base;
    int upp;

    std::cout << "please enter the base number and the upper bound of the exponent: " << std::endl;
    std::cin >> base, upp;
    std::cout << "the sum of the powers is " << sumpow(base, upp) << std::endl;

}