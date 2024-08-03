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
        lli n,p;
        sfcn(n);
        map<lli,lli> mp;
        for(lli i = 0; i < n; i++) {
            sfcn(p);
            if (mp.find(p) == mp.end())
                mp[p] = 1;
            else
                mp[p] += 1;
        }
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if ((it->second)%2 == 1)
                pfcn(it->first);
        }
    }
    return 0;
}

