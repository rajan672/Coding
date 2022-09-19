/* 
For all of its products, a supermarket maintains a pricing structure. 
Each product has a value N printed on it. 
The price of the item is determined by multiplying the value N, which is read by the scanner, by the sum of all its digits. 
The goal here is to create software that, given the code of any item N, will compute the product (multiplication) of all the value digits (price).

Example 1:
Input :
5244 -> Value of N
Output :
160 -> Price 

Explanation:
From the input above 
Product of the digits 5,2,4,4
5*2*4*4= 160

Hence, output is 160.
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int ans = 1;
    while(N>0){
        int num = N%10; //gives remainder.  11%3 = since dividing 11 by 3 results in 3, with a remainder of 2.
        ans = ans * num;
        N = N/10; // removes the floating number.   5244/10 = 524.4 = 524
    }
    cout<<ans;
}



/* int main()
{
    int num;
    
    scanf("%d",&num);
    
    while(num > 0) //do till num greater than  0
    {
        int mod = num % 10;  //split last digit from number
        printf("%d\n",mod); //print the digit. 
    
        num = num / 10;    //divide num by 10. num /= 10 also a valid one 
    }
    
    return 0;
} */