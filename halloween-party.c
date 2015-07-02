#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int middle(long long int num){
	long long int midpoint;
	midpoint = num/2;
	return midpoint;
}
long long int cuts(){
	long long int cut_times,median,other_half;
	scanf("%lld", &cut_times);
	median = middle(cut_times);
	other_half = cut_times - median;
	return median*other_half;
}
int main(void) {
	long long int t,i,pieces;
	scanf("%lld", &t);
	for (i = 0; i < t; i ++){
		pieces = cuts();
		printf("%lld\n", pieces);
	}
	return 0;
}