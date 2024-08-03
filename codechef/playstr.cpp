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
        lli n,c1s = 0,c0s = 0,c1r = 0,c0r = 0,i;
        sfcn(n);
        string s,r;
        cin>>s;
        cin>>r;
        fi(i,n) {
            if (s[i] == '0')
                c0s++;
            else
                c1s++;
            if (r[i] == '0')
                c0r++;
            else
                c1r++;
        }
        if ((c0s == c0r) && (c1s == c1r))
            pfs("YES\n");
        else
            pfs("NO\n");
    }
    return 0;
}

