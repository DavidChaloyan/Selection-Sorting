#include <iostream>
using namespace std;
//calling input/output functions
void outSelect(int[], int);
void inputSelect(int[], int);
void select(int arr[], int n);
int main() 
{
	cout<<"Input the array`s size"<<endl;
	int n;
	cin>>n;
	int *arr= new int[n];
	cout<<"Input the array`s numbers"<<endl;
	inputSelect(arr,n);
	select(arr, n);
	outSelect(arr,n);
	return 0;

}

