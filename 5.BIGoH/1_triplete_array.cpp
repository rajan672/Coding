#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int arr[num];
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        sum = (sum * 10) + arr[i];
    }

    int temp = sum;
    int reversed_number = 0, remainder;
    while (temp != 0)
    {
        remainder = temp % 10;
        reversed_number = reversed_number * 10 + remainder;
        temp /= 10;
    }

    cout <<sum + reversed_number << endl;

    return 0;
}