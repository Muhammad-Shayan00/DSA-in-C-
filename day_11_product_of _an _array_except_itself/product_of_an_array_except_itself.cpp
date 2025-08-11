#include <iostream>
#include <vector>
using namespace std;

int main(){


    // BRUTEFORCE APPROCH




    // vector<int> nums={1,2,3,4};
    // vector<int> answers={};
    // int size=nums.size();
    
    
    // for(int i=0;i<size;i++){
    //     int ans=1;
    //     for(int j=0;j<size;j++){
    //         if(j==i){
    //             continue;
    //         }
    //         ans=ans*nums[j];
    //     }
    //     answers.push_back(ans);

    // }
    // for(int i:answers){
    //     cout<<i<<" ";
    // }


    //OPTIMAL APPROCH

    // vector<int> nums={1,2,3,4};
    // int size=nums.size();
    // vector<int> prefix(size,1);//all values are 1
    // vector<int> suffix(size,1);
    // vector<int> answer={};
    // int ans;



    // for(int i=1;i<size;i++){
    //     prefix[i]=nums[i-1]*prefix[i-1];
        
    // }
    // for(int i=(size-2);i>=0;i--){
    //     suffix[i]=nums[i+1]*suffix[i+1];
    // }
    // for(int i=0;i<size;i++){
    //     ans=prefix[i]*suffix[i];
    //     answer.push_back(ans);  
    // }
    // for(int i:answer){
    //     cout<<i<<" ";
    // }






    //MORE OPTIMIZE APPROCH SPACE COMPLEXITY IS 0(1)


    vector<int> nums={1,2,3,4};
    int size=nums.size();
    int suffix=1;
    vector<int> answer(size,1);
    int ans;



    for(int i=1;i<size;i++){
        answer[i]=nums[i-1]*answer[i-1];
        
    }
    for(int i=(size-2);i>=0;i--){
        suffix=suffix*nums[i+1];
        answer[i]*=suffix;
    }
   
    for(int i:answer){
        cout<<i<<" ";
    }
    
    






}