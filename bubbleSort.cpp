
#include<iostream>
using namespace std;

// BUBBLE-SORT BY USING RECURSION

void bubbleSort( int *arr , int n){
    
    // BASE CASE 
    if(n==0 || n==1)
      return ;
     
    // SOLVE 1-CASE 
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // RECURSIVE CALL
    bubbleSort(arr , n-1);
}



int main(){
    
    int arr[6] = {2,5,6,9,3,8};
    
    // FUNCTION CALL
     bubbleSort(arr,6);
    
    // PRINT SORTED ARRAY 
    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}