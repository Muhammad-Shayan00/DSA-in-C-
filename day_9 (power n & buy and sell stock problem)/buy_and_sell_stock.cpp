#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main(){

    //BRUTE FORCE APPROCH

    // int price[]={7,1,5,3,6,4};
    // int size=sizeof(price)/sizeof(int);
    // int maxprofit=INT_MAX;
    
    // for(int i=0;i<size;i++){
    //     for(int j=i;j<size;j++){
    //         if((price[i]-price[j])<maxprofit){
    //             maxprofit=(price[i]-price[j]);
    //         }      
    //     }
    // }
    // maxprofit=-maxprofit;
    // cout<<maxprofit;





    int prices[]={7,1,5,3,6,4};
    int size=sizeof(prices)/sizeof(int);
    int maxprofit=0;
    int profit;
    int minimum_value=prices[0];


    
    for(int i=1;i<size;i++){

        if(prices[i]>minimum_value){
            profit=prices[i]-minimum_value;
            maxprofit=max(maxprofit,profit);
        }


        minimum_value=min(minimum_value,prices[i]);
        
    }
    if(maxprofit<0){
        cout<<0;
    }
    
    cout<<maxprofit;
    




}