#include <bits/stdc++.h>
using namespace std;
class heap
{
    int arr[200];
    int size = 0;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insertNode(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                cout << "hi " << endl;
                return;
            }
            for (int i = 1; i <= size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deletenNode()
    {
        if (size == 0)
        {
            cout << "nothing";
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
            for (int i = 1; i <= size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

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
    // for (int i = 1; i <= size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}
int main()
{
    heap h;
    // h.insertNode(50);
    // h.insertNode(55);
    // h.insertNode(53);
    // h.insertNode(52);
    // h.insertNode(54);
    // h.print();
    // cout << endl
    //      << endl;
    // h.deletenNode();
    // h.print();
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 6;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}