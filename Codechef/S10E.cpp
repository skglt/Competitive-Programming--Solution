/*
  author:jignesh1604   
  
  link: https://www.codechef.com/OCT19B/problems/S10E
 */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j,c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int flag=0;
            for(j=i-1;j>=0&&j>=i-5;j--)
            {
                if(a[j]<=a[i])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0)
                c++;
        }
        cout<<c<<"\n";
    }
}
