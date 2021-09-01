#include<bits/stdc++.h>
using namespace std;
int f(int p1,int p2,int p3,int p4)
{
    int w1,l1;
    int w2,l2;
    if(p1>p2)
    {
        w1=p1;
        l1=p2;
    }
    else{
        w1=p2;
        l1=p1;
    }
    if(p3>p4)
    {
        w2=p3;
        l2=p4;
    }
    else{
        w2=p4;
        l2=p3;
    }
    if(w1>l2 && w2>l1)
        return 1;
    else return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t!=0)
    {
        int p1,p2,p3,p4;
        cin>>p1>>p2>>p3>>p4;
        // if(check()==1)
        //     cout<<"YES\n";
        // else cout<<"NO\n";
        if(f(p1,p2,p3,p4)==1)
            cout<<"YES\n";
        else cout<<"NO\n";
        
        t--;
    }
}