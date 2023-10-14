#include <iostream>
using namespace std;
class heap
{
    int arr[100];
    int size;

public:
    void heapify(int arr[], int size, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, size, largest);
        }
    }
    void heapSort(int arr[], int size)
    {
        int t = size;
        while (size > 1)
        {
            swap(arr[1], arr[size]);
            size--;
            heapify(arr, size, 1);
        }
    }
};

int main()
{
    heap h;
    int arr[] = {3, 5, 1, 4, 0};
    int size = 5;
    h.heapSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}