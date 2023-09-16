#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int candies,n;
	cin>>candies>>n;
	
	if(candies % n == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}