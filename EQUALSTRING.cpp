#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int equalStrngs(int N, string A, string B){
    string a=" "; int count = 0;
    for(int i=0;i<N;i++){
        if(A[i]!=B[i]){
            a += B[i]; 
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.length()-1;i++){
        if(a[i]!= a[i+1])
            count += 1;
    }
    return count;
}

int main(){
    int T,N,c;
    string A,B;
    cin>>T;
    while(T--){
        cin>>N;
        cin>>A>>B;
        c = equalStrngs(N,A,B);
        cout<<c<<endl;
    }
    return 0;
}
