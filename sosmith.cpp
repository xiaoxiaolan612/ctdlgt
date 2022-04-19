#include<iostream>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tcs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(nt(n)) cout<<"NO"<<endl;
		else {
			int s=0, m=n;
			while(n%2==0){
				n/=2;
				s+=2;
			}
			int i=3;
			while(i*i<=n){
				if(n%i==0){
					while(n%i==0){
						n/=i;
						s+=tcs(i);
					}
				}
				else i+=2;	
			}
			if(n>1) s+=tcs(n);
			if(tcs(m)==s) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
