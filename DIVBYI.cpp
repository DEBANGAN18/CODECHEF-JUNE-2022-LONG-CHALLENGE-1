#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int T,N;
	cin>>T;
	while(T--){	
		cin>>N;
		vector<long long>v;
		int l=0,r=0,mid=0;
		mid = (1+N)/2;
		if(N%2 == 0){
			l = mid;
		}
		else{
			v.push_back(mid);
			l = mid-1;
		}
		r=mid+1;
		while(l>=0 && r<=N){
			v.push_back(l);
			v.push_back(r);
			l--;;
			r++;
		}
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
