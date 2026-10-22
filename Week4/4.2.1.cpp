#include <iostream>

// swapping text

void myswap(std::string& n1, std::string& n2){

    std::string tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    std::string n1, n2;

    std::cout << "please enter two strings: " << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}

// sorting three numbers

void sort_three_numbers(double& s1, double& s2, double& s3){
    double temp1, temp2, temp3;
    if (s1 > s2){
        temp1 = s1;
        s1 = s2;
        s2 = temp1;
    }
    if (s2 > s3){
        temp2 = s2;
        s2 = s3;
        s3 = temp2;
    }
    if (s1 > s2){
        temp3 = s1;
        s1 = s2;
        s2 = temp3;
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}