#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector <int> vt(n);
	for(int i=0;i<n;i++){
		cin>>vt[i];
	}
	rotate(vt.begin(),vt.begin()+k,vt.end());
	reverse (vt.begin(),vt.end());
	for(int i=0;i<vt.size();i++){
	cout<<vt[i]<<" ";
}
return 0;
}
