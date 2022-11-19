/* 
write a program to find the second largest number
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b ,c;
    cin >> a >> b >>c;

    if(a>b && a>c){
        if(b>c) cout << b;
        else cout<<c;
    }else if(b>a && b>c){
        if(a>c) cout << a;
        else cout<<c;
    }else{
        if(a>b) cout << a;
        else cout<<b;
    }
}




// For Array
/* int main(){
    vector<int> arr;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }

    sort(arr.begin() , arr.end());
    for(int i=0; i<n; i++){
        if( i == (n-2)){
            cout<<arr[n-2];
        }
    }
} */