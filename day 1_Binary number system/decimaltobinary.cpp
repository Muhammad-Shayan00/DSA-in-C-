#include <iostream>
using namespace std;

int main(){

    int deci_number=5;
    int reminder;
    int binary=0;
    int power=1;

    while (deci_number>0){
        reminder=deci_number%2;
        deci_number=deci_number/2;
        binary+=(reminder*power);
        power*= 10;
        
    }
    cout<<binary<<endl;
    

}