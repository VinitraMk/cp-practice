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

lli count_pretty_next(lli a) {
    if (a%10 == 9)
        return 1;
    else if(a%10 >= 3)
        return 2;
    else if(a%10 >= 0)
        return 3;
    else
        return 0;
}

lli count_pretty_prev(lli a) {
    if (a%10 == 9)
        return 3;
    else if ((a%10 < 9) && (a%10 >= 3))
        return 2;
    else if ((a%10 < 3) && (a%10 > 1))
        return 1;
    else
        return 0;
}

int main() {
    whilet {
        lli l,r, c = 0, last;
        sfc(l);sfcn(r);
        lli ln = l + (10 - (l%10)); //20
        lli rp = r - (r%10); //30
        if (ln > r) {
            ln = r;
            rp = -1;
            c = count_pretty_prev(ln);
        }
        else {
            c = count_pretty_next(l);
        }
        if (ln < r) {
            c += ((rp - ln) / 10) * 3;
        }
        if (rp > 0 && rp < r)
            c += count_pretty_prev(r);
        pfcn(c);
    }
    return 0;
}

