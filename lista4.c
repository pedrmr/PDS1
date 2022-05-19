//Recursão
#include<stdio.h>

int fat(int n);
int mdc(int a, int b);
int fib(int n);
int primo(int x);
int form(int n);
int mmc(int a, int b);
float asqrt(float n);
int aexp(int k, int n);
int mdc3(int a, int b, int c);
int div(int a, int b);
int decrescente(int x);
int crescente(int x);
int dig(int n, int s);
int res(int a, int b, int resto);

void main()
{
    int  a = 0, b = 0, c = 0, n = 0, x = 0, k = 0;
    float p = 0;
    /*
    printf("Calcule o fatorial:");
    scanf("%d", &n);
    printf("%d! = %d\n",n,fat(n));

    printf("Calcule o MDC:");
    scanf("%d %d", &a, &b);
    printf("MDC(%d,%d) = %d\n",a,b,mdc(a,b));

    printf("Calcule o n-ésimo termo de Fibonacci:");
    scanf("%d", &n);
    printf("Termo-%d = %d\n",n,fib(n));

    printf("Número primo:");
    scanf("%d", &x);  
    if(primo(x))
    {
        printf("%d é primo\n", x);
    } 
    else
    {
        printf("%d não é primo\n", x);
    }
    
    printf("Inteiros menores que x:");
    scanf("%d", &n);  
    decrescente(n);

    printf("Inteiros maiores que 0 e menores ou iguais a x: ");
    scanf("%d", &n);  
    crescente(n);
    
    printf("Calcule o somatório i*i de n termos:");
    scanf("%d", &n);  
    printf("Somatório i*i de 1 até %d = %d\n", n, form(n));

    printf("Calcule o MMC:");
    scanf("%d %d", &a, &b);
    printf("MMC(%d,%d) = %d\n",a,b,mmc(a,b));

    printf("Calcule a divisão:");
    scanf("%d %d", &a, &b);  
    printf("Resultado inteiro da divisão entre %d e %d = %d\n",a,b,div(a,b));

    printf("Calcule a raiz: quadrada de n:");
    scanf("%f", &p);  
    printf("Raiz de %.2f = %.4f\n", p, asqrt(p));

    printf("Calcule a exponenciação. Digite primeiramente a base: ");
    scanf("%d %d", &k, &n);  
    printf("pow(%d,%d) = %d\n", k, n, aexp(k,n));
    

    printf("Calcule o MDC entre três inteiros:");
    scanf("%d %d %d", &a, &b, &c);
    printf("MDC(%d,%d,%d) = %d\n",a,b,c,mdc3(a,b,c));
    */

    scanf("%d %d", &a, &b);
    printf("RESTO DA DIVISÃO ENTRE %d e %d = %d\n",a, b, res(a,b,0));

}

int fat(int n)// retorna o valor do fatorial de n.
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fat(n-1);
    }
}

int mdc(int a, int b)//retorna o máximo divisor comum entre a e b
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return mdc(b, a % b);
    }
}

int fib(int n)//retorna o n-ésimo termo da série de Fibonacc
{
    if(n <= 2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int primo(int x)//predicado que testa se um número x é primo
{   
    static int divisor = 2;

   if(x == 0 || x == 1)
   {
       return 0;
   }
   else if(x == divisor)
   {
       return 1;
   }
   else if(x % divisor == 0)
   {
       return 0;
   }
   else
   {
       divisor++;
       return primo(x);
   }
}

int form(int n)//retorna o valor do somatório de i*i, com i variando de 1 até n.
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*n + form(n-1);
    }
}

int mmc(int a, int b)//retorna o menor múltiplo comum de a e b
{
    static int divider = 1;
    if(divider % a == 0 && divider % b == 0)
    {
        return divider;
    }
    else
    {
        divider++;
        
        return mmc(a,b);
    }
}

float asqrt(float n)//retorna a raiz quadrada de n (com precisão de 0.001).
{
    static float multiplier = 1.0;
    if(n == 1)
    {
        return 1;
    }
    else
    {
        if((multiplier * multiplier) == n ||((multiplier * multiplier) > n-0.0005 && (multiplier * multiplier) < n+0.0005) )
        {
            return multiplier;
        }
        else if((multiplier * multiplier) < n )
        {
            multiplier ++;
            return asqrt(n);
        }
        else
        {
            multiplier -= 0.001;
            return asqrt(n);
        }
    }
}

int aexp(int k, int n)//retorna k elevado a n
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return k;
    }
    else
    {
        return k * aexp(k,n-1);
    }
}

int mdc3(int a, int b, int c)//retorna o máximo divisor comum entre a, b e c.
{
    return mdc(c,mdc(a,b));
}

int div(int a, int b)//retorna o resultado da divisão inteira de a por b.
{
    static int multiplier = 1;
    if(b > a)
    {
        return 0;
    }
    else if(b * multiplier == a || b*(multiplier + 1) > a)
    {
        return multiplier;
    }
    else
    {
        multiplier ++;
        return div(a,b);
    }
}

int decrescente(int x)//procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
{
    if((x-1) == 0)
    {
        return 0;
    }
    else
    {
        printf("%d\n", x-1);
        return decrescente(x-1);
    }
}

int crescente(int x)//escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
{   
    static int i = 1;
    if(i == x)
    {
       return x;
    }
    else
    {
        printf("%d\n",i);
        i++;
        return crescente(x);
    }
}

int dig(int n, int s)//retorna a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6.
{
    if(n <= 9)
    {
        return s+n;
    }
    else
    {
        s += n%10;
        return dig(n/10,s);
    }
}

int res(int a, int b, int resto)//retorna o resto da divisão entre a e b.(Sem operador '%')
{
    if(((a/b)*b) + resto == a)
    {
        return resto;
    }
    else
    {
        return res(a,b,resto+1);
    }
}
