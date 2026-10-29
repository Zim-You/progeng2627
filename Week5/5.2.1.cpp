#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){
    double sum = 0;
    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    return sum;
}

int main(){
    std::vector<double> v;
    int n, num;
    std::cout << "please enter the number of elements you want to store in the vector: " << std::endl;
    std::cin >> n; 
    for (int i=0; i<n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}

// index of minimum value in a vector

int min_vector_element(const std::vector<double>& vin){
    if (vin.size() == 0){
        return -1;
    }
    else{
        double smallest = vin[0];
        int index = 0;
        for (int i=1; i<vin.size(); i++){
            if (vin[i] < smallest){
                index = i;
                smallest = vin[i];
            }
        }
        return index;
    } 
}

int main(){
    int expected_index = 3;
    std::vector<double> vin {-1, 3, 7, -5, 2};
    std::cout << (min_vector_element(vin)-expected_index) << std::endl;
    
    vin = {};
    std::cout << min_vector_element(vin) << std::endl;
}

//search a value in a vector

int search_vector(int n, const std::vector<int>& vin){
    if (vin.size()==0){
        return -1;
    }
    else{
        for (int i=0; i<vin.size(); i++){
            if (vin[i] == n){
                return i;
            }
        }
    }
}

int main(){
    int number;
    std::vector<int> vin = {1, 2, 3, 4, 5};
    std::cout << "please enter the number to be searched: " << std::endl;
    std::cin >> number;
    std::cout << search_vector(number, vin) << std::endl;
}