#include <iostream>
#include <vector>

//simple exercise

int main(){
    std::vector<int> v;
    int result;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    result = v[0]*(v[1]+v[2]);
    std::cout << result << std::endl;
}

//filtering values

int main(){
    std::vector<int> v;
    int n, num, t;
    std::cout << "please enter the length of the vector: " << std::endl;
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    std::cout << "please enter a number for checking: " << std::endl;
    std::cin >> t;
    std::cout << "the numbers in the vector that are less than t are: " << std::endl;
    for (int i=0; i<n; i++){
        if (v[i] < t){
            std::cout << v[i] << "\n";
        }
    }
}

// occurrences

int main(){
    std::vector<int> v;
    int n, num, s, count = 0;
    std::cout << "please enter the length of the vector: " << std::endl;
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    std::cout << "please enter a number for checking: " << std::endl;
    std::cin >> s;
    for (int i=0; i<n; i++){
        if (v[i] == s){
            count ++;
        }
    }
    if (count == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else{
        std::cout << "the number " << s << " occurs " << count << " times in the vector." << std::endl;
    }
}

//occurrences and indices

int main(){
    std::vector<int> v;
    int n, num, s, count = 0;
    std::cout << "please enter the length of the vector: " << std::endl;
    std::cin >> n;
    for (int i=0; i<n; i++){
        std::cout << "please enter a number: " << std::endl;
        std::cin >> num;
        v.push_back(num);
    }
    std::cout << "please enter a number for checking: " << std::endl;
    std::cin >> s;
    for (int i=0; i<n; i++){
        if (v[i] == s){
            count ++;
        }
    }
    if (count == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else{
        std::cout << "there are " << count << " occurrences of " << s << " at indices: " << std::endl;
        for (int i=0; i<n; i++){
            if (v[i] == s){
                std::cout << i << std::endl;
            }
        }
    }
}