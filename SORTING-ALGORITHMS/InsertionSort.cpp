#include <iostream>
using namespace std;

void InsertionSort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];  //Storing the value 
        int j=i-1;
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];  //shifting the value right side 
            }
            else{
                break;   //No shift is required
            }
        }
        arr[j+1]=temp;  //copying the sotred value in its desired value
    }
}

int main(){
    int arr[50];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}