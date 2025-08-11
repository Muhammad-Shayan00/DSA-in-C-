#include <iostream>
#include <cmath>
using namespace std;

int main(){

// int arrheight[]={1,8,6,2,5,4,8,3,7};

//brute_force

// int n=sizeof(arrheight)/sizeof(int);
// int width;
// int height;
// int area;
// int max_area=0;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){  
//         width=i-j;
//         if(width<0){
//             width=-width;
//         }
//         height=min(arrheight[i-1],arrheight[j-1]);
//         area=width*height;
//         max_area=max(max_area,area);


//     }    
// }
// cout<<max_area;



//optimal approch

int arrheight[]={1,8,6,2,5,4,8,3,7};
int n=sizeof(arrheight)/sizeof(int);
int width;
int height;
int area;
int max_area=0;
int right_boundry=n-1;
int left_boundry=0;


    while(right_boundry>left_boundry){  
        width=right_boundry-left_boundry;
        height=min(arrheight[right_boundry],arrheight[left_boundry]);
        area=width*height;
        max_area=max(max_area,area);
        if(arrheight[right_boundry]<arrheight[left_boundry]){
            right_boundry--;
        }
        else{
            left_boundry++;
        }


    }    

cout<<max_area;

}