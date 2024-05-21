#include<iostream>
using namespace std;

// REVERSE A STRING BY USING RECURSION

void reverse(string& str , int i , int j){
    //base case 
    if(i>j)
       return ;
    
    // Reverse condition   
    swap(str[i] , str[j]);
    i++;
    j--;
    
    //recursive call
    reverse(str , i , j);
}

int main(){
    
    string name = "sumit";
    
        //Function Call 
    
    reverse(name , 0 , name.length()-1);
    
    //print output
    
    cout<< name << endl;
    
    return 0;
}