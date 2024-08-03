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
    lli a,b,x,y;
    sfc(a);sfc(b);sfc(x);sfc(y);
    lli m,r;
    m = 2*a + b;
    r = 2*x + y;
    if (m > r) {
        pfs("Messi");
    } else if (m < r) {
        pfs("Ronaldo");
    } else {
        pfs("Equal");
    }
    return 0;
}

