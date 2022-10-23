/*
One programming language has the following keywords that cannot be used as identifiers:
break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
Write a program to find if the given word is a keyword or not
Input #1:
defer
Output:
defer is a keyword 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr[8] = {"while" , "for" , "if" , "do" , "switch" , "break" , "goto" , "contiue"};
    string str;
    cin>>str;

    for(int i=0; i<5; i++){
        if(arr[i] == str){
            cout<<"This is keyword";
            break;
        }else{
            cout<<"Not a keyword";
            break;
        }
    }
}