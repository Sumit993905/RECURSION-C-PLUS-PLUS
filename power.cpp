#include<iostream>
using namespace std;

int power(int n){

    //Base case 
    if(n==0)
      return 1;

      int smallerProblem = power(n-1);
      int biggerProblem = 2 * smallerProblem;

      return biggerProblem;
}

int main(){

    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    int ans = power(n);

    cout<<"Power with 2 : "<<ans<<endl;



    return 0;
}