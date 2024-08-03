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
#define fi(i,n) for(i=0;i<n;i++)
#define fin(i,s,n) for(i=s;i<n;i++)

int main() {
    whilet {
        lli n,i;
        sfcn(n);
        lli a[n];
        vector<lli> ca;
        fi(i,n) {
            sfc(a[i]);
        }
        ca.push_back(a[0]);
        fin(i,1,n) {
            if (ca.back() != a[i]) {
                ca.push_back(a[i]);
            }
        }
        printf("%lu\n",ca.size());
    }
    return 0;
}

