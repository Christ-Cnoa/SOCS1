#include<stdio.h>

int main(){
//	char name [120];
//	scanf("%s", &name);

	int numA, numB, i;
	scanf("%d %d", &numA, &numB);
	for (i=0; i<numB; i++){
		printf("%d\n", numA);
		numA += 1;
	}
	
	return 0;
}
