#include <iostream>
#include<algorithm>
using namespace std;
template<class TT>
TT max_element(TT x[],int N){
	sort(&x[0],&x[N]);
	return x[N-1];
}


int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	int sizeA =sizeof(a)/sizeof(a[0]);
	int sizeB =sizeof(b)/sizeof(b[0]);
	for(int i=0; i<sizeA;i++){

	}
	int pa = max_element(a,sizeA); 
	cout << "Address of the highest value in array A is " << &pa << "\n";
	cout << "The highest value in array A is "<< pa << "\n";
	
	double pb = max_element(b,sizeB); 
	cout << "Address of the highest value in array B is " << &pb << "\n";
	cout << "The highest value in array B is "<< pb << "\n";

	return 0;
}

