#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		long long  arr[n];


		for(int i=0 ; i<n ; i++){
			cin>>arr[i];
		}

		



		for(int i=1 ; i<n ; i++){
			
		

			if(arr[i-1]>arr[i]){
				swap(arr[i-1],arr[i]);
				arr[i]=arr[i-1]+arr[i];
				
			}

	


			
		
		}

		long long maxi=0;


		for(int i=0 ; i<n ; i++){
			maxi=max(maxi,arr[i]);
		}

		cout<<maxi<<endl;

		




	}
	return 0;
}