#include<iostream>
using namespace std;

int main() 
{
    int n, i , sum =0;
    cin>>n;

    while (i<=n)
    {
        sum = sum + i;
        ++i;
    }
    cout<<sum<<endl;

    return 0;
}