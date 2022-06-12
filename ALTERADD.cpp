#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,A,B,i=1;
	cin>>T;
	while(T--){
		cin>>A>>B;
		if((B-A)%3==2)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
