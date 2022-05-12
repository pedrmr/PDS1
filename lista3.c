#include<stdio.h>

//1
float max(float a, float b, float c);
float min(float a, float b, float c);
//2
void par(int x);
void dentro(float x, float y, float z);
void fora(float x, float y, float z);
int divisivel(int x, int y);
//3
void bissexto(int x);

void main()
{
    /*
    EX1
    float a = 0, b =0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    printf("MAX = %.2f\n", max(a,b,c));
    printf("MIN = %.2f\n", min(a,b,c));
    EX2
    int x = 0;
    scanf("%d", &x);
    par(x);
    float a = 0, b =0, c = 0;
    printf("Digite três valores a,b,c\n");
    scanf("%f %f %f", &a, &b, &c);
    dentro(a,b,c);
    fora(a,b,c);
    EX3
    int x = 0;
    scanf("%d", &x);
    bissexto(x);
    */
}

float max(float a, float b, float c)
{
    if(b >= c && b >= a)
    {
       return b;
    }
    else if(a >= c && a >= b)
    {
        return a;
    }
    else
    {
        return c;
    }
}

float min(float a, float b, float c)
{
    if(b <= c && b <= a)
    {
       return b;
    }
    else if(a <= c && a <= b)
    {
        return a;
    }
    else
    {
        return c;
    }
}

void par(int x)
{
    if(x % 2 == 0)
    {
        printf("PAR\n");
    }
    else
    {
        printf("ÍMPAR\n");
    }
}

void dentro(float x, float y, float z)
{
    if(x <= z && x >= y)
    {
        printf("DENTRO\n");
    }
}

void fora(float x, float y, float z)
{
    if(x >= z || x <= y)
    {
        printf("FORA\n");
    }
}

int divisivel(int x, int y)
{
    if(x % y == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void bissexto(int x)
{
    if(divisivel(x,400) || (divisivel(x,4) && !divisivel(x,100)))
    {
        printf("BISSEXTO\n");
    }
    else
    {
        printf("NÃO É BISSEXTO\n");
    }
}
