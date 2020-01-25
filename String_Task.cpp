#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string l;
	cin>>s;
	cout<<s<<endl;
	int j=0;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]='A'||'E'||'I'||'O'||'U'||'Y'||'a'||'e'||'i'||'o'||'u'||'y'){

		}
		else if(s[i]!='A'||'E'||'I'||'O'||'U'||'Y'||'a'||'e'||'i'||'o'||'u'||'y'&&s[i]>90){
			l[j]='.';
			l[j+1]=s[i];
			j=j+2;
		}
		else if(s[i]>=65&&s[i]<=90){
			s[i]=s[i]+32;
			l[j]=s[i];
			j++;
		}
	}
	cout<<l<<endl;
}