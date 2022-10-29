/*  12th Sep 2021
Given a string S(input consisting) of '*' & '#' . The length of the string is variable.
The task is to find the minimum number of '*' or '#' to make it a valid string.
The string is considereed valid if the number of '*' & '#' are equal.
The '*' & '#' can be at any position in the string.

NOTE : The output will be a positive or negative integer based on number of '*' & '#'  in the input string.
(*>#) : Poitive integer
(*<#) : Negative integer
(*=#) : 0

Example
input ###***
output 0
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string S ;
    cin>> S;

    int count_star=0 , count_hash=0;
    for(int i=0; i<S.size(); i++){
        if(S[i] == '*'){
            count_star++;
        }
        if(S[i] == '#'){
            count_hash++;
        }
    }
    cout<<count_star - count_hash;
    /* int res;
    if(count_star > count_hash) {
        cout<<count_star - count_hash;
    }else if(count_star < count_hash){
        cout<<count_star - count_hash;
    }else{
        cout<<count_star - count_hash;
    } */
}