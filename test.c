#include<stdio.h>

int bin_search(int x, int v[], int n);

int main(){
	
	int n = 10;
	int v[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int x = 8;
	
	printf("is %d in array: %d\n", x, bin_search(x, v, n));
	
	return 0;
}

int bin_search(int x, int v[], int n){
	
	int low, mid, high;
	
	low = 0;
	high = n-1;
	
	while(low<=high){
		mid = (low+high)/2;
		if(x < v[mid]){ high = mid-1; }
		else if(x > v[mid]){ low = mid+1; }
		else{ return mid; }
	}
	
	return -1;
}




