#include <iostream>
#include <cmath>
using namespace std;


int main(){

   int binarynumber=10111;
   int lastdigit;
   int ans=0;
   int power=0;

   while(binarynumber>0){

    lastdigit=binarynumber%10;
    ans+=lastdigit*pow(2,power);
    binarynumber/=10;
    power++;
   }

   cout<<ans;
    

}