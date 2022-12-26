#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Input size of ARRAY"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Input Element of ARRAY"<<endl;
    for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

    int mx=0;

    for(int i=0; i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            cout<<mx;
        }
        else
            cout<<mx;
    }


}
