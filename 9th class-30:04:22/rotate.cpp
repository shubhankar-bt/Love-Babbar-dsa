#include <iostream>
#include <algorithm>

using namespace std;



void transpose(int arr[3][3], int m, int n)
{
    for(int i=0; i<m;i++){
        
        for(int j=0; j<i;j++ ){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<n; i++){
       reverse(arr[i], arr[n-1]);
    }

}

// Driver code
int main()
{

	int i,j;
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	
	transpose(arr ,3, 3);
    


    for(int i=0;i<3;i++){
        for(int j =0; j<3;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

	return 0;
}
