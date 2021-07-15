#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007//aacoder
// aacoder codes 
#define pb push_back //aacoder

using namespace std;
vector<ll> aacoder[200008],value,childs,ans; //aacoder

void dfs(ll now, ll last){ //aacoder

for(ll i=0; i<aacoder[now].size(); i++){ //aacoder
    // aacoder
        ll child= aacoder[now][i]; //aacoder
        if(child!=last) //aacoder
        dfs(child,now); //aacoder
    }
    childs.clear();
    
    for(ll i=0; i<aacoder[now].size(); i++){  //aacoder
        // aacoder
        ll child= aacoder[now][i];  //aacoder
        if(child!=last)
        childs.push_back(value[child]); //aacoder
    }
    if(childs.size()>0){
        sort(childs.begin(),childs.end()); //aacoder
        
        ll x=childs[0];  //aacoderhhuhik
        // aacoderjnkj
        ll checker=0; //aacoder
        // aacoder
        for(ll i=0; i<childs.size(); i++){  //aacoder
            // aacoder  //aacoder pooji aacoderpokfjdfdfdfv
            if(childs[i]!= x) checker++;  //aacoder
            // aacoder
        }
        if(checker==0) value[now]+= x+1; //aacoder
        // aacoder
        if(checker!=0) value[now]+= x +2;      //aacoder
    }
    else
    value[now]=0; //aacoder
}
 

void dfs1(ll node, ll par, ll minh){
  
    for(ll i=0; i<aacoder[node].size(); i++){  //aacoder
        // aacoder
        ll child= aacoder[node][i];
        // snekar
        minh = min(minh,value[node]);
        if(child!=par){
            if(value[child]>=minh-1){
            dfs1(child,node,minh);
            }
        }
    }
    if(value[node]==0){
    ans.push_back(node);
    }
}    

/* 
code chef thanks  aacoder for the nice questions
i think i did well in this aacoderpokfjdfdfdfv
printf
scanf 
cin ,cout are same 
*/
    



int main(){
ios_base::sync_with_stdio(0);
      cin.tie(0);

ll t = 1; cin >> t;
    while(t--) {
        ll N; cin >> N;

value.assign(N+1,0);

        for(ll i=0;i<N-1; i++)
        {
            int l, r;
            cin >> l >> r;
            aacoder[l].pb(r), aacoder[r].pb(l);
        }

        dfs(1,0);


 int minx = INT_MAX;
        
        for(ll i = 0; i<aacoder[1].size(); i++){
            ll child = aacoder[1][i];
            if(value[child]<minx){
                minx = value[child];
            }
        }

        for(ll i=0; i<aacoder[1].size(); i++){
            // aacoder
            ll child = aacoder[1][i];
            if(value[child] == minx)
            // aacoder
            dfs1(child,1,minx);

        }

        sort(ans.begin(), ans.end());
        // aacoder
        cout<<ans.size()<<" "<<minx+1<<endl;//aacoder
        // aacoder
        for (ll i = 0; i <ans.size(); ++i) cout<<ans[i]<<" ";//aacoder
        cout<<endl;
        

        for (ll i = 1; i <=N; ++i) {aacoder[i].clear(); }
// aacoder 
       value.clear();
       ans.clear();


        
       

    } 
    
    return 0;
    
}