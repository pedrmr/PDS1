#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float la(float x, float y)
{
	return x+y;
}

float lb(float x, float y)
{
	return x/y;
}

float lc(float x)
{
	return pow(x,2);
}

float ld(float x, float y)
{
	return x*y;
}

float le(float x, float y, float z)
{
	return x*y-z;
}

float lf(float x, float y, float z)
{
	return x+y*z;
}

float lg(float x, float y, float z)
{
	return (x+y)*z;
}

float lh(float x)
{
	return sin(x);
}

float li(float x)
{
	return sqrt(x);
}

float lj(float x, float y, float z)
{
	return x+y+z;
}

float lk(float x, float y, float z)
{
	return x*y*z;
}

float ll(float x, float y, float z,float a)
{
	return (x+y+z)/a;
}


float lm(float x, float y, float z, float a)
{
	return (x+y)*(z-a);
}

float ln(float x, float y, float z, float a)
{
	return (x/y)+(z*a);
}

float lo(float x, float y)
{
	return sin(x)+cos(y);
}

float lp(float x, float y)
{
	return log(x)-log(y);
}

float lq(float x,float y, float z, float a)
{
	return log(x)+(log(y)*log(z)-cos(log(a)));
}

float lr(float x, float y, float z, float a)
{
	return (x+y)/z-(a+y);
}

float ls(float x, float y, float z, float a)
{
	return (cos(a)+sin(z))*(cos(y)-sin(x));
}

float media(float x, float y, float z)
{
	return (x+y+z)/3;
}

float mediapond(float x, float y, float z)
{
	return ((3*x)+(4*y)+(5*z))/(3+4+5);
}

float doisp(float x)
{
	return 2*3.141502*x;
}

float area(float x)
{
	return 3.141502*pow(x,2);
}

float areat(float x, float y)
{
	return x*y/2;
}

float hipotenusa(float x, float y)
{
	return sqrt(pow(x,2)+pow(y,2));
}

float delta(float x, float y, float z)
{
	return pow(y,2) - 4*x*z;
}

float raizmais(float x, float y, float z)
{
	float raiz = 0;
	raiz = ((-1)*y+sqrt(delta(x,y,z)))/(2*x);
	return raiz;
}

float raizmenos(float x, float y, float z)
{
	float raiz = 0;
	raiz = ((-1)*y-sqrt(delta(x,y,z)))/(2*x);
	return raiz;
}

void main()
{
	//EX1
	/*
	printf("%.1f\n",la(3,4));
	printf("%.2f\n",lb(7,4));
	printf("%.1f\n",lc(3));
	printf("%.2f\n",ld(5.3,2.1));
	printf("%.1f\n" ,le(2,5,2));
	printf("%.1f\n" ,lf(2,2,5));
	printf("%.1f\n" ,lg(2,5,3));
	printf("%.2f\n",lh(3.141502));
	printf("%.2f\n",li(5));
	printf("%.1f\n" ,lj(1,2,3));
	printf("%.1f\n" ,lk(1,2,3));
	printf("%.2f\n" ,ll(1,2,3,3));
	printf("%.1f\n" ,lm(2,4,3,1));
	printf("%.2f\n" ,ln(9,3,3,2));
	printf("%.2f\n",lo(4.5,3.7));
	printf("%.2f\n",lp(2.3,3.1));
	printf("%.2f\n",lq(7,7,7,7));
	printf("%.2f\n",lr(10.3,8.4,50.3,8.4));
	printf("%.2f\n",ls(0.8,0.8,0.8,0.8));
	*/

	//EX2
	/*
	float a,b,c,d;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("%.1f\n",la(a,b));
	printf("%.2f\n",lb(a,c));
	printf("%.1f\n",lc(a));
	printf("%.2f\n",ld(b,c));
	printf("%.1f\n" ,le(a,b,c));
	printf("%.1f\n" ,lf(a,b,c));
	printf("%.1f\n" ,lg(a,b,c));
	printf("%.1f\n",lh(a));
	printf("%.1f\n",li(b));
	printf("%.1f\n" ,lj(a,b,c));
	printf("%.1f\n" ,lk(a,b,c));
	printf("%.2f\n" ,ll(a,b,c,d));
	printf("%.1f\n" ,lm(a,b,c,d));
	printf("%.2f\n" ,ln(a,b,c,d));
	printf("%.2f\n",lo(b,c));
	printf("%.2f\n",lp(a,c));
	printf("%.2f\n",lq(a,b,d,c));
	printf("%.2f\n",lr(b,a,c,d));
	printf("%.2f\n",ls(d,c,b,a));
	*/

	//EX3
	float a = 0, b = 0, c = 0;
	scanf("%f%f%f",&a,&b,&c);
	printf("%.2f\n",media(a,b,c));
	printf("%.2f\n",mediapond(a,b,c));
	printf("%.2f\n",doisp(a));
	printf("%.2f\n",area(a));
	printf("%.2f\n",areat(b,c));
	printf("%.2f\n",hipotenusa(b,c));
	if(delta(a,b,c) < 0)
	{
		printf("NÃO HÁ RAÍZES REAIS\n");
	}
	else if(delta(a,b,c) > 0)
	{
		printf("RAÍZES: %.2f %.2f\n",raizmais(a,b,c), raizmenos(a,b,c));
	}
	else
	{
		printf("RAÍZ: %.2f\n",raizmais(a,b,c));
	}

}