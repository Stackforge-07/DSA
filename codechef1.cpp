#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,rchef,rchefina;
	cin>>n;
	
	for(int i=1 ; i<100 ; i+=5){
	    
	    if(n>=i && n<=i+4) rchef =i;
	    
	      if((n+1)>=i && (n+1)<=i+4) rchefina =i;
	    
	}
	
	if(rchef==rchefina) cout<<"Yes"<<endl;
	
	else cout<<"No"<<endl;
	
	return 0;

}