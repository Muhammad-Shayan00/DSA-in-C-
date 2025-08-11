// //using loop





// #include <iostream>
// #include <cmath>
// using namespace std;



// bool checkpowertwo(int n){
//     int i=0;
//     while(n>=pow(2,i)){
//         if(n==pow(2,i)){
//             return true;
//         }
//         i++;
//     }
//     return false;

// }

// int main(){
//     int n=16;

//     if (checkpowertwo(n)){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
    
    

// }








//using without loop (bitwise operator)

//so the idea is that those number which are the  power of 2 (4,8,16) it previous
//number (3,7,15) is are inverse of it like 8=1000 , 7=0111 so when we take &(AND)
//operator it will be 0





#include <iostream>

using namespace std;



bool checkpowertwo(int n){
    
    if(n>0 && ((n &(n-1))==0)){
        return true;
    }
    else{return false;}

}

int main(){
    int n=16;

    if (checkpowertwo(n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    

}