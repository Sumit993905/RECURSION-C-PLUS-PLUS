#include<iostream>
using namespace std;

int fibonacci(int n){
    //Base case 
    if(n==0)
        return 0;
    
    if(n==1)
        return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;
}

void print(int n){
    for(int i = 0 ; i<n ; i++){
        cout<<fibonacci(i)<<" ";
    }
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // call the function
    cout<<fibonacci(n);

    //print the fibonacci series
    print(n);

    return 0;
}