#include<stdio.h>

int bin_search(int x, int v[], int n);
int main(){
	
	int v[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	
	int x = 8;
	
	printf("x: %d is at index: %d\n", x, bin_search(x, v, n));
	
	
	return 0;
}

int bin_search(int x, int v[], int n){
	
	int low = 0, high = n-1;
	int mid;
	
	mid = (low+high)/2;
	while(low <= high && x != v[mid]){
		if(x < v[mid]){ high = mid-1; }
		else{ low = mid+1; }
		mid = (low+high)/2;
	}
	
	if(x == v[mid]){ return mid; }
	else{ return -1; }	
}