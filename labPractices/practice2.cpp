/*Generate a Random FULL HD Image*/

#include <stdlib.h>
#include <stdio.h>

int getRandomNumber(){
  return rand() % 256;
}

int main(){
	srand(time(NULL));
	printf("P3\n");
	printf("1920 1080\n");
	printf("255\n");
	for(int j=0; j<1080; j++){
		for(int i=0; i<1920; i++){
			printf("%d\n ", getRandomNumber());
			printf("%d\n ", getRandomNumber());
			printf("%d\n ", getRandomNumber());
		}
		printf("\n");
	}
	return 0;
}
