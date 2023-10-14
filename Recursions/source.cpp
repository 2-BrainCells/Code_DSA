#include <iostream>
using namespace std;
int reachHome(int src, int dest)
{
    int ans = -1;
    if(src == dest){
        ans = 1;
        return ans;
    }
    reachHome(++src, dest);
}
int main()
{
    int src = 1;
    int dest = 0;
    cout << reachHome(src, dest);
    return 0;
}