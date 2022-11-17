/* 
Find the 15th term of the series? 
0,0,7,6,14,12,21,18 
Explained :
odd term is incremented by 7
even term is incremented by 6

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <int>  v;
    v.push_back(0);
    v.push_back(0);
    int even=0,odd=0;
    for(int i=2; i<=n; i++){
        if(i%2 == 0){
            odd +=7;
            v.push_back(odd);
        }else{
            even += 6;
            v.push_back(even);
        }
    }

    for(int i=0; i<n; i++){
        if(i == (n-1)){
            cout<<v[i]<<endl;
        }
    }
}