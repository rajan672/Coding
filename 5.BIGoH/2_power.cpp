#include<bits/stdc++.h>
using namespace std;
bool ispowertwo (int n){
    if(n==0){
        return 0;
    }
    return (ceil(log2(n)) == floor(log2(n)));
}
bool ispowerthree(int n){
    if(n==0){
        return 0;
    }
    if(n%3 == 0){
        return ispowerthree(n/3);
    }

    if(n== 1){
        return true;
    }

    return false;
}

int main(){
    int num;
    cin>>num;

    if(ispowertwo(num) || ispowerthree(num)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
}