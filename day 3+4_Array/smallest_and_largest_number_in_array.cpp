#include <iostream>
using namespace std;

int main(){
    int marks[]={22,443,44,2,2462,5};
    int size=sizeof(marks)/sizeof(int);//marks size 24 bytes/int size 4

    int small=marks[0];
    int index_s=0;

    for(int i=1;i<size;i++){
        if(small>marks[i]){
            small=marks[i];
            index_s=i;
        }
    }
    cout<<"the smallest number in array is "<<small<<" at index "<<index_s<<endl;





    int large=marks[0];
    int index_l=0;

    for(int i=1;i<size;i++){
        if(large<marks[i]){
            large=marks[i];
            index_l=i;
        }
    }
    cout<<"the largest number in array is "<<large<<" at index "<<index_l;




    return 0;
    

   




}