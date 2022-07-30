#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void insertInfo(float *pArray, int number){
	cout << "Enter GPA of students." << endl;
	for(int i=0; i<number; ++i){
		cout << "Student " << i + 1 << ": ";
		cin>>*(pArray + i);
	}
}

void displayInfo(float *pArray, int number){
	cout << "\nDisplaying GPA of students." << endl;
	for (int i =0; i<number; i++){
		cout<< "Student "<<i+1<<": "<< *(pArray+i)<<endl;
	}
}
int main(){
	int number =0;
	float *pArray;
	
	while(number<1){
		cout<<" Enter total number of students: ";
		cin>> number;
		if(number<0){
			cout<<" Number should be bigger than 0 "<<endl;
		}
	}
	
	// create array 
	pArray = new float[number];
	
	insertInfo(pArray, number);
	displayInfo(pArray, number);
	
	// delete to empty memory
	delete[] pArray;
    return 0;
}