//pola segitiga
#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Pola 1\n"<<endl;
	
	cout<<"nilai n \t: "; cin>>n;
	
	for(int a = 1; a <= n; a++){
		for(int b = 1; b < a; b++){
			cout<<"* ";
		}
		cout<<"*"<<endl;
	}
	
	int c;
	cout<<"Pola 2\n"<<endl;
	
	cout<<"nilai n \t: "; cin>>c;
	
	for(int c = 1; c <= n; c++){
		for(int d = n; d > c; d--){
			cout<<"* ";
		}
		cout<<"*"<<endl;
	}
	
	
	
	
	
	
	
}
