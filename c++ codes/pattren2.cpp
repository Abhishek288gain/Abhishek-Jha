#include <iostream>
using namespace std;

int main() {
  int n = 5;
  char ch = 'A';

  for(int i=0; i<n; i++){

     for(int j=0; j<i+1; j++){

        cout << ch <<" ";
     }

     cout <<endl;
      ch++; //for writimg updated char in mext line and the updated char write over line 
   }

    return 0;
}