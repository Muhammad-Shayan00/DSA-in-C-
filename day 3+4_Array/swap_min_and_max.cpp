#include <iostream>
using namespace std;

int main(){
    int marks[]={22,443,44,6,242,5};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    
    int min=marks[0];
    int max=marks[0];
    int minindex=0;
    int maxindex=0;


    //for find min & max

    for(int i=0;i<size;i++){
        if (min>marks[i]){
            min=marks[i];
            minindex=i;
        }
        if (max<marks[i]){
            max=marks[i];
            maxindex=i;
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;
    cout<<minindex<<endl;
    cout<<maxindex<<endl;

    //before swap array is:
    for(int i=0;i<size;i++){
        cout<<marks[i]<<"  ";
    }
    cout<<"  "<<endl;

    int temp;

    //swapping process
    temp=marks[minindex];
    marks[minindex]=marks[maxindex];
    marks[maxindex]=temp;

    //after swap array is:
    for(int i=0;i<size;i++){
        cout<<marks[i]<<"  ";
    }







}