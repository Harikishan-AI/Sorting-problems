//Insertion sort
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i,j,key;
    for(i = 1;i < n ;i++)
    {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    /*int arr[50], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    */
    //Data elemnets that are initalized at the begin
    int arr[] = {56,44,23,12,11,100,86};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArr(arr, n);
    return 0;
}