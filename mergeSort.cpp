#include<iostream>
using namespace std;

void merge(int *arr , int s , int e){
    
     int mid = s + (e-s)/2;
     
     int length1 = mid - s +1;
     int length2 = e - mid;
     
     int *first = new int[length1];
     int *second = new int[length2];
     
     // copy value of left part in first
     int mainArrayindex = s;
     for(int i=0 ; i<length1 ; i++){
         first[i] = arr[mainArrayindex++];
     }
     
     // copy values of right part into second
     mainArrayindex = mid+1;
     for(int i = 0 ; i<length2 ; i++){
         second[i] = arr[mainArrayindex++];
     }
     
     // Merge both sorted Array
     int index1 = 0;
     int index2 = 0;
     mainArrayindex = s;
     while(index1<length1 && index2 < length2){
         if(first[index1] < second[index2]){
             arr[mainArrayindex++] = first[index1];
         }
         else{
             arr[mainArrayindex++] = second[index2];
         }
     }
     while(index1<length1){
         arr[mainArrayindex++] = first[index1];
     }
     
     while(index2 < length2){
         arr[mainArrayindex++] = second[index2];
     }
}

void mergeSort( int *arr , int s , int e){
    
    // Base case 
    if(s>=e)
       return;
       
    //Find mid
    int mid = s + (e-s)/2;
    
    // sort left part
    mergeSort(arr , s , mid);
    
    //sort right part
    mergeSort( arr , mid+1 , e);
    
    // Merge both part
    merge(arr,s , e);
}

int main(){
    
    int arr[10] = {2,3,5,6,45,6,79,33,45,5};
    int n = 10;
    
    //Function Call
    mergeSort(arr , 0 , n-1 );
    
    //Print Array
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}