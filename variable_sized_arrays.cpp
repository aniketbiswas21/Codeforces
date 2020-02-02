#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n];
	vector <int> v;
	int no1=0;
	for(int i=0;i<n;i++){
		//a[i]=i;
		int no;
		cin>>no;
		no1=no1+no;
		a[i]=no1;
		for(int j=0;j<no;j++){
			int e;
			cin>>e;
			v.push_back(e);
		}
	}
	//for(int i=0;i<v.size();i++){
		//cout<<v[i]<<" ";
	//}
	//cout<<endl;
	while(q--){
		int i,w;
		cin>>i>>w;
		if(i==0){
			cout<<v[w]<<endl;
		}
		else if(i>0){
			cout<<v[a[i-1]+w]<<endl;
		}
	}

}