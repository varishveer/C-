#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Input size of Array";
    cin>>n;

    int arr[n];
    cout<<"Input element of Array";

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int pd=0;// previous difference
    int crr=0;//current length
    int maxlen=0; //max length

    for(int i=0;i<n-1; i++)
    {
        if(n==0)
            {cout<<"no element in array";
            return 0;}
        else if(n==1)
            {cout<<"only one element is present in array";
            return 0;}
        else if( pd== arr[i+1]-arr[i])
            {crr++;
             if(crr>maxlen)
                maxlen=crr;
            }
        else
            pd=arr[i+1]-arr[i];
            crr=2;
            if(crr>maxlen)
                maxlen=crr;

    }
    return maxlen +1;
}
