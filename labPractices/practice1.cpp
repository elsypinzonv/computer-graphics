/*Write a code to print a Mexican Flag in FullHD in PPM plain*/
#include<stdio.h>

int main(){
	printf("P3\n");
	printf("1920 1080\n");
	printf("255\n");
	for(int j=0; j<1080; j++){
		for(int i=0; i<640; i++){
			printf("0 255 0 ");
		}
		for(int i=0; i<640; i++){
			if(j>360 && j<720 && i>10 && i<630){
				printf("68 0 0 ");	
			}else printf("255 255 255 ");
		}
		for(int i=0; i<640; i++){
			printf("255 0 0 ");
		}
		printf("\n");
	}
	return 0;
}
