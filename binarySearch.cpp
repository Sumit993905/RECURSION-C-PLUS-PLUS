#include<iostream>
using namespace std;

bool binarySearch(int arr[] , int start , int end , int key){

    //BASE CASE 
    if(start>end)
       return false;

    int mid = start + (end - start)/2;
    // BASE CASE : ELEMENT IS FOUND 
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr , mid+1 , end , key);
    }
    else{
        return binarySearch(arr , start , mid-1 , key);
    }
}


int main(){
    
    int arr[5]={2,3,5,6,7};

    bool ans = binarySearch(arr , 0 , 5 , 7);

    if(ans){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present"<<endl;
    }


    return 0;
}