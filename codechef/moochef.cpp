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

int main() {
    whilet {
        lli n,cmin,cmax,l,r,p;
        scanf("%lld %lld %lld\n", &n, &l, &r);
        lli res[n+1];
        res[0]=0;
        for(lli i = 0; i < n; i++) {
            sfc(p);
            if ((p >= l) && (p <= r)) {
                res[i+1] = res[i] + 1;
            } else {
                res[i+1] = res[i] - 1;
            }
        }
        cmin = *min_element(res,res+n+1);
        cmax = *max_element(res,res+n+1);
        printf("%lld %lld\n", cmax, cmin);
    }
    return 0;
}

