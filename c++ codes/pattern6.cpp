#include <iostream>
using namespace std;

int main() {
  int n = 10 ;
      // 1 part
     for(int i=0; i<n; i++){

        //stars
        for(int j=0; j<i+1; j++){
          cout<<"*";
        }
        //space
        if(i != n-1){

         for(int j=0; j<2*(n-i-1); j++){
          cout<<" ";
          } 
       }

       //stars
       for(int j=0; j<i+1; j++){
          cout<<"*";
        }
        cout<<endl;
    }  
    

    //2 part
     for(int i=0; i<n; i++){

        //stars
        for(int j=0; j<n-i; j++){

          cout<<"*";
        }

        //space
        if(i != 0){

         for(int j=0; j<2*i; j++){
            cout<<" ";
          } 
        }

        for(int j=0; j<n-i; j++){
            cout<<"*";
          } 
          cout<<endl;
     }


  return 0;
}