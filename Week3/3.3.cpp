#include <iostream>

// bidimensional figure with while loops

int main(){
    int n, count1 = 1, count2 = 1;
    std::cin >> n;

    while (count1 <= n){
        while (count2 <= n){
            std::cout << "*";
            count2 += 1;
        }
        std::cout << std::endl;
        count1 += 1;
        count2 = 1;
    }
}

// multiplication table

int main(){
    int n;
    std::cout << "enter a number: " << std::endl;
    std::cin >> n;

    for (int row = 1; row < n+1; row++){
        for (int col = 1; col < n+1; col++){
            std::cout << col*row << "\t";
        }
        std::cout << std::endl;        
    }
}
