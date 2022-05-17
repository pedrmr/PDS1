#include<stdio.h>
#include<math.h>

int fat(int n);
int mdc(int a, int b);
int mdc3(int a, int b, int c);
int fib(int n);
int primo(int x);
void decrescente(int x);
int res(int a, int b);
int form(int n);
int mmc(int a, int b);
int div(int a, int b);
float asqrt(float n);
int dig(int n);
float aexp(float k, int n);
void crescente(int x);

void main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", dig(n));
}

int fat(int n) //retorna o valor do fatorial de n.
{
    int fat = 1;
    for(int i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

int mdc(int a, int b) //retorna o máximo divisor comum entre a e b.
{
    int smaller = 0;
    if( a <= b)
    {
        smaller = a;
    }
    else
    {
        smaller = b;
    }
    for(int i = smaller; i >= 2; i --)
    {
        if(a % i == 0 && b % i == 0)
        {
            return i;
            i = 0;
        }
    }
}

int mdc3(int a, int b, int c) //retorna o máximo divisor comum entre a, b e c.
{
    int smaller = 0, aux = 0, sum = 0, i = 0, j = 0;
    int order[3] = {a,b,c};

    for(i = 0; i < 2; i++)
    {
        if(order[i] > order[i+1])
        {
            aux = order[i+1];
            order[i+1] = order[i];
            order[i] = aux;
            i = -1;
        }
    }

    for(i = order[0]; i >= 2; i--)
    {
        for(j = 2; j >= 0; j--)
        {
            if(order[j] % i == 0)
            {
                sum++;
            }
            else
            {
                j = -1;
                sum = 0;
            }
        }

        if(sum == 3)
        {
            return i;
            i = 0;
        }   
    }    
}

int fib(int n)//retorna o n-ésimo termo da série de Fibonacci
{
    int vetor[n];
    vetor[0] = 1, vetor[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }
    return vetor[n-1];
}

int primo(int x)//predicado que testa se um número x é primo
{
    int prime = 1;
    for(int i = 2;i <= x/2; i++)
    {
        if(x % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}

void decrescente(int x)//procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0
{
    if( x < 0)
    {
        printf("INVÁLIDO\n");
    }
    else
    {
        for(int i = x-1; i > 0; i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int res(int a, int b)//retorna o resto da divisão entre a e b.
{
    return a - (b * (a/b));
}

int form(int n)//retorna o valor do somatório de i*i, com i variando de 1 até n
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + (i*i);
    }
    return sum;
}

int mmc(int a, int b)//retorna o menor múltiplo comum de a e b.
{
    int maior = 0, menor = 0, stop = 0, i = 1;
    if(a >= b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }
    do
    {
        if((maior*i) % menor == 0)
        {
            return (maior*i);
            stop = 1;
        } 
        else{
            i++;
        }
    }while(stop == 0);
}

int div(int a, int b)//retorna o resultado da divisão inteira de a por b.
{
    for(int i = 1; i <= a; i++)
    {
        if( a < b)
        {
            return 0;
        }
        else if(b*i <= a && b*(i+1) > a)
        {
            return i;
        }
    }
}

float asqrt(float n)//retorna a raiz quadrada de n (com precisão de 0.001).
{
    for(float i = 0; i <= n; i++)
    {
        if(i*i > n)
        {
            do
            {
                i -= 0.000001;
            }while (i*i > n || ((i*i) > n - 0.0005 && (i*i) < n + 0.0005 ));
            return i;
        }
    }
}

int dig(int n)//retorna a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6.
{
    int result = 0, i = 0, exp = 0, quociente = 0;
    do
    {
        do
        {
            if(pow(10,i) > n)
            {
                exp = i-1;
            }
            i++;

        } while (exp == 0);
    
        for(i = exp; i >= 0; i--)
        {
            result += n/(pow(10,i));
            quociente = n/(pow(10,i));
            n -= (quociente*(pow(10,i)));
        }

        i = 0;
        exp = 0;
        quociente = 0;
        n = result; //RENEW THE CICLE WITH 'result' AS 'n' VALUE
        result = 0;

    }while(n > 9);

    return n;

}

float aexp(float k, int n)//Retorna k n
{
    float result = 1;
    int p = 0;
    if(n < 0)
    {
        p = -1*n;
    }
    else
    {
        p = n;
    }
    for(int i = 1; i <= p; i++)
    {
        result *= k;
    }
    if(n >= 0)
    {
        return result;
    }
    else
    {
        return (1/result);
    }
}

void crescente(int x)//escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
{
    {
    if( x < 0)
    {
        printf("INVÁLIDO\n");
    }
    else
    {
        for(int i = 1; i <= x; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
}