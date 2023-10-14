#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + f(n - 1);
}
int main()
{
    cout << f(5);
    return 0;
}