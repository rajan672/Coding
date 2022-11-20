/* 
Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

Example :

5  —Value of N

{10, 20, 30, 40, 50}  —Element of Arr[ ]

2  —Value of K

Output :  40 50 10 20 30
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
  
    vector < int >Arr (N);
    for (int i = 0; i < N; i++)
        cin >> Arr[i];
    
    int K;
    cin >> K;
    
    K = K % N;			//(if K>=N )    
    K = (N - K);
    
    reverse (Arr.begin (), Arr.begin () + K); //first reverse the array for K-times i.e 30,20,10,40,50
    reverse (Arr.begin () + K, Arr.end ());  //Now reverse the remeaning array i.e 30,20,10,50,40
    reverse (Arr.begin (), Arr.end ());   // reverse the whole array...40,50,10,20,30.
    
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
    
    return 0;
}