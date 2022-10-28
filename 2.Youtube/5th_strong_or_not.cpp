/* 
write a program to find whether the given number is strong or not....
A number is said to be strong if sum of factorial of digits is equal to the original number.

input 145
output yes
explain = 1! + 4! + 5! = 1+24+120=145

input 123 
output no

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int sum=0 , mud , temp=N, fact=1;
    while(temp>0){
        mud = temp%10;
        for(int i=1; i<=mud; i++){
            fact= fact*i;
        }
        //cout<<fact<<endl;
        sum = sum + fact;
        fact=1;
        temp = temp/10;
    }
    //cout<<sum;
    if(N == sum ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}