#include<bits/stdc++.h>
using namespace std;

int maxnumber(int n, vector<int>num){
	int max = INT_MIN;
	for(int i=0; i<n; i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	return max;
}
int minnumber(int n, vector<int>num){
	int min = INT_MAX;
	for(int i=0; i<n; i++){
		if(num[i]<min){
			min=num[i];
		}
	}
	return min;
}
int primecount(int n, vector<int>num){
	int pc = 0;
	for(int i=0;i<n;i++){
		bool ok =1;
		if(num[i]<2){
			continue;
		}
		int x = sqrt(num[i]);
		for(int j=2; j<=x; j++){
			if(num[i]%j==0){
				ok = 0;
				break;
			}
		}
		if(ok){
			pc++;
		}
	}
	return pc;
}
int palindromecount(int n, vector<int>num){
	int plc =0;
	for(int i=0; i<n; i++){

		int number = num[i];
		int orginal = number;
		int reverse = 0;

		while(orginal>0){
			int dig = orginal % 10;
			reverse = reverse*10 + dig;
			orginal = orginal /10;
		}
		if(number == reverse){
			plc++;
		}
	}
	return plc;
}
int maxdivisors(int n, vector<int>num){
	int maxdiv = 0;
	int answer = 0;
	for(int i=0;i<n;i++){
		int number = num[i];
		int count = 0;
		for(int j=1; j<=number; j++){
			if(number%j==0){
				count++;
			}
		}
		if(count>maxdiv){
			maxdiv = count;
			answer = number;
		}
		else if(count == maxdiv && number>answer){
			answer = number;
		}
	}
	return answer;
}


int main(){
	int n; cin>>n;
	vector<int>num(n);
	for(int i=0; i<n; i++){
		cin>>num[i];
	}
	cout<<"The maximum number : "<<maxnumber(n, num)<<"\n";
	cout<<"The minimum number : "<<minnumber(n,num)<<"\n";
	cout<<"The number of prime numbers : "<<primecount(n,num)<<"\n";
	cout<<"The number of palindrome numbers : "<<palindromecount(n,num)<<"\n";
	cout<<"The number that has the maximum number of divisors : "<<maxdivisors(n,num)<<"\n";
	return 0;
}