#include <iostream>

// Function prototype
int fact(int k);

int main() {
    int k;
    std::cout << "Enter the number to factorial" << std::endl;
    std::cin >> k;
    std::cout << "The number you have entered is: " << std::endl;
    
    int result = fact(k);
    std::cout << "The factorial is: " << result << std::endl;
    
    return 0;
}

int fact(int k) {
    if (k == 0) {
        return 1; // Corrected base case
    } else {
        return k * fact(k - 1);
    }
}
