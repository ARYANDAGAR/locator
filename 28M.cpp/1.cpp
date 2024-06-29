#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int solve(){
	int n; 
	cin>>n;

	if(n < 3){
		return n;
	}
	int f = 1, s=2;
	int res = 0;
	for(int i=2; i<n; i++){
		res = f + s;
		f = s;
		s = res;
	}
	cout<<res<<endl;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
	}
	   return 0;
}