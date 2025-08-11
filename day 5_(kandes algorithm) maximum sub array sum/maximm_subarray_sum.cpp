#include <iostream>
#include <climits>
using namespace std;

int main(){
    // int arr[]={1,2,3,4,5};
    // int size=sizeof(arr)/sizeof(int);//marks size 24 bytes/int size 4
   
    // //for to print subarray
    // for(int start=0;start<size;start++){//this loop give start pointer
    //     for(int end=start;end<size;end++){//this loop give end pointer
    //         for(int i=start;i<=end;i++){//this loop is used to print
    //             cout<<arr[i];           
        
    // }
    //             cout<<"  ";
        
    // }
    //             cout<<endl;
    // }


    //to find the maximum subarray sum (Brute force) 
    //brute force approch is the first solution come in mind after seeing the
    //solution which is usually not optimize

    //NOTE: array can contain negative values thats way we don't find sum of max subarray

    // int current_sum=0;
    // int maximum_sum=INT_MIN;


    // for(int start=0;start<size;start++){//this loop give start pointer
    //     int current_sum=0;
    //     for(int end=start;end<size;end++){//this loop give end pointer
            
    //         current_sum+=arr[end];//this wil give the sum of all sub array
    //         maximum_sum=max(current_sum,maximum_sum);
        
    // }
             
    // }

    // cout<<"maximum sum of subarray using brute force is "<<maximum_sum;





    //kadane's Alogrithm:
    //it is the optimized opproch in which we use a single loop and aased on logic
    //that we add the numbers in series to get the higher number but if the last sum is negative
    //and we add current positive value in it it summ become less than that added valu
    // for example if the last sum is -1 and and we add 5 in it so it become -4
    //which is less than 5 so we consider only 5 (start a new sum series)by reseting prevous
    //to 0

    int nums[]={3,-4,5,4,-1,7,-8};
    int size=sizeof(nums)/sizeof(int);
    int current_sum=0;
    int maximum_sum=INT_MIN;

    for(int i=0;i<size;i++){
        current_sum+=nums[i];
        maximum_sum=max(current_sum,maximum_sum);
        if(current_sum<0){//apply codition after max because of edge case(when - in end)
            current_sum=0;
        }
    }
    cout<<"maximum sum of subarray using kadane's algorithm is "<<maximum_sum;




}