#include <iostream>

void print_to_98(int n) {
    while (n != 99) {
        std::cout << n;
        if (n != 98) {
            std::cout << ", ";
        } else {
            std::cout << std::endl;
        }
        
        if (n < 98) {
            n++;
        } else {
            n--;
        }
    }
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    print_to_98(number);
    
    return 0;
}
