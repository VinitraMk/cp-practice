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
        lli n,i;
        sfcn(n);
        string s = "";
        fi(i,n) {
            if(i==0 || i==n-1)
                s += "1";
            else
                s += "0";
        }
        cout<<s<<endl;
    }
    return 0;
}

