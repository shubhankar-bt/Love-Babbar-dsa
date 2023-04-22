#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    
    for(int i = n-1; i >= 0; i--){

        int didSWap = 0;
        
        for(int j = 0; j<=i-1; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSWap = 1;
            }
            
        }

        if (didSWap == 0)
        {
            break;
        }

        cout<<"runs\n";
        

    }
}


int main(){

    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the array elemnts : "<<endl;
    for (int i = 0; i < n; i++) cin>>arr[i];
    

    bubbleSort(arr, n);

    cout<<"sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;

}