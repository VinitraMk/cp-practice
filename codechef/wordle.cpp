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
    whilet{
        string s,t,m="";
        lli i;
        cin>>s;
        cin>>t;
        lli n = s.length();
        fi(i,n) {
            if(s[i] == t[i])
                m = m + "G";
            else
                m = m + "B";
        }
        cout<<m<<endl;
    }
    return 0;
}

