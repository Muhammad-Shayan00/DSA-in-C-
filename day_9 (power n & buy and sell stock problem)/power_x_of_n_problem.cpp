#include <iostream>
using namespace std;

int main(){

    //claculate x to the power n ex: 3 power 5 (3x3x3x3x3)

    //Brute Force
    //it take time complexity is n


    // int x=2;
    // int n=4;
    // int ans=1;

    // for(int i=0;i<n;i++){
    //     ans=ans*x;
    // }
    // cout<<ans;





    //Optimize approch with time complexity log n
    //Methordology:in this we convert in the binary then run loop no of letters in binary
    //usualy log n (for more detail see one note file in same folder)


    double x=3;
    long n=-5;//here as loop continue we will take binary last digit with it
    double ans=1;

    if(n<0){//to counter - case
        x=1/x;
        n= -n;
    }

    while(n>0){
        if(n%2 == 1){//if last digit is 1 so multiply
            ans=ans*x;
        }
        x=x*x;
        n=n/2;//to reduce binary form (see how to convert binary concersion file)

    }
    cout<<ans;



    
}