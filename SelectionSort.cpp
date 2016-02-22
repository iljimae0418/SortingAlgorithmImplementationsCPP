// O(n^2) algorithm for sorting 
// Selection Sort 
#include <iostream>
#include <cstdlib> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 

void selectionSort(int *a, int n){
	for (int i = 0; i < n; i++){
		int smallest = i;  
		for (int j = i+1; j < n; j++){
			if (a[j] < a[smallest]){
				smallest = j; 
			}
		}
		swap(a[i],a[smallest]); 
	}
}

int main(){
	int a[5] = {16,2,47,5,-1};  
	selectionSort(a,5);  
	for (int i = 0; i < 5; i++){
		printf("%d ",a[i]);
	}
	printf("\n"); 
	return 0; 
}
