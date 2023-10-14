#include <iostream>
using namespace std;
int fastMulti(int n, int pow)
{
    int ans = 0;
    if (n == 0)
        return 0;
    if (n == 1 || pow == 0)
        return 1;
    // if(pow == 0)[
    //     return 1;
    // ]
    int b = fastMulti(n, pow / 2);
    if (pow % 2 == 0)
    {
        return b * b;
    }
    else
    {
        return n * b * b;
    }
}
int main()
{
    int n, pow;
    cout << fastMulti(2, 9);
    return 0;
}