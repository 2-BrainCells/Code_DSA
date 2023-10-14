#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int target)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        cout << arr[0] << endl;
        return true;
    }
    else
    {
        cout << *(arr + 1) << endl;
        bool rem = linearSearch(arr + 1, n - 1, target);
        return rem;
    }
    // linearSearch(arr + 1, n, target);
}
int main()
{
    int arr[] = {1, 5, 2, 6, 7, 3};
    int target, n = 6, i = 0;
    cout << "Enter the target = ";
    cin >> target;
    cout << linearSearch(arr, n, target);
    return 0;
}