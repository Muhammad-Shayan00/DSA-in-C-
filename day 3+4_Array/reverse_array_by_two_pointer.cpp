#include <iostream>
using namespace std;

int main(){
    int marks[]={22,443,44,6,242,5,77};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4

    for(int i=0;i<size;i++){
        cout<<marks[i]<<" ";
    }
    cout<<" "<<endl;

    //reverse
    int temp;
    
    for(int i=0;i<=(size/2);i++){
        temp=marks[i];
        marks[i]=marks[((size-1)-i)];
        marks[((size-1)-i)]=temp;


        
    }
    for(int i=0;i<size;i++){
        cout<<marks[i]<<" ";
    }





}