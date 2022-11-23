#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int arr1[num];
    int arr2[num];

    int target;
    cin>>target;

    for(int i=0; i<num; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<num; i++){
        cin>>arr2[i];
    }

    int diff;
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){

            if((arr1[i]-arr2[j]) == target){
                cout<<j<<","<<i<<endl;
            }
            if((arr2[j]-arr1[i]) == target){
                cout<<j<<","<<i<<endl;
            }
        }
    }
}