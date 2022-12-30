#include<stdio.h>
int main(){
	int principle, period;
	float rate, si;
	principle = 1000;
	period = 3;
	rate = 8.5;
	si = principle * period * rate / 100;
	printf("%.2f",si);
	return 0;
}
