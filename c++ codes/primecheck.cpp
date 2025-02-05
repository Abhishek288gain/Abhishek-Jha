#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout<<"Enter no,: \n";
    cin>>n;

    bool isprime = true;

    for(int i=2; i*i <= n; i++){//loop execute frome 2 to n-1

      if(n%i == 0){
          isprime = false;
          break;
       
        }
    } 


    if(isprime  == true){
        cout<<"prime no.\n";
     } else{
       cout<<"Enter no,: \n";

    }
    return 0;
}