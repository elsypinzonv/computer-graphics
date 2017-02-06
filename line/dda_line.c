
#include<stdio.h>
#include<math.h>

#define MAX_X 1920
#define MAX_Y 1080
#define MAX(a,b) ((a) > (b) ? a : b)

int raster[MAX_X][MAX_Y];


void printRaster(int maxX, int maxY){
	for(int y=maxY; y>=0; y--){
		for(int x=0; x<=maxX; x++){
			if(raster[x][y]==0){
				printf("'");
			} else printf("*");
		} printf("\n");
	}
}

int main(){
	
	int x0,y0, x1,y1;
	
	printf("Write the first point\n");
	scanf("%d %d", &x0, &y0);
	printf("Write the second point\n");
	scanf("%d %d", &x1, &y1);

	double dy,dx,m;
	dy=y0-y1;
	dx= x0-x1;
	//validate
	m=(dy/dx);

	double preY;
	int y;
	preY=y0;
	for(int x=x0; x<=x1; x++){
		y = round(preY);
		raster[x][y]=1;
		preY+=m;
		printf("( %d , %d )\n",x,y);
	}

	printRaster(MAX(x0,x1), MAX(y0,y1));

}
