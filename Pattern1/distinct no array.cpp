#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,i,j,count;
    cin>>t;
    while(t-->0)
    {
        count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr, arr + n);

        for(i=0,j=1;i<n-1,j<n;i++,j++)
        {
            if(arr[j]==arr[i]) count++;
        }
        cout<<n-count<<endl;
    }

    return 0;
}
