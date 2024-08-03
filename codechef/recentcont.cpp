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
        lli n,s=0,l=0;
        sfcn(n);
        for(lli i=0; i<n; i++) {
            string cs;
            cin>>cs;
            if (cs == "START38") {
                s++;
            } else {
                l++;
            }
        }
        printf("%lld %lld\n", s,l);
    }
    return 0;
}

