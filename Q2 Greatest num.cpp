#include<iostream>
using namespace std;

int main (){
	
	int a;
	int b;
	int c;
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	cout<<"enter c=";
	cin>>c;
	
	if(a>b && a>c){
		cout<<"a is the greatest";
	}
	else if(b>a && b>c){
		cout<<"b is greatest";
	}
	else if(c>a && c>b){
		cout<<"c is greatest";
	}
	
}
