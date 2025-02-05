#include <iostream>
using namespace std;

int changebin(int n){
    int ans = 0, pow = 1;

    while(n > 0){
        int rem = n % 10;
        n /= 10;

        ans += (pow * rem);
        pow *= 2;
    }
    return ans;
}

int main(){

    

    cout << " Its binary form is : " <<changebin(100)<<endl;

    return 0;
}