#include <iostream>
using namespace std;

int main(){

int n = 4;
char ch = 'A';//for initilize A in first line 

for(int i=0; i<n; i++){
   
   for(int j=0; j<n; j++){
     cout<<ch<<" ";
     ch+=1; //type conversion char - int 
   }
  cout<<endl;

}
return 0;
}