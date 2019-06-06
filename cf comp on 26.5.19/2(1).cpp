    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define mod  1000000007
    #define imod 1000000006
    #define pb push_back
    #define mk  make_pair
    #define sortf(a,n) sort(a,a+n);
    #define sortr(a,n) sort(a,a+n,greater<ll>())
    #define vsort(v) sort(v.begin(),v.end())
    #define vsortr(v) sort(v.begin(),v.end(),greater<ll>())
    #define fo(n) for(int i=0;i<n;i++)

    struct da{
    	ll val;
    	ll fr;
    };

    bool compare(da a, da b){
    	return a.fr>b.fr;
    }

    int main(){

    	ll n,k;
    	cin>>n>>k;
    	ll* a= new ll[n+10]();
    	map<pair<ll,ll>,ll> m;

        for(int i=0;i<k;i++){
        	ll x,y;
        	cin>>x>>y;
        	a[x]++;
        	if(x!=y){
        		a[y]++;
        		m[make_pair(x,y)]++;
        		m[make_pair(y,x)]++;
        	}
        }

        da* daa = new da[n];
        ll j=0;
        for(int i=0;i<=n;i++){
        	if(a[i]!=0){
        		daa[j].val=i;
        		daa[j].fr=a[i];
        		j++;
        	}
        }


       sort(daa,daa+j,compare);
       for(int i=0;i<j;i++){

       	   for(int k1=i+1;k1<j;k1++){
       	   	  if((daa[i].fr + daa[k1].fr)<k)
       	   	     break;

       	   	    ll p = daa[i].val;
       	   	    ll q= daa[k1].val;

       	   	    ll p1 = daa[i].fr;
       	   	    ll q2= daa[k1].fr;
       	   	    ll p3=0;
       	   	    if(m.find(make_pair(p,q))!=m.end()){
       	   	    	p3=m[make_pair(p,q)];
       	   	    }

       	   	    ll ans = p1+q2-p3;
       	   	    if(ans>=k){
       	   	    	cout<<"YES"<<endl;
       	   	    	return 0;
       	   	    }
       	   }
       }

        cout<<"NO"<<endl;

    }
