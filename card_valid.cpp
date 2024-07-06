#include <bits/stdc++.h>

using namespace std;

int getDig(int num);
int sumOdd(string num);
int sumEven(string num);

int main()
{
    string num;
    int result = 0;
    cout << "Enter the card num : ";
    cin >> num;

    result = sumEven(num) + sumOdd(num);

    if (result % 10 == 0)
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid";
    }
}
int getDig(int num) // if it is  2 digit, we will split it and add it. eg:
{
    // 21       1       2               1 + 2 = 3
    return num % 10 + (num / 10 % 10);
}
int sumOdd(string num)
{
    int sum;
    for (int i = num.size() - 1; i >= 0; i -= 2)
    {
        sum += getDig((num[i] - '0'));
    }
    return sum;
}
int sumEven(string num)
{
    int sum;
    for (int i = num.size() - 2; i >= 0; i -= 2)
    {
        sum += getDig((num[i] - '0') * 2);
    }
    return sum;
}
