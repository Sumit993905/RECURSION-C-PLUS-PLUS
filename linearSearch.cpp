#include<iostream>
using namespace std;

// LINEAR SERACH OF AN ARRAY USING RECURSION

bool isPresent(int arr[] , int size , int key){
    // BASE CASE 
    if(size == 0)
     return false;
     
     if( key == arr[0])
     {
         return true;
     }
     else{
        
        bool remainingPart = isPresent(arr+1 , size-1 , key);
        return remainingPart;
     }
}

int main(){
    
    int arr[5]={2,4,6,8,9};
    
   bool ans = isPresent(arr,5, 8);
    
    if(ans){
        cout<<"Element is present "<<endl;
        
    }
    else{
         cout<<"Element is not present "<<endl;
    }
   
    return 0;
    
}