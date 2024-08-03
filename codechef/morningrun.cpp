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
    lli x,y;
    sfc(x);sfc(y);
    lli per = 2*(x+y);
    if (per >= 1000) {
        pfs("YES\n");
    } else {
        pfs("NO\n");
    }
    return 0;
}

