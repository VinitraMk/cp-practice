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

bool samesign(lli a, lli b) {
    if (((a > 0) && (b < 0)) || ((a < 0) && (b > 0)))
        return false;
    return true;
}
int main() {
    whilet {
        lli n,maxn=1,i;
        sfcn(n);
        lli dp[n],arr[n];
        fi(i,n) {
            sfc(arr[i]);
        }
        dp[n-1] = 1;
        for(i=n-2; i>=0; i--) {
            if (!samesign(arr[i], arr[i+1])) {
                dp[i] = dp[i+1] + 1;
            }
            else {
                dp[i] = 1;
            }
        }
        fi(i,n)
            printf("%lld ", dp[i]);
        printf("\n");
    }
    return 0;
}
