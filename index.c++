//Selection sort 
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    //Taking data elements from the users
    int arr[50], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Data elemnets that are initalized at the begin
    /*
    int arr[] = {56,44,23,12,11,100,86};
    int n = sizeof(arr)/sizeof(arr[0]);
    */
    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}