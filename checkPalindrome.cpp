
#include<iostream>
#include<string>
using namespace std;

// CHECK PALINDROME BY USING RECURSION

bool checkPalindrome(string& str, int i , int j){
    
    //BASE CASE 
    if(i>j)
       return true ;
    
    //CHECKING STRING    
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str , i+1 , j-1);
    }
}

int main(){
    
    string name;
    cout<<"Enter the string : ";
    cin>>name;
    
    bool isPalindrome = checkPalindrome(name , 0 , name.length()-1);
    
    if(isPalindrome){
        cout<<"Given string is Palindrome"<<endl;
    }
    else{
         cout<<"Given string is not Palindrome"<<endl;
    }

    return 0;
}