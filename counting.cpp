#include<iostream>
using namespace std;

void print(int n){
     
     //Base Case 
     if(n == 0){
        return ;
     }

     //processing part
     cout<<n<< " " <<endl;

    //Recursive call
     print(n-1);

}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    //FUNCTION CALL 
    print(n);

    return 0;

}