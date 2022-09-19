/*
Some prime numbers can be expressed as a sum of other consecutive prime numbers. 
For example 5 = 2 + 3, 17 = 2 + 3 + 5 + 7, 41 = 2 + 3 + 5 + 7 + 11 + 13. 
Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.
Write code to find out the number of prime numbers that satisfy the above-mentioned property in a given range.

Input Format : First line contains a number N
Output Format : Print the total number of all such prime numbers which are less than or equal to N.

Constraints :  2<N<=12,000,000,000

Example  :                                 
Input :
20                       
Output :
2             

Explanation :
Below 20, there are 2 such numbers, 
5=2+3
17=2+3+5+7
*/


#include<bits/stdc++.h>
using namespace std;

bool prime(int i){
    if( i==0  || i==1) return false;

    for(int j=2; j<i; j++){
        if(i%j == 0) return false;
    }

    return true;
}

int main(){
    int num, count=0;
    cin >>num;
    vector<int> arr;

    for(int i=1; i<=num; i++){
        if(prime(i)){
            //cout<<i<<" is Prime." <<endl;
            arr.push_back(i);
        }
    }
    
    sort(arr.begin() , arr.end());
    int sum = arr[0];
    for(int i=1; i<sum; i++){
        sum += arr[i];
        if(sum>num){
            break;
        }
        if(prime(sum)){
            count++;
        }
    }

    cout<<count;
}



/* Reason for Iterating the Loop Till n/2
You could ask why we are iterating the loop till n/2 instead of n. What’s the reason for leaving the other half? Let us understand this with the help of examples. Consider the factors of the integer 12. The factors are 1, 2, 3, 4, 6, 12. You can observe here that after 12/2 i.e. 6, there is only one factor left that is the number itself (12 in this case). This is true for all integers. 

Now consider a prime integer 17. The factors of 17 are 1. After 17/2, i.e. 8.5 there is only one factor i.e. 17. So, to find if a number is prime or not, finding only one factor is enough. That one factor can be found in the first half, as you can notice that there is only one factor in the second half and i.e. the number itself.
 */