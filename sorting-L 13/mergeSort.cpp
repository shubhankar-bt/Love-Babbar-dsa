#include<iostream>
#include <vector>
using namespace std;


void merge(int arr[], int low, int mid, int high) {
    // Write your code here.
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
            left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
            right++;
    }

    for(int i = low; i <= high ; i++){
        arr[i] = temp[i-low];
    }
    
}


void mS(int arr[], int low, int high) {
    // Write your code here.
    if(low >= high) return;

    int mid = (low+high)/2;
    mS(arr, low,  mid);
    mS(arr, mid+1, high);

    merge(arr, low, mid, high);

}

void mergeSort(int arr[], int n){
    mS(arr, 0, n-1);
}



int main(){

    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the array elemnts : "<<endl;
    for (int i = 0; i < n; i++) cin>>arr[i];
    

    mergeSort(arr, n);

    cout<<"sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;

}

    
