#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
	long long T,X,N,ans;
	cin>>T;
	while(T--){
		cin>>X>>N;
		ans = (X-1)*(2*N-X);
		cout<<ans<<endl;
	}
	return 0;
}
