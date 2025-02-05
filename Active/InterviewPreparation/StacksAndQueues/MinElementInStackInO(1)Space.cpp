#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
#define Mod 1000000007
#define Infinity (ll)1e18
#define Append(a) push_back(a)
#define Pair(a,b) make_pair(a,b)
#define Clear(a) for(ll &x : a){x=0;}
#define Point(x) std::fixed<<setprecision(15)<<x
#define SetBits(x) __builtin_popcount(x);
#define DebugCase(i,x) cout<<"Case #"<<i<<": "<<x<<'\n'
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Status(b) (cout<<(b?"YES\n":"NO\n"));
#define Print(x) cout<<x
#define Input(x) cin>>x

stack<int>stk;
int n;
int min_ = INT_MAX;


void Push(){
    int x;
    cin>>x;
    if(stk.empty()){
        stk.push(x);
        min_ = x;
    }else if(x>=min_){
        stk.push(x);
    }else{
        stk.push(2*x-min_);
        min_ = x;
    }
}

void Pop(int x){
    if(stk.empty()){
        // underflow
    }else if(x>=min_){
        stk.pop();
    }else{
        min_ = 2*min_ - x;
        stk.pop();
    }
}

int main(){
  FastIO;
  
  return 0;
} 
