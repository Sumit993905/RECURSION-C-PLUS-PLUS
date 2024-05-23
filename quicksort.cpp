#include<iostream>
using namespace std;

// Partion part 
int  partition(int arr[] , int s , int e){
    
    // Find Pivot 
    int pivot = arr[s];
    
    int count = 0;
    for(int i=s+1 ; i<=e ; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    // Find pivotIndex and Place into right postion 
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);
    
    // Sort left and right part according to pivot element
    
    int i=s , j=e;
    
    while(i < pivotIndex && j > pivotIndex){
        
        while(arr[i] < pivot)
        {
            i++;
        }
        while(arr[i] > pivot)
        {
            j--;
        }
        
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
     return pivotIndex;
}


void quickSort(int arr[] , int s , int e){
    
    //Base case 
    if(s >= e)
      return ;
      
    // Partition an array using partition function and store in p 
    int p = partition(arr,s,e);
    
    // Sort left part of an array 
    quickSort(arr , s , p-1);
    
    // Sort right part of an array
    quickSort(arr , p+1 , e);
}


int main(){
    
    int arr[5] = {2,4,1,6,9};
    int n =5;

    //Function Call
    quickSort(arr , 0 , n-1);
  
    //Print the Sorted Array
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}