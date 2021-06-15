
#include<bits/stdc++.h>
#define int         int64_t
#define ll          long long 
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int dp[10000][10000];
int knapsack(int C, int weight[], int value[], int i)

{

 

        if (i == 0 || C == 0){ 

             return 0;

          }

    if(dp[i-1][C]!=0){
        return dp[i-1][C];
    }

    if (weight[i - 1] > C)
   {
        return dp[i-1][C]=knapsack(C, weight, value, i - 1);
 }
   
    else

      {  

        return  dp[i-1][C]=max(value[i - 1]+ 
                 knapsack(C - weight[i - 1], weight, value, i - 1),
                  knapsack(C, weight, value, i - 1));


}
}


void solve(){
     

     int n=0;
     cin>>n;
     int weight[n];
     int value[n];
     int C;
     for(int i=0;i<n;i++){
        cin>>weight[i];
     }
     for(int i=0;i<n;i++){
        cin>>value[i];
     }
     cin>>C;

     int ans=knapsack(C,weight,value,n);
     cout<<ans<<endl;

    
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}