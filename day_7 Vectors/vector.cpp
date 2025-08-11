
#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector <int> vec_name={20,22,44,55};
  // vector <int> vec_name(3,1); //for  3 times 1

  

  for(int i=0;i<vec_name.size();i++){
    cout<<vec_name[i] << " ";    
  }

   vec_name.push_back(2);
  vec_name.push_back(4);
  
  for(int val:vec_name){
    cout<<val;
  }
  cout<<"     "<<endl;
  
  vec_name.pop_back();

  for(int val:vec_name){
    cout<<val;
  }
  cout<<"     "<<endl;
  
  cout<<vec_name.front()<<endl;

  cout<<"     "<<endl;

  cout<<vec_name.back()<<endl;
 
  


  return 0;
  
}