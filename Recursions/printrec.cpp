#include <iostream>
using namespace std;
int num(int n)
{
    if (n <= 0)
    {
        return n;
    }
    n + num(n - 1);
    n * num(n - 1);
}
int main()
{
    cout << num(5);
    return 0;
}