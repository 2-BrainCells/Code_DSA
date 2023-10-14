#include <iostream>
using namespace std;
void f(int n)
{
    if (n < 0)
    {
        return;
    }
    cout << n << " ";
    f(n-- );
}
int main()
{
    f(8);
    return 0;
}