#include <iostream>
using namespace std;

//pass by refrence means function don't make any copy of arry but instead it 
//go on te address means on real array and do opearrtion there, so any changes chane
//by the function in array will be change in original array

//Note:it the property of array


void changearray(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
    }

}

int main(){
    int arr[]={22,443,44,2,2462,5};
    int size=sizeof(arr)/sizeof(int);//marks size 24 bytes/int size 4

    //befrore calling function
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    changearray(arr,size);


    //after function

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    



    return 0;
    

   




}