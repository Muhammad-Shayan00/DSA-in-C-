// //FIRST METHORD

// #include <iostream>
// using namespace std;
// int main(){
//     int n=125;
//     while(n>0){
//         cout<<(n%10);
//         n=n/10;
//     }
// }




//SECOND METHORD

#include <iostream>
using namespace std;
int main(){
    long long int n=4540437;
    int x;
    long long int reverse=0;
    while(n>0){
        x=n%10;
        reverse=(reverse*10)+x;
        n=n/10;
        cout<<reverse<<endl;
    }
    
}

