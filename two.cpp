#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() 
{
   int x; 
   cin>>x; 
   while(x--)
   {
        int n,c;                                 //n = number of stalls
                                                //c = number of cows 
        cin>>n>>c;
        int a[n];                               

        for(int i=0;i<n;i++)                    //location of stalls
        cin>>a[i];

        sort(a,a+n);

        int lowerbound = 1;
        int upperbound = 1e9;                   //10^9
        int ans = 0;
    
        while(lowerbound<=upperbound)
        {
            int mid = (lowerbound+upperbound)/2;
            int cow = 1;
            int prev = a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]-prev>=mid)
                {
                    cow++;
                    prev = a[i];
                    if(c==cow) 
                    break;
                }
            }
            if(cow==c) 
            {
                ans = mid;
                lowerbound = mid + 1;
            }
            else 
            {
                upperbound = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
}
