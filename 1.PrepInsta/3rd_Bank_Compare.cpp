/*
Ram wanted to take loan, there are two banks – Bank A and Bank B. Their interest rates vary. 
He has received offers from both banks in terms of the annual rate of interest, tenure, and variations of the rate of interest over the entire tenure. 
Now, he need to choose the offer which costs him with less interest. Help him to doing the computation and making a wise choice. 
The loan repayment happens at a monthly frequency and Equated Monthly Installment (EMI) is calculated using the formula given below :
EMI = loanAmount * monthlyInterestRate / ( 1 – 1 / (1+monthlyInterestRate)^(numberOfYears * 12))

Input Format:
• First line: P principal (Loan Amount)
• Second line: T Total Tenure (in years).
• Third Line: N1 is the number of slabs of interest rates for a given period by Bank A. First slab starts from the first year and the second slab starts from the end of the first slab and so on.
• Next N1 line will contain the interest rate and their period.
• After N1 lines we will receive N2 viz. the number of slabs offered by the second bank.
• Next N2 lines are the number of slabs of interest rates for a given period by Bank B. The first slab starts from
the first year and the second slab starts from the end of the first slab and so on.
• The period and rate will be delimited by single white space.
Output Format:
Print either Bank A or Bank B

Constraints:
1 <= P <= 1000000
1 <=T <= 50
1<= N1 <= 30
1<= N2 <= 30

Sample Input 1 :
10000
20
3
5 9.5
10 9.6
5 8.5
3
10 6.9
5 8.5
5 7.9
Sample Output 1 :
Bank B

Sample Input 2 :
500000
26
3
13 9.5
3 6.9
10 5.6
3
14 8.5
6 7.4
6 9.6
Sample Output 2 :
Bank A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int principal, Total_yrs, installement;
    float Bank[2];
    float intrest_rate,sum;
    float power; // power = (1 + monthlyInterestRate)^(numberOfYears * 12)

    cin>>principal;
    cin>>Total_yrs;

    for(int i=0; i<2; i++){
        cin>>installement;
        sum=0;
        for(int j=0; j<installement; j++){
            cin>>Total_yrs>> intrest_rate;
            power = pow((1+intrest_rate),Total_yrs*12);
            int EMI = (principal*(intrest_rate)/(1-1/power));
            sum += EMI;
        }
        Bank[i]=sum;
    }

    if(Bank[0] < Bank[1]){
        cout<<"Bank A.";
    }else{
        cout<<"Bank B";
    }
}