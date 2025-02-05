#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) { // Optimized to check only up to sqrt(n)
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers up to a given limit
void printPrimes(int limit) {
    for (int num = 2; num <= limit; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
}

int main() {
    int limit;
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;
    
    cout << "Prime numbers up to " << limit << " are: ";
    printPrimes(limit);

    return 0;
}

