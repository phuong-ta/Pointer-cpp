#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void add(int num1, int num2){
	cout<< num1 << " + "<< num2 <<" = "<< num1 + num2 <<endl;
}

void subtract(int num1, int num2){
	cout<< num1 << " - "<< num2 <<" = "<< num1 - num2 <<endl;
}

void multiply(int num1, int num2){
	cout<< num1 << " * "<< num2 <<" = "<< num1 * num2 <<endl;
}
int main() {
	void (*p_calculator[])(int, int)={ add, subtract, multiply};
	int ch=3, num1, num2;
	
	while(ch>=0){
		cout<<"Enter Choice: 0 for add, 1 for subtract, 2 for multiply and 3 for exit"<<endl;
		cin>>ch;
		if(ch>=3 || ch<0){
			cout<<"exit"<<endl;
			break;
		}
		cout<<"Enter number 1: ";
		cin>> num1;
		cout<<"Enter number 2: ";
		cin>> num2;
		
		(*p_calculator[ch])(num1, num2);
	}	
	system("pause");
	return 0;
}