#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1 = "1555555555555555555500", num2 = "56";
    stringstream a, b;
    a << num1;
    b << num2;
    long long int numb1 = 0, numb2 = 0;
    a >> numb1;
    b >> numb2;
    string str = to_string(numb1 + numb2);
    cout << str;
    return 0;
}