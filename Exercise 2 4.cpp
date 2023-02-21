#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
	int num;
	int sum = 0;
	int i = 1;
	cout<<"Enter a nonzero number"<<endl;
	cin>>num;
	while(num>0){
		
		if(i>num){
			break;
			
		}
		
		for(i;i<=num;i++){
			sum+=i;
		}
		
		cout<<sum;
	}
	
}
