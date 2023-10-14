#include <bits/stdc++.h>
using namespace std;
string leftRotate(string str, int d)
{
    int size = str.length();
    d = d % size;
    cout << str.substr(d) << " " << str.substr(0, d) << endl;
    return str.substr(d) + str.substr(0, d);
}

string rightRotate(string str, int d)
{

    int size = str.length();
    d = d % size;
    cout << str.substr(size - d) << " " << str.substr(0, size - d) << endl;
    return str.substr(size - d) + str.substr(0, size - d);
}

int main()
{
    cout << leftRotate("abcd", 2) << endl;
    cout << rightRotate("abcd", 2);
    return 0;
}