#include <iostream>
using namespace std;
int maxsum(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	int actmax=0,curmax=0;
	for(int i=0;i<n;i++){
		if(curmax+a[i]<=0){
			curmax=0;
			cout<<actmax<<" at "<<i<<" current"<<curmax<<endl;
		}else if(curmax+a[i]>actmax){
			curmax=curmax+a[i];
			actmax=curmax;
			cout<<actmax<<" at "<<i<<" current"<<curmax<<endl;
		}else {
			curmax=curmax+a[i];
			cout<<actmax<<" at "<<i<<" current"<<curmax<<endl;
		}
	}
	return actmax;
}
int main() {
	// your code goes here
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxval=maxsum(a,n);
	cout<<maxval;
	return 0;
}