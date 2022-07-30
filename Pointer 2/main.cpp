#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



//a + i <=> &a[0 + i] ;

//*(a+i) <=> a[i]
void insertElement(int *pArray, int number){
	cout<<"Enter elements"<<endl;
	for(int i =0; i<number; i++){
		cout<<"Enter " <<i+1<<" element: ";
		cin>> *(pArray+i);
	}
}

void displayElement(int *pArray, int number){
	cout<<"Displaying Elements: "<<endl;
	for(int i =0; i<number; i++){
		cout<<"Element "<< i+1<<" :"<< *(pArray+i)<<endl;
	}
}

int total(int *pArray, int number){
	int total=0;
	for(int i =0; i<number; i++){
		total += *(pArray+i);
	}
	return total;
}

int main(){
   	int number =0, sum;
   	int *pArray;
   	while(number<1)
	   {
   		cout<< "Enter the length of array ";
   		cin>> number;
   		if(number<0)
   			{
   				cout<< "Number can not be smaller than 0"<<endl;
		   	}
	   }
   	
   	pArray = new int[number];
   	insertElement(pArray, number);
   	displayElement(pArray, number);
   	sum= total(pArray, number);
   	cout<<"Total of elements: "<<sum<<endl;
    system("pause");
    return 0;
}