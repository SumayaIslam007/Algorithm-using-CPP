#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool swapped;
    for(int i=0; i < n-1; i++){
        swapped = false;
        for(int j=0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        //if no elements were swapped then break the loop
        if(swapped == false)
            break;
    }
}
//function to print array
void printArray(int arr[], int n){
    for(int i=0; i < n; i++)
    cout <<" "<< arr[i];
}

int main(){
     int n;
     cout <<"Enter size of array: ";
    cin >> n;

    int arr[n];
    cout <<"Enter element of array: ";
    for(int i=0; i<n; i++){
    cin >> arr[i];
    }

    cout <<"Original array is: ";
    for(int i=0; i<n; i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;


    bubbleSort(arr, n);
    cout <<"Sorted array: ";
    for(int i=0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}