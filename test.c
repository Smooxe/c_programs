#include<stdio.h>
#include<ctype.h>

void shell_sort(int v[], int n);
int stoi(char s[]);

int main(){
	
	int s[100] = {8,5,6,2,1};
	
	printf("s: ");
	for(int i = 0; i < 5; i++){ printf("%d", s[i]); }
	putchar('\n');
	
	shell_sort(s, 5);
	printf("s: ");
	for(int i = 0; i < 5; i++){ printf("%d", s[i]); }
	putchar('\n');
	
	return 0;
}

int stoi(char s[]){
	int i, n , sign;
	
	for(i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1:1;
	if(s[i] == '+' || s[i] == '-'){ i++; }
	for(n = 0; isdigit(s[i]); i++){ n = 10*n + (s[i]-'0'); }
	
	return sign*n;
}

void shell_sort(int v[], int n){
	
	int gap, i, j, temp;
	
	for(gap = n/2; gap > 0; gap /= 2){
		for(i = gap; i < n; i++){
			for(j = i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}

