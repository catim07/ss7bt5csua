#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int min=a[0],max=a[0];
	for(int i=1;i<5;i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("so lon nhat la: %d\nso be nhat la: %d",max,min);
	return 0;
}
