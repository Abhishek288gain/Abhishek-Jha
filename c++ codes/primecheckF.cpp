#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int number;
    
    // Input number
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is prime and output result
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    7
    
    return 0;
}
