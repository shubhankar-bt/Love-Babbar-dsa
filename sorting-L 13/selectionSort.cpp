#include<iostream>
using namespace std;


void sortArray(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
            
        }

        swap(arr[i], arr[minIndex]);

    }
}


int main(){

    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the array elemnts : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sortArray(arr, n);

    cout<<"sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

    cout<<endl;
    
    return 0;

}