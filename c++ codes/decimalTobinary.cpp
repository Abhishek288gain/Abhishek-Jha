#include <iostream>
using namespace std;

int changedec(int n){
    int ans = 0;
    int power = 1;// for incriment of power of 10 
    
    while(n > 0){

        int remender = n % 2;//for create remender 
        n /= 2;              //deviding this no. for futher calculating remender

        ans += (power * remender);// answer is store in this ans veriable 
        power *= 10 ;//updating power of 10
    }
    return ans;
}

int main(){

    int n = 7;
   
   for(int i = 1; i <= 10; i++){
    cout<< changedec(i) <<endl;
   }

    return 0;
}