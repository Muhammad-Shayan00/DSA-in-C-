#include <iostream>
using namespace std;

int main(){
    int marks[]={22,443,44,6,242,5};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
   

    int target=242;

    for(int i=0;i<size;i++){
        if (marks[i]==target){
            cout<<"the "<<target<<" found at "<<i;
            

        }
    }




}