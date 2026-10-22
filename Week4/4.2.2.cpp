#include <iostream>
#include <cmath>
// for the square root

bool quadsolve(double a, double b, double c, double& x1, double& x2){

    bool realsol;
    double delta = b*b - 4 * a * c;

    if(delta < 0){
        realsol = false;
    }
    else{

        realsol = true;
        x1 = (-b + std::sqrt(delta)) / (2 * a);
        x2 = (-b - std::sqrt(delta)) / (2 * a);

        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. std::pow(delta, 0.5)

    }

    return realsol;
}

int main(){

    double a, b, c;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;

    std::cin >> a >> b >> c;

    double s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(quadsolve(a, b, c, s1, s2)){
        std::cout << "the solutions are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }
}

// perimeter and area

// parameter list not only for input but also for output ---> output parameters included
void aboutrec (double& a, double& b, double& perimeter, double& area){
    perimeter = 2 * (a + b);
    area = a * b;
}

int main (){
    double a, b, perimeter, area;
    std::cout << "please enter two side lengths: " << std::endl;
    std::cin >> a >> b;

    //call fucntion aboutrec() in main to perform calculation
    aboutrec(a, b, perimeter, area);
    
    std::cout << "the perimeter is " << perimeter << std::endl;
    std::cout << "the area is " << area << std::endl;
}

// integer division

void intdiv (int& a, int& b, int& quotient, int& remainder){
    quotient = a/b;
    remainder = a - quotient * b;
}

int main (){
    int a, b, quotient, remainder;
    std::cout << "please enter two numbers: " << std::endl;
    std::cin >> a >> b;

    intdiv(a, b, quotient, remainder);

    std::cout << a << " / " << b << " = " << quotient << " .... " << remainder << std::endl;
}


// next date

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

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    if (m1 == 12){
        if (d1 == 31){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }
        else{
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
    }
    else{
        y2 = y1;
        if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10){
            if (d1 == 31){
                d2 = 1;
                m2 = m1 + 1;
            }
            else{
                d2 = d1 + 1;
                m2 = m1;
            }
        }
        else{
            if (m1 == 2){
                if (d1 == 28){
                    if (leap_year(y1)){
                        d2 = d1 + 1;
                        m2 = m1;
                    }
                    else{
                        d2 = 1;
                        m2 = m1 + 1;
                    }
                }
                else{
                    if (d1 == 29 && leap_year(y1)){
                        d2 = 1;
                        m2 = m1 + 1;
                    }
                    else{
                        d2 = d1 + 1;
                        m2 = m1;
                    }
                }
            }
            else{
                if (d1 == 30){
                    d2 = 1;
                    m2 = m1 + 1;
                }
                else{
                    d2 = d1 + 1;
                    m2 = m1;
                }
            }
        }            
    }
}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout << "please enter today's date: " << std::endl;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "the next date is " << d2 << " " << m2 << " "<< y2 << std::endl;
}
