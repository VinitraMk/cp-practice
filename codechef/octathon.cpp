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
    lli x;
    sfc(x);
    if (x < 3) {
        pfs("GOLD");
    } else if ((x >= 3) && (x < 6)) {
        pfs("SILVER");
    } else {
        pfs("BRONZE");
    }
    return 0;
}

