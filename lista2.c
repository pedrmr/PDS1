#include<stdio.h>
#include<math.h>
#define PI 3.1415

void lista();
int menu(int opcao);
float media(float a,float b,float c);
float mediaPonderada(float a,float b,float c);
float perimetro(float r);
float areaCirculo(float r);
float areaTriangulo(float b,float c);
float areaCaixa(float a, float b,float c);
float volumeCaixa(float a, float b,float c);
float areaCilindro(float r, float h);
float volumeCilindro(float r, float h);
float hipotenusa(float b, float c);
float delta(float a, float b, float c);
float raizmenos(float a,float b, float c);
float raizmais(float a,float b, float c);

void main()
{
    float a = 0, b = 0, c = 0, r = 0, h = 0;

    lista();

    int opcao = 0;
    opcao = menu(opcao);

    if(opcao == 1)
    {
        printf("DIGITE TRÊS VALORES REAIS\n");
        scanf("%f %f %f",&a, &b, &c);
        printf("\nMÉDIA = %.2f\n",media(a,b,c));
    }
    else if(opcao == 2)
    {
        printf("DIGITE TRÊS VALORES REAIS\n");
        scanf("%f %f %f",&a, &b, &c);
        printf("\nMÉDIA PONDERADA = %.2f\n",mediaPonderada(a,b,c));
    }
    else if(opcao == 3)
    {
        printf("DIGITE O RAIO\n");
        scanf("%f",&r);
        printf("\nPERÍMETRO = %.4f\n",perimetro(r));
    }
    else if(opcao == 4)
    {
        printf("DIGITE O RAIO\n");
        scanf("%f",&r);
        printf("\nÁREA DO CÍRCULO = %.4f\n",areaCirculo(r));
    }
    else if(opcao == 5)
    {
        printf("DIGITE A BASE E A ALTURA DO TRIÂNGULO\n");
        scanf("%f %f",&b,&c);
        printf("\nÁREA DO TRIÂNGULO = %.2f\n",areaTriangulo(b,c));
    }
    else if(opcao == 6)
    {
        printf("DIGITE AS MEDIDAS DA CAIXA\n");
        scanf("%f %f %f",&a,&b,&c);
        printf("\nÁREA DA CAIXA = %.2f\n",areaCaixa(a,b,c));
    }
    else if(opcao == 7)
    {
        printf("DIGITE AS MEDIDAS DA CAIXA\n");
        scanf("%f %f %f",&a,&b,&c);
        printf("\nVOLUME DA CAIXA = %.2f\n",volumeCaixa(a,b,c));
    }
    else if(opcao == 8)
    {
        printf("DIGITE O RAIO E A ALTURA DO CILINDRO, NESSA ORDEM\n");
        scanf("%f %f",&r,&h);
        printf("\nAŔEA DO CILINDRO = %.2f\n",areaCilindro(r,h));
    }
    else if(opcao == 9)
    {
        printf("DIGITE O RAIO E A ALTURA DO CILINDRO, NESSA ORDEM\n");
        scanf("%f %f",&r,&h);
        printf("\nVOLUME DO CILINDRO = %.2f\n",volumeCilindro(r,h));
    }
    else if(opcao == 10)
    {
        printf("DIGITE OS CATETOS DE UM TRIÂNGULO RETÂNGULO\n");
        scanf("%f %f",&b,&c);
        printf("\nHIPOTENUSA = %.2f\n",hipotenusa(b,c));
    }
    else
    {
        printf("SENDO ax2 + bx + c, DIGITE a, b E c\n");
        scanf("%f %f %f",&a,&b,&c);
        if(delta(a,b,c) < 0)
        {
            printf("\nNÃO EXISTEM RAÍZES POSITIVAS\n");
        }
        else if(raizmenos(a,b,c) > 0 && raizmais(a,b,c) > 0)
        {
            printf("\nRAIZES POSITIVAS = %.2f %.2f\n", raizmenos(a,b,c), raizmais(a,b,c));
        }
        else if(raizmenos(a,b,c) > 0)
        {
            printf("\nRAIZ POSITIVA = %.2f\n", raizmenos(a,b,c));
        }
        else
        {
            printf("\nRAIZ POSITIVA = %.2f\n", raizmais(a,b,c));
        }
        
    }
}

void lista()
{   
    printf("1) MEDIA\n");
    printf("2) MEDIA PONDERADA\n");
    printf("3) PERIMETRO\n");
    printf("4) AREA DO CIRCULO\n");
    printf("5) AREA DO TRIANGULO\n");
    printf("6) AREA DA CAIXA\n");
    printf("7) VOLUME DA CAIXA\n");
    printf("8) AREA DO CILINDRO\n");
    printf("9) VOLUME DO CILINDRO\n");
    printf("10) HIPOTENUSA\n");
    printf("11) RAIZ\n\n");
}

int menu(int opcao)
{
    do
    {
    printf("\nESCOLHA UMA DAS OPÇÕES ACIMA:\n");
    scanf("%d",&opcao);
    }while(opcao < 1 || opcao > 11);
    return opcao;
}

float media(float a,float b,float c)
{
    return (a+b+c)/3;
}

float mediaPonderada(float a,float b,float c)
{
    return (3*a+4*b+5*c)/(3+4+5);
}

float perimetro(float r)
{
    return 2*PI*r;
}

float areaCirculo(float r)
{
    return PI*r*r;
}

float areaTriangulo(float b,float c)
{
   return b*c/2; 
}

float areaCaixa(float a, float b,float c)
{
   return 2*(a*b) + 2*(c*b) + 2*(a*c);
}

float volumeCaixa(float a, float b,float c)
{
   return a*b*c;
}

float areaCilindro(float r, float h)
{
    return (2*PI*r*h) + (2*PI*r*r);
}

float volumeCilindro(float r, float h)
{
    return PI*r*r*h;
}

float hipotenusa(float b, float c)
{
    return sqrt((b*b)+(c*c));
}

float delta(float a, float b, float c)
{
    return (pow(b,2)-(4*a*c));
}

float raizmenos(float a,float b, float c)
{
    return ((-1*b) - sqrt(delta(a,b,c)))/(2*a);
}

float raizmais(float a,float b, float c)
{
    return ((-1*b) + sqrt(delta(a,b,c)))/(2*a);
}

