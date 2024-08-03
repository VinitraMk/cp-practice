#include <bits/stdc++.h>
using namespace std;

#define li long int
#define lli long long int
#define sfi(a) scanf("%d", &a)
#define pfi(a) printf("%d", &a)
#define sfc(a) scanf("%lld", &a)
#define pfc(a) printf("%lld", &a)
#define pfs(a) printf("%s", a)
#define whilet lli t; sfc(t); while(t--)

int main() {
    whilet{
        lli n;
        sfc(n);
        if(n%2==0) {
            pfs("Yes\n");
        } else {
            pfs("No\n");
        }
    }
    return 0;
}

