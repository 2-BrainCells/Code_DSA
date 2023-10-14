#include <iostream>
using namespace std;
void sortBubble(int arr[], int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    sortBubble(arr, n - 1);
}
int main()
{
    int arr[] = {1, 9, 8, 2};
    int n = 4;
    sortBubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}