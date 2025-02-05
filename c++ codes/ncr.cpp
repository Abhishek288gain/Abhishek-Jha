#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num ) {

    int result = 1;

    for (int i = 1; i <= num; i++) {
        result *= i; // Multiply result by i at each iteration
    }

    return result;
}

//function for storing values of n,r,n-r
int NCR(int n, int r){

    int factn = factorial(n);
    int factr = factorial(r);
    int factnmr = factorial(n-r);

    return factn/(factr*factnmr);
}

int main() {
   int n = 6;
   int r = 1;

   
  cout<<" NCR : "<< NCR(n,r);

    return 0;
}
