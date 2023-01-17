#include <iostream>

using namespace std;

int r_number(int number){
	int r_number = 0;
	while(number>0){
		r_number=r_number*10+number%10;
		number/=10;	
	}
	return r_number;
}
int main(){
	int hint_number;
		cin>>hint_number;
		while (hint_number--){
			int num1, num2;
			cin>>num1>>num2;
			int sum = r_number(num1)+r_number(num2);
			cout << r_number(sum) << endl; 
			
		}
				
}