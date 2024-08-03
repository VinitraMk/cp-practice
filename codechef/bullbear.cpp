#include <bits/stdc++.h>
using namespace std;

#define li long int
#define lli long long int
#define sfi(a) scanf("%d", &a)
#define pfi(a) printf("%d", a)
#define sfc(a) scanf("%lld", &a)
#define pfc(a) printf("%lld", a)
#define pfcn(a) printf("%lld\n", a)
#define pfs(a) printf("%s", a)
#define whilet lli t; sfc(t); while(t--)

int main() {
    whilet {
        lli x,y;
        sfc(x);sfc(y);
        if (y > x) {
            pfs("PROFIT\n");
        } else if (y < x) {
            pfs("LOSS\n");
        } else {
            pfs("NEUTRAL\n");
        }
    }
    return 0;
}

