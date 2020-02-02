#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string l;
	cin>>t;
	int flag=0;
	while(t--){
		stack <char> s;
		int e=0;
		cin>>l;
		int length=l.length();
		for(int i=0;i<length;i++){
			if(l[i]=='{'||l[i]=='('||l[i]=='['){
				s.push(l[i]);	
			}
			else{
			if(s.empty()){
				flag=1;
				break;
			}
			else if(l[i]==')'){
				if(s.top()=='('){
					s.pop();
			}
			else{
				flag=1;
				break;
				}
			}
			else if(l[i]==']'){
				if(s.top()=='['){
					s.pop();
			}
			else{
				flag=1;
				break;
				}
			}
			else if(l[i]=='}'){
				if(s.top()=='{'){
					s.pop();
			}
			else{
				flag=1;
				break;
				}
			}
			}
		}
		if(!s.empty()){
			flag=1;
		}
		
		if(flag==0){
				cout<<"YES"<<endl;
			}
			else if(flag==1){
				cout<<"NO"<<endl;
			}

		}

}