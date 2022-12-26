#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Input size of Array"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Input element of Array"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];


    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum = sum + arr[j];
            cout<<sum<<endl;
        }
    }

    return 0;
}
