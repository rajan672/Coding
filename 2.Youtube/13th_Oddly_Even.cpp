/* 
Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits.
Input 1:
 4567
Expected output: 
2
Explanation
The Sum of odd position digits 4 and 6 is 10. The Sum of even position digits 5 and 7 is 12. The difference is 12-10=2.

Input #2: 
9834698765123
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int mod, sum_even =0 , sum_odd=0;
    while(N>0){
        mod = N%10;
        //cout<<mod<<endl;
        if(mod % 2 == 0){
            sum_even = sum_even + mod;
        }else{
            sum_odd += mod;
        }

        N=N/10;
    }
    cout<<abs(sum_odd - sum_even);
}