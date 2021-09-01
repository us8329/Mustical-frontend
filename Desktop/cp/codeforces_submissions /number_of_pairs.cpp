#include<bits/stdc++.h>
using namespace std;
int f(int n,int l,int r)
{
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]>=l && a[i]+a[j]<=r)
                count++;
        }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,l,r;
        cin>>n>>l>>r;
        cout<<f(n,l,r)<<"\n";
        t--;
    }
    return 0;
}
