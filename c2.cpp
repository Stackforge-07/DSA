#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    string a,b;
	    cin>>a>>b;
	    
	  
	    
	
	    
	   
	    
	    
	    string ans="";
	    
	    
	    
	    for(int i=0 ; i<max(n,m); i++){
	        
	        if(a[i]==b[i]) ans+=a[i];
	        
	        else break;
	        
	   
	    }
	    
	    
	    cout<<ans<<endl;
	    
	}
	return 0;

}