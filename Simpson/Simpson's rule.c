#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 10000

int main(){

double h,a=0,b=1,x,sum1=0,sum2=0,final;
int j;

h = (b-a)/(2*n);

final = 4*sqrt(1-pow(a,2)) + 4*sqrt(1-pow(b,2));

for(j=1;j<=n-1;j++){
	sum1 += 4*sqrt(1-pow(a+2*j*h,2));	
	}
sum1 *= 2;

for(j=1;j<=n;j++){
	sum2 += 4*sqrt(1-pow(a+(2*j-1)*h,2));
	}
sum2 *= 4;

final += sum1 + sum2;
final *= (h/3);

printf("%.17lf\n",final);

system("cp test.c /mnt/c/Users/jwill/OneDrive/Desktop/");
}
