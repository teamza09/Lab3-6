#include <stdio.h>
int main(void)
{ 
	float r,h,Ans;
	printf("Enter R : ");
  	scanf("%f",&r);		 
  	printf("Enter H : ");
  	scanf("%f",&h);	
	Ans = (2*3.14*r)*h+2*(3.14*r*r);	 
  	printf("Area of a Cylinder is %0.2f",Ans);
    return 0;
}
