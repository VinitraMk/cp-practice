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
        lli n,p,s,c=0;
        sfcn(n);
        map<lli,lli> mp;
        for(lli i = 1; i <= 11; i++)
            mp[i] = 0;
        for(lli i = 0; i < n; i++) {
            sfc(p);sfcn(s);
            mp[p] = max(mp[p],s);
        }
        for(lli i = 1; i <= 8; i++)
            c += mp[i];
        pfcn(c);
    }
    return 0;
}

