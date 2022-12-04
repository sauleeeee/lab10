#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int vt[n];
	int vt1[n];
	for(int i=0;i<n;i++){
		cin>>vt[i];
		vt1[i]=vt[i];
	}
	reverse(vt1,vt1+n);
	for(int i=0;i<n;i++){
		if(vt[i]==vt[n-1-i]){
			cout<<"OK"<<endl;
		}else {
			cout<<"Instead of "<<vt[i]<<" here was "<<vt1[i]<<endl;
		}
	}
}
