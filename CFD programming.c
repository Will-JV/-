#include<stdio.h>
#include<math.h>
#define range 100								//range of x where graph is to be plotted


int main(){																			//CFD programming
double x, t=0, dx=0.1, dt=0.01, c=2.5, Un[(int)(range/dx)], U[(int)(range/dx)], courant=c*dt/dx;       //List size can be determined by range/dx
int i, counter = 0, X=1;											//X is used to manipulate ASCII value of 'graphX.dat'
char filename[] = "graphX.dat";

filename[5] = X + '0';												//Changing ('0')'s ASCII value of 48 to 49 to make filename 'graph1.dat'
FILE *f;
f = fopen(filename,"w+");													
for(x=0;x<range;x+=0.1){											//Initializing function U
	if(x>=1 && x<=3){
	U[counter] = -(x-1)*(x-3);
	fprintf(f,"%lf\t%lf\n",x,U[counter]);
	counter++;
	}
	else{
	U[counter] = 0;
	fprintf(f,"%lf\t%lf\n",x,U[counter]);
	counter++;
	}
}
fclose(f);
Un[0] = 0;											//U(0,t) = 0

while(t<=8.0){
counter=1;
t+=dt;												//t here indicates at which time frame it's in
if(t==0.1||t==1.0||t==2.0||t==4.0||t==8.0){					//If condition is met, write to data file
	X++;
	filename[5] = X + '0';
	FILE *f;
	f = fopen(filename,"w+");
	for(x=0;x<range;x+=0.1){
		Un[counter] = U[counter] - courant*(U[counter]-U[counter-1]);
		fprintf(f,"%lf\t%lf\n",x,Un[counter]);
		counter++;
		}
	fclose(f);
	}

else{
	for(x=0;x<range;x+=0.1){
		Un[counter] = U[counter] - courant*(U[counter]-U[counter-1]);
		counter++;
		}	
	}
for(i=0;i<(int)(range/dx);i++){						//Copying array for the next calculation
	U[i] = Un[i];	
	}
}

}
