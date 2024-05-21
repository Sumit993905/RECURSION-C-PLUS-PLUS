
#include<iostream>
using namespace std;

// POWER  BY USING RECURSION

int power(int a , int b){
    
    ///BASE CASE 
    if( b == 0 ){
        return 1;
    }
    if( b == 1 ){
        return a;
    }
    
    // RECURSIVE CALL 
    int ans = power(a,b/2);
    
    // B IS EVEN 
     if( b%2 == 0){
         return ans*ans;
     }
     else{
         // B IS ODD 
         return a * ans * ans;
     }
}



int main(){

    int a , b ;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    
    int ans = power(a,b);
    
    cout<<"Power of a and b is : "<< ans;
    
    return 0;
}