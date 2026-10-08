#include <iostream>
#include <string>

//addition
int main(){
    double a, b, c;
    a = 1;
    b = 2;
    c = a + b;
    std::cout << c << std::endl;
    a = 2;
    std::cout << c << std::endl;
    // expected output: 3
    c = a + b;
    std::cout << c << std::endl;
    // expected output: 4 
}

//multiplication
int main(){
    double n1, n2, product;
    std::cout << "please enter the first number: " << std::endl;
    std::cin >> n1;
    std::cout << "please enter the second number: " << std::endl;
    std::cin >> n2;
    product = n1*n2;
    std::cout << n1 << " * " << n2 << " = " << product << std::endl;
}

// rectangle
int main(){
    double a, b, perimeter, area;
    std::cout << "please enter one side length of the rectangle: " << std::endl;
    std::cin >> a;
    std::cout << "please enter the second side length of the rectangle: " << std::endl;
    std::cin >> b;
    perimeter = 2*(a+b);
    area = a*b;
    std::cout << "the perimeter is: " << perimeter << std::endl;
    std::cout << "the area is: " << area << std::endl;
}

//Currency Conversion
int main(){
    double GBP, rate, Euro;
    std::cout << "please enter the amount of British Pounds: " << std::endl;
    std::cin >> GBP;
    std::cout << "please enter thr exchange rate to Euros: " << std::endl;
    std::cin >> rate;
    Euro = GBP*rate;
    std::cout << "the equivalent amount in Euros is: " << Euro << std::endl;
}

//Temperature Conversion
int main(){
    double Celcius, Fahrenheit;
    std::cout << "please enter the temperature in Ceicius: " << std::endl;
    std::cin >> Celcius;
    Fahrenheit = Celcius*1.8+32;
    std::cout << Celcius << " degrees Celcius is equal to " << Fahrenheit << " degrees Fahrenheit." << std::endl;
}

//BMI Calcuator
int main(){
    double weight, height, BMI;
    std::cout << "please enter your weight in kilograms: " << std::endl;
    std::cin >> weight;
    std::cout << "please enter your height in meters: " << std::endl;
    std::cin >> height;
    BMI = weight / (height * height);
    std::cout << "your BMI is: " << BMI << std::endl;
}