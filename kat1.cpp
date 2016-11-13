#include <iostream>

int *foldArray(int *array,int size,int times);

int main(){
	using namespace std;
	int arrSize = 0;
	int array[] = {2,2,4,4};

	arrSize = sizeof(array) / sizeof(int);
	cout << "Array size=" << arrSize << endl;
	int *arr2 = foldArray(array,arrSize, 1);

	for(int i=0; i < arrSize; i++){
		cout << arr2[i] << endl;
	}

	delete arr2;

	getchar();
	return 0;
}

int *foldArray(int *arr,int size, int times){
	int *arrP = arr;
	int sizep = size;
	int timesp = times;
	int k = 0;
	int *arr2 = new int(sizep);

	using namespace std;

	*arr2 = 1;
	*(arr2+1) = 2;
	*(arr2+2) = 3;
	*(arr2+3) = 4;


	return arr2;
}