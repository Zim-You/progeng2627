#include <iostream>

//x^n using a for loop

int main(){
    int result = 1, count = 1;
    int x, n;

    std::cout << "enter a number: " << std::endl;
    std::cin >> x;
    std::cout << "enter the power: " << std::endl;
    std::cin >> n;
    for(int i = 1; i < n+1; i++){
        result = result*x; 
    }
    std::cout << x << " ^ " << n << " = " << result << std::endl;
}

//factorial

int main(){
    int x, result = 1;

    std::cout << "enter a number: " << std::endl;
    std::cin >> x;

    for(int i = 1; i < x+1; i++){
        result = result*i; 
    }
    std::cout << x << " ! " << " = " << result << std::endl;
}

//echo using a for loop

int main(){
    int n;

    std::cin >> n; 

    for( ; n != 0; ){ 
        std::cout << n << std::endl;
        std::cin >> n; 
    }
}
