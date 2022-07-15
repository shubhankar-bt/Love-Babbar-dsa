#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i =0; i< size; i++){
    cout<<arr[i]<<" ";  
    }
}
bool search(int arr[], int size, int target){
   for(int i=0; i <size; i++){
      if(arr[i] == target){
        return true;
      }
      
   }
   return false;
}



int main(){

    int arr[100];


    cout<<"Enter the size of array : "<<endl;
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    if(search(arr,n,7)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;

    }

    return 0;
}