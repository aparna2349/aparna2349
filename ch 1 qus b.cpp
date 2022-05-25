#include<stdio.h>
int main(){
	float km,m,cm,inch ,fit;
	printf ("enter the distance is kilometer:\n",& km);
	scanf("%f",& km);
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	fit= inch/12;
	printf("the distance in meter%f:\n",&m);
	printf("the distance in cm %f:\n",&cm);
	printf("the distnce in in%f:\n",&inch);
	printf("the distance in fit%f:\n",&fit);
	
	return 0;
	
}
