#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)     //This loop is for rounds 
    {   bool swapped=false;
        for (int j = 0; j < n - i; j++)     //This loop comparest the elements and sort them
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped==true;  //This will tell that if the array is already sorted or not, if it is already sorted , their is no need to go inside the loop 
            }
        }
        if (swapped==false)
        {
            break;
        }
        
    }
}

int main()
{
    int arr[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}