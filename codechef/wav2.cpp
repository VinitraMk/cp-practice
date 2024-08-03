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

lli first_greater(lli a[], lli si, lli ei, lli qi) {
    if (ei == si) {
        if (a[si] < qi) {
            return si + 1;
        } else if (a[si] > qi){
            return si;
        } else {
            return -1;
        }
    }
    if (ei > si) {
        lli mi = (si + ei)/2;
        if (a[mi] < qi) {
            si = mi + 1;
        } else if (a[mi] > qi) {
            ei = mi;
        } else {
            return -1;
        }
        return first_greater(a,si,ei,qi);
    }
    return -1;
}

int main() {
    lli n,q,i,qi;
    sfc(n);sfcn(q);
    lli a[n];
    fi(i,n) {
        sfc(a[i]);
    }
    sort(a,a+n);
    fi(i,q) {
        sfcn(qi);
        lli fg = first_greater(a,0,n-1,qi);
        //cout<<fg<<endl;
        if (fg == -1) {
            pfs("0\n");
        } else {
            if (fg % 2 == 0) {
                pfs("POSITIVE\n");
            } else {
                pfs("NEGATIVE\n");
            }
        }
    }
    
    
    return 0;
}

