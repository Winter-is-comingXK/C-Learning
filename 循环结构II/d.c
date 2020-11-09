#include<stdio.h>

int a(int n){
	n = (1+n)*n/2;
	return n;
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i = n; i>=1; --i){
		int m, sum=0;
		scanf("%d", &m);
		for (int b = m; b>=1; --b){
			sum += a(b);
		}
		printf("%d\n", sum);
	}

}
