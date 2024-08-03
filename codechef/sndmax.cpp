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
        lli x, y, z;
        sfc(x);sfc(y);sfc(z);
        lli m3 = max(max(x,y),z);
        if (x == m3) {
            pfcn(max(y,z));
        } else if (y == m3) {
            pfcn(max(x,z));
        } else {
            pfcn(max(x,y));
        }
    }
    return 0;
}

