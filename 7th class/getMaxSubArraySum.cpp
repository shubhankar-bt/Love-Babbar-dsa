#include<iostream>
#include<climits>
using namespace std;

int getMaxSum(int arr[], int n ){

    int maxSF = INT_MIN;
    int maxEH = 0;

    for(int i=0;i<n;i = (i+2)){
        maxEH = maxEH + arr[i];

        maxSF = max(maxSF, maxEH);

        if (maxEH<0)
        {
            maxEH = 0;
        }
        
    }
    return maxSF;
   
}

int main(){


    int arr[8] = {-2, -3, 4, -1,-2,1, 5, -3};

    


    cout<<"Max subarray sum "<<getMaxSum(arr, 8)<<endl;

    



    return 0;
}