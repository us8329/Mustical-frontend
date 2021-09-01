#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        int index1= 0;
        int index2=0;
        for(int i=0;i<n;i++)
        {
            if(v1[i]<v1[index1])
                index1=i;
            if(v1[i]>v1[index2])
                    index2=i;
        }
        int min1= min(index1,index2);
        int max1= max(index1,index2);
        int ans1= n-min1;
        int ans2=max1+1;
        int ans3 = min1+1+n-max1;
        cout<<min(ans1,min(ans2,ans3))<<"\n";
        t--;
    }
    return 0;
}
