#include<bits/stdc++.h>
using namespace std;

int main(){
    string word = "rajansah";
	sort(word.begin(), word.end());
	auto remove = unique(word.begin(), word.end());
	cout << string(word.begin(), remove)<< endl;
}

