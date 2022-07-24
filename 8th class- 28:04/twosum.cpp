#include<iostream>
#include <algorithm>

using namespace std;

void findTargetPair(int arr[], int n){

    sort(arr, arr+n);
    int target = 20;
    int i = 0;
    int j = n-1;
     while( i < j){
        while((arr[i] + arr[j]) <= target && i < j)
        {
            if((arr[i] + arr[j]) == target)
                cout << arr[i] << ", " << arr[j] <<endl;
            i++;
        }
        j--;
        while((arr[i] + arr[j]) >= target && i < j)
        {
            if((arr[i] + arr[j]) == target)
                cout <<arr[i] << ", " << arr[j] <<endl;
            j--;

        }
       
    

  }
}

int main(){

    int arr[] = {1,3,4,5,9,11,13};

    findTargetPair(arr, 7);

    return 0;
}