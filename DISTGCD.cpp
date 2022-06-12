#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main(){
	long long T,A,B,x=0,count=0;
	cin>>T;
	while(T--){
		cin>>A>>B;
		vector<int>s{};
		int temp = abs(A-B);
		for(int i =1;i<=sqrt(temp);i++){
			if(temp%i == 0){
				if(temp/i == i) s.push_back(1);
				else s.push_back(2);
			}
		}
		for(auto i:s)
			count += i;
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
