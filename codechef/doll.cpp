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
        lli n,k,p,c=0;
        sfc(n);sfc(k);
        for(lli i = 0; i < n; i++) {
            sfc(p);
            if(p>k) c++;
        }
        pfcn(c);
    }
    return 0;
}

