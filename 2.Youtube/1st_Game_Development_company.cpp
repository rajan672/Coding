/* 
A Game development company wants to design a brain game application for kids. 
There are diff. types of tasks to be designed for the game.
Among all the tasks , there is one task in which each digit of an existing number has tobe replaced with another digit. consider the following table;
Numner: 0 1 2 3 4 5 6 7 8 9
Replaced by : 9 8 7 6 5 4 3 2 1 0

constraints
1. 0<=N<=1000000
2. if N value is out of above range print (" Wrong input")

example 1 
input : 105671
output : 894328

example 2
input : 1000001
output : Wrong Input
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int  rem,Ans=0 , n=0;
    if(N<0 || N > 1000000){
        cout<<"Wrong input";
    }else{
        while(N>0){
            rem = N%10;
            Ans = Ans + ((9-rem) * pow(10,n++));
            N = N/10;
        }
        cout<<Ans;
    }
}

/* NOTE :- Output is differnt due to vs code editor check in another editor. */