#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main(){
clock_t start = clock();
int i;
double a[6],w[6],sum=0,x,xupper=1.0,xlower=0;		//a=xi

a[0]=0.9324695142031520;
a[1]=0.6612093864662645;
a[2]=0.2386191860831969;
a[3]=-0.2386191860831969;
a[4]=-0.6612093864662645;
a[5]=-0.9324695142031520;

w[0]=0.1713244923791703;
w[1]=0.3607615730481386;
w[2]=0.4679139345726910;
w[3]=0.4679139345726910;
w[4]=0.3607615730481386;
w[5]=0.1713244923791703;


for(i=0;i<=5;i++){
	sum += (xupper-xlower)/2*w[i]*4/(1+pow(a[i],2));
	}

clock_t end = clock();
printf("ans=%.17lf\ttime=%lf\n",sum,(double)(end-start)/CLOCKS_PER_SEC);
}
