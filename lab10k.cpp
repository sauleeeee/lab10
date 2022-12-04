#include <bits/stdc++.h>
using namespace std;
bool isprime(int a){
	if(a==0 || a==-1 ||a==1){
		return false;
	}
	if(a<0){
		a*=-1;
	}
	for(int i=2;i<a;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	vector <int> vt(n);
	for(int i=0;i<n;i++){
		cin>>vt[i];
	}
cout<<count_if(vt.begin(),vt.end(),isprime);
}
