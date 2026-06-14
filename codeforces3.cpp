#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int a,b,x;

		cin>>a>>b>>x;

		int op=0;

		


		while(true){

			if(a==b){
				break;
			}

			else if(abs(a-b)==1) {
				op+=1;
				break;
			}

			

			else if(x>a && x>b) {
				op+=2;
				break;
			}

			else if((a>x || b>x ) && a!=x || b!=x) {


				a=a/x;
				b=b/x;
				op+=2;
			}



			else if((a>x || b>x ) && a==x || b==x) {


				if(a!=x)a=a/x;
				if(b!=x)b=b/x;
				op+=1;
			}

		}

		cout<<op<<endl;

		
	}

	return 0;
}