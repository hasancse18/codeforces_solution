#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        int a[m],b[n];
        for(int i=0;i<m;i++){ cin>>a[i];}
        for(int i=0;i<n;i++){ cin>>b[i];}
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]+b[j]<=k) c++;
            }
        }
        cout<<c<<endl;

    }
}