#include <iostream>

int *foldArray(int *array,int size,int times);
void print(int *arr, int size);

int main(){
	using namespace std;
	int arrSize = 0;
	int array[] = {1,2,3,4,8,1,1,1,1,1,1,1,1,1,6,7,6,5,4,6,7};
	 
	arrSize = sizeof(array) / sizeof(int);
	cout << "Array size=" << arrSize << endl;
	int *arr2 = foldArray(array,arrSize, 4);

	getchar();
	return 0;
}

int *foldArray(int *arr,int size, int times){
	int sizep = size, first, last;
	int timesp = times;
	int *arr1 = arr;
	int *arr2 = new int[size];
	using namespace std;

	print(arr1,sizep-1);

	while(times > 0 && size > 1){
		first=0,last=sizep-1;
		while(first < last){
			arr2[first] = arr1[first] + arr1[last];
			first++;
			last--;
		}
		arr2[first] = sizep%2 == 0 ? arr2[first] = 0 : arr2[first] = arr1[last];
		sizep = sizep%2 == 0 ? sizep/2 : sizep/2 + 1;
		arr1 = arr2;
		times--;
		print(arr2,sizep);
	}
	cout << "size " << sizep << " f " << first << " l " << last << endl;
	print(arr2,sizep);

	delete arr2;
	return arr2;
}

void print(int *arr, int size){
	int sizep = size;
	int *arr2 = arr;
	using namespace std;
	
	if(sizep == 1){
		cout << arr2[0] << endl;
	}
	else if(sizep % 2 != 0) {
		for(int i=0; i<sizep; i++){
			cout << arr2[i] << " ";
		}
		cout << endl;
	}
	else{
		for(int i=0; i<sizep; i++){
		cout << arr2[i] << " ";
		}
		cout << endl;
	}
}