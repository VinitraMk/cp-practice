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
    lli arr[4];
    lli c=0;
    for(lli i=0; i<4;i++) {
        sfc(arr[i]);
        if(arr[i] >= 10) {
            c++;
        }
    }
    pfc(c);
    return 0;
}

