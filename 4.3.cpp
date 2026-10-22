#include <iostream>

// prime numbers with early return

// smallest factor

int smallest_factor (int n){
    for (int cf = 2; cf < n; cf++){
        if ((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int result, n;
    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;
    result = smallest_factor(n);
    if (result == 0){
        std::cout << n << " is a prime number." << std::endl;
    }
    else{
        std::cout << "the smallest prime factor of " << n << " is " << result << std::endl;
    }
}


// primes in a range

int smallest_factor (int n){
    for (int cf = 2; cf < n; cf++){
        if ((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int a, b, result;
    std::cout << "please enter two numbers: " << std::endl;
    std::cin >> a >> b;
    for (int i = a; i < b+1; i++){
        result = smallest_factor(i);
        if (result == 0){
            std::cout << i << std::endl;
        }
    }
}

