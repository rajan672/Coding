/* 
You are given a string with multiple characters that are repeated consecutively.
You re suppose to reduce the size of this string using mathematical logic given as in the example below;

input : aabbbeeeeffggg
output : a2b4e4f2g3

input : abbccccc
output : ab2c5
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    unordered_map<char , int> mp;
    for(char i :str){
        mp[i]++;
    }

    for(int i=0; i<str.size(); i++){
        if(mp.find(str[i]) != mp.end()){
            cout<<str[i];
            if(mp[str[i]] > 1){
                cout<<mp[str[i]];
            }
        }

        while(str[i] == str[i+1] && i != str.size()){
            i++;
        }
    }
}