#include <iostream>
using namespace std;

int main(){
    // int marks[]={2,7,11,15};
    // int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    
    // int target=9;

    // //brute force approch

    // for(int i=0;i<size;i++){
    //     for(int j=0;j<size;j++){
    //         if ((marks[i]+marks[j])==target && i!=j){
    //             cout<<"the sum of "<<marks[i]<<" "<< marks[j]<< " is "<<target;
    //             return 0;
    //         }
        
    // }



    //optimal approch
    //by suing 2 pointer approch


    int marks[]={2,7,11,15};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    
    int target=18;
    int i=0;
    int j=size-1;


    for(int x=0;x<size;x++){

        if ((marks[i]+marks[j])==target){
            cout<<"the sum of "<<marks[i]<<" "<< marks[j]<< " is "<<target;
            return 0;
        }
        if ((marks[i]+marks[j])>target){
            j--;
        }
        if ((marks[i]+marks[j])<target){
            i++;
        }

        
    }




}