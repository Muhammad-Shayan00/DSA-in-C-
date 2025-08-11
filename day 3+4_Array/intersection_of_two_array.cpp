#include <iostream>
using namespace std;

int main(){
    int marks1[]={22,443,44,7,242,5};
    int marks2[]={23,242,44,6,22,4};
   
    int size=sizeof(marks1)/sizeof(int);//marks size 24 bytes/int size 4
    
    bool iscommon;

    for(int i=0;i<size;i++){
        iscommon=false;
        for(int j=0;j<size;j++){
            if(marks1[i]==marks2[j]){
                iscommon=true;
            }       
    }
    if(iscommon){
        cout<<marks1[i]<<"  ";

    }

        
    }




}