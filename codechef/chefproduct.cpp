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
#define sfs(a) scanf("%s",s)
#define sfsn(a) scanf("%s\n",s)
#define pfs(a) printf("%s", a)
#define whilet lli t; sfc(t); while(t--)
#define fi(i,n) for(i=0;i<n;i++)
#define fin(i,s,n) for(i=s;i<n;i++)

int main() {
    whilet {
        lli n;
        sfcn(n);
        if (n==2) {
            cout<<0<<endl;
        } else {
            if (n%2 == 0) {
                lli m = ((lli) sqrtl(n)) / 2;
                cout<<m<<endl;
            } else {
                lli m = (((lli) sqrtl(n)) + 1) / 2;
                cout<<m<<endl;
            }
        }
    }
    return 0;
}

