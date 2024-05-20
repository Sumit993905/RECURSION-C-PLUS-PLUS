#include<iostream>
using namespace std;

// CHECK SORTED ARRAY OR NOY  BY USING RECURSION

bool isSorted(int arr[] , int size){
    
    //  Base case 
    if(size == 0 || size == 1){
        return true;
    } 
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1 , size-1);
        return remainingPart;
    }
}

int main(){
    
    int arr[5]={2,4,6,8,9};
    
    int ans = isSorted(arr,5);
    
   if(ans){
       cout<<"Array is sorted"<<endl;
   }
   else{
       cout<<"Array is nopt sorted"<<endl;
   }

    return 0;
    
}