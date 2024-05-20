#include<iostream>
using namespace std;

// SUM OF AN ARRAY USING RECURSION

int  sumArray(int arr[] , int size){
    //Base case 
    if(size == 0)
      return 0;
      
    if(size == 1){
        return arr[0];
    }
    
    int remainingPart = sumArray(arr+1 , size-1);
    
    int sum = arr[0] + remainingPart;
    
    return sum;
    
}

int main(){
    
    int arr[5]={2,4,6,8,9};
    
    int ans = sumArray(arr,5);
    
    cout<<"Sum is : "<<ans;
   
    return 0;
    
}