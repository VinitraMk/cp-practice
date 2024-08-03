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

bool isVowel(char c) {
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return true;
    return false;
}

int main() {
    whilet {
        string s;
        cin>>s;
        lli n = s.length();
        lli c = 0, cmax = 0,i;
        fi(i,n) {
            if (i == 0 && isVowel(s[i]))
                c++;
            else if(i > 0 && (isVowel(s[i-1]) && isVowel(s[i])))
                c++;
            else if(i > 0 && (!isVowel(s[i-1]) && isVowel(s[i])))
                c=1;
            else if(i > 0 && !isVowel(s[i]))
                c=0;
            cmax = max(cmax, c);
        }
        if (cmax > 2)
            pfs("Happy\n");
        else
            pfs("Sad\n");
    }
    return 0;
}

