/* 12th sep 2021
A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array arrt of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).
For Example:
N=7 and arr = [4,5,0,1.9,0,5,0].
There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array

Example 1:
Input:
7  – Value of N
[4,5,0,1,0,0,5] – Element of arr[O] to arr[N-1],While input each element is separated by newline
Output:
4 5 1 9 5 0 0

Example 2:
Input:
6
— Value of N.
[6,0,1,8,0,2] – Element of arr[0] to arr[N-1], While input each element is separated by newline
Output:
6 1 8 2 0 0
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<int> v;
    int inpu , count_zero=0;
    for(int i=0; i<N; i++){
        cin>>inpu;
        if(inpu > 0){
            v.push_back(inpu);
        }else{
            count_zero++;
        }
    }
    while(count_zero--){
        v.push_back(0);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
}