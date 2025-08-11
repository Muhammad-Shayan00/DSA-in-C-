#include <iostream>
using namespace std;

int main(){
    int marks[]={2,4,4,6,2,5};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    
    int product=1;

    for(int i=0;i<size;i++){
        product=product*marks[i];
    }
    cout<<product;




}