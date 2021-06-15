
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
void solve(){
    
    int n=0;
    cin>>n;
    int item_price[n];
    for(int i=0;i<n;i++){
        cin>>item_price[i];
    }
    int money=0;
    cin>>money;
    int count=0;
    int computer_pridict= ((rand())%n)+1;
    cout<<computer_pridict<<endl;

    for(int i=0;i<n;i++){
        if(money % item_price[i]==0){

            count++;
           
        }
    }
    if(count>computer_pridict){
        cout<<"wrong"<<endl;
    }else{
        cout<<"Right"<<endl;
    }
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