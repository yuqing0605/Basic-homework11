//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x,y,z,tmp;
	printf("請輸入三組數字x,y,z\n");
	scanf("%d%d%d",&x,&y,&z);

	int array[3]={x,y,z};
	for(int i=0;i<2;i++)
		for(int j=i+1;j<3;j++){
			if(array[j]>array[i]){
				tmp=array[i];
				array[i]=array[j];
				array[j]=tmp;
			}
		}

	for(int i=2;i>=0;i--){
		printf("%d",array[i]);
		printf(" ");
	}
}
