#include <bits/stdc++.h>
using namespace std;

#define li long int
#define lli long long int
#define sfi(a) scanf("%d", &a)
#define pfi(a) printf("%d", a)
#define sfc(a) scanf("%lld", &a)
#define sfcn(a) scanf("%lld\n", &a)
#define pfc(a) printf("%lld", a)
#define pfcn(a) printf("%lld\n", a)
#define pfs(a) printf("%s", a)
#define whilet lli t; sfc(t); while(t--)
#define fi(i,n) for(i=0;i<n;i++)
#define fin(i,s,n) for(i=s;i<n;i++)

int main() {
    whilet {
        lli n,k,i,p;
        sfc(n);sfcn(k);
        lli dpsum[n], maxsum[n];
        fi(i,n) {
            sfc(p);
            if (i==0)
                dpsum[i] = p;
            else
                dpsum[i] = dpsum[i-1] + p;
            if (i<k)
                maxsum[i] = dpsum[i];
            //cout<<dpsum[i]<<" ";
        }
        fin(i,k,n)
            maxsum[i] = dpsum[i] - dpsum[i-k];
        pfcn(*max_element(maxsum,maxsum+n));
    }
    return 0;
}

