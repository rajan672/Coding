/* 14 Sep 2021
SENTENCE & TEACHER
An English school teacher is teaching how to build sentences for kindergarten students. She starts by teaching two words in a sentence, then 3 words, and so on. The next step is that she asks the students to find which word in the sentence they have made has the maximum number of alphabets. The task here is to write a program to find the longest word in each input sentence(str)
Note:
The sentence can consist of uppercase, lowercase etc, special characters and numbers.

Example 1:
Input:
Knowledge is the greatest gift   → Value of str
Output:
9
Explanation:
Since Knowledge is largest word so its length is 9.
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    getline(cin,S);

    int max_count=0 , count=0;
    for(int i=0; i<S.size(); i++){
        if(S[i] != ' '){
            count++;
            max_count = max(max_count , count);
        }else{
            count=0;
        }
    }

    cout<<max_count;
}