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
        lli i,j,n,s,e,co;
        sfcn(n);
        pair<lli,lli> dp[49][49];
        fi(i,49) {
            fi(j,49) {
                dp[i][j] = make_pair(0,0);
            }
        }
        fi(i,n) {
            sfc(s);sfc(e);sfcn(co);
            dp[s][e].first = max(co, dp[s][e].first);
        }
        fi(i,49) {
            fi(j,49) {
                if ((j<i) || (j==0 && i==0))
                    continue;
                if (i==0) {
                    lli sc = dp[i][j].first;
                    lli mc = max(sc,dp[i][j-1].second);
                    dp[i][j].second = mc;
                }
                else {
                    lli sc = dp[i][j].first;
                    lli mc = max(max(sc + dp[i-1][i].second, dp[i-1][j].second),dp[i][j-1].second);
                    //lli mc = max(sc + dp[i-1][j-1].second, dp[i-1][j].second);
                    dp[i][j].second = mc;
                }
            }
        }
        /*
        fi(i,48) {
            fi(j,48) {
                cout<<dp[i][j].first<<"|"<<dp[i][j].second<<"  ";
            }
            cout<<endl;
        }
        */
        pfcn(dp[48][48].second);
    }
    return 0;
}

