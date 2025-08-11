#include <iostream>
using namespace std;



int main(){
    int marks[]={4, 5, 6, 4, 7, 8, 9,8,7,8,8,9};
    int size=sizeof(marks)/sizeof(int);
    bool isunique;

    for(int i=0;i<size;i++){
        bool isunique=true;
        for(int j=0;j<size;j++){
            if (i!=j && marks[i]==marks[j]){//not check it  self and if it equal so means not repeat
                isunique=false;
            }
        }
        if(isunique){
            cout<<marks[i]<<" ";
        }

      
    }

   




}