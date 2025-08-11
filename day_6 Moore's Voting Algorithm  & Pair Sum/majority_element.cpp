#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    //Brute force approch



    // int marks[]={1,2,2,1,2,1,4,1,7,1,1};
    // int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    // int n=size/2;
    // int ans;

    // for(int i=0;i<size;i++){
    //     int count=1;
    //     for(int j=0;j<size;j++){
    //         if(i!=j && marks[i]==marks[j])
    //         count++;        
    // }   
    //     if(count>n){
    //         cout<<"the majority element is "<<marks[i]<<endl;
    //         cout<<"repeating "<<count<<" times";
    //         return 0;
    //     }
        
        
    // }





    //Better Approch


    // int marks[]={7,2,7,1,2,7,4,7,7,7,7};
    // int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    // int n=size/2;
    // int ans;

    // //first sort the array
    // sort(marks,marks+size);
    
   
    // int count=0;
    // int element=marks[0];
    // for(int i=0;i<size;i++){  
        
    //     if (element==marks[i]){
    //         count++;
    //         if(count>n){
    //         cout<<"the majority element is "<<marks[i]<<endl;
    //         cout<<"repeating "<<count<<" times";
    //         return 0;
    //     }
    //     }
    //     else{
    //         element=marks[i];
    //         count=1;
    //     }





    //BEST APPROCH (MOORE'S VOTING ALGORITHM)

     int marks[]={1,2,2,1,2,1,4,1,7,1,1};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4
    int n=size/2;

    int ans=0;
    int freq=0;

    for(int i=0;i<size;i++){
        
        if(freq == 0){
            ans=marks[i];
        }
        if(ans==marks[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"the majority element is "<< ans;





           
        
        
        
    





}