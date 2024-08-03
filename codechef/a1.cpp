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

lli find_subarray(lli target, lli curr_ind, lli arr[], lli dp[][1001]) {
    bool is_target_match = false;
    if (curr_ind == 0) {
        //cout<<"reached 0"<<endl;
        return (target - arr[curr_ind]) == 0;
    }
    if (arr[curr_ind] > target) {
        //cout<<"grtr than target, moving down"<<endl;
        return find_subarray(target, curr_ind - 1, arr, dp);
    }
    else {
        dp[curr_ind][target] = target - arr[curr_ind];
        if (dp[curr_ind][target] == 0) {
            //cout<<"target found"<<endl;
            return true;
        } else {
            //cout<<"less than target: "<<dp[curr_ind][target]<<endl;
            is_target_match = find_subarray(dp[curr_ind][target], curr_ind - 1, arr, dp);
        }
    }
    if (is_target_match) {
        return true;
    }
    else {
        return find_subarray(target, curr_ind - 1, arr, dp);
    }
}

int main() {
    whilet {
        lli n,m,i;
        sfc(n);sfcn(m);
        lli arr[n],dp[n][1001];
        fi(i,n) {
            sfcn(arr[i]);
        }
        sort(arr,arr+n);
        if (find_subarray(m,n-1,arr,dp)) {
            pfs("Yes\n");
        }
        else {
            pfs("No\n");
        }
    }
    return 0;
}

