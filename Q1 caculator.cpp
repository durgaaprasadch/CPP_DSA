#include<iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	
	
	cout<< "enter a=";
	cin>> a;
	
	
	cout<< "enter b=";
	cin>>b;
	  
     int add = a+b ;
     int sub = a-b || b-a;
     int mul = a*b;
     int div = a/b ;
     
     
     int ans;
     
     cout<<"Choose Operation:  add(1) / sub(2)/ mul(3)  / div(4) "<<endl;
     cin>>ans;
     
     if (ans==1){
     	cout<<add;
	 }
	 else if(ans==2){
	 	cout<<sub;
	 	
	 }
	 
	 else if(ans==3){
	 	cout<<mul;
	 }
    else if(ans==4){
    	cout<<div;
	}
     
     
}
