/* 
Given a range L, R find total such numbers in the given range such that they have no repeated digits.
For example:
12 has no repeated digit.
22 has repeated digit.
102, 194 and 213 have no repeated digit.
212, 171 and 4004 have repeated digits.

Examples:

Input : 10 12
Output : 2
Explanation : In the given range 
10 and 12 have no repeated digit 
where as 11 has repeated digit.

Input : 1 100
Output : 90 
*/

#include<bits/stdc++.h>
using namespace std;

int calculate(int n){
    set<int> s;  // Set store only unique values.

    while(n>0){
        int d = n%10;

        // if the digit is present more than once in the number
        if(s.find(d) != s.end()){
            return 0; // return 0 if the number has repeated digit
        }
        s.insert(d);
        n = n/10;
    }
    // return 1 if the number has no repeated digit
    return 1;

}
int main(){
    int L , R ;
    cin>>L >> R;

    int res=0;
    for(int i=L; i<=R; i++){
        res = res + calculate(i);
    }

    cout<<res;
}

//This method will answer each query in O( N ) time.