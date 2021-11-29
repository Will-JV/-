#include<stdio.h>
#include<stdlib.h>

double func(double *a,double *b,double x,int n){
	double y=0 ; /*a=x,b=y*/
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]<=x && x<=a[i+1]){
			y = (b[i+1]-b[i])/(a[i+1]-a[i])*(x-a[i])+b[i];
			return y;}
		}
	if(y==0){return y;}
}

int main(){                           /*別のデータをdata.txtに入れた後確認できた*/
	double temp[1000],x,y;  /*temp=temporary list*/
	int n=0;	              /*n=number of data*/		  
	FILE *fp;
	
	fp = fopen("data.txt","r");
	
	while(fscanf(fp,"%lf",&(temp[n])) != EOF){
		n = n + 1;
		}
	n = n/2;
	fclose(fp);

	double a[n],b[n];	      /*a=x,b=y*/
	
	for(i=0;i<n;i++){a[i]=temp[i];}
	for(i=n;i<2*n;i++){b[i-n]=temp[i];}
		
	printf("Input X-value: ");
	scanf("%lf",&x);
	
	y = func(a,b,x,n);
	
	if(y!=0){printf("x = %lf, y = %lf\n",x,y);}
	else{printf("Not in range of data\n");}	
}
	
