#include <iostream>
using namespace std;

int digitsum(int num){
  int lastdigit = 0;

  while(num > 0){

    int sum = num%10;//for take the last no. of the digit 
    num /= 10;
    lastdigit += sum;
  }

  return lastdigit ;

}

int main(){

    cout<<" sum of the digit : "<< digitsum(213) <<endl;

    return 0;

}

