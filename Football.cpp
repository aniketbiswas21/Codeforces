#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=0;
	int n;
	for(int i=0;i<s.length();i++){
		count=0;
		for(int j=i+1;j<s.length();j++){
			if(s[j]!=s[i]){
				break;
			}
			count++;
			n=count;
			if(n+1>=7){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
}