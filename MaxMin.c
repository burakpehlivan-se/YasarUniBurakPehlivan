#include <stdio.h>

int min(int a,int b,int c,int d) {
    if (a < b && a < c && a < d) {
        printf("%d en küçüktür.", a);
        return a;
    } else if (b < a && b < c && b < d) {
        printf("%d en küçüktür.", b);
        return b;
    } else if (c < a && c < b && c < d) {
        printf("%d en küçüktür", c);
        return c;
    } else if (d < a && d < b && d < c) {
        printf("%d en küçüktür.", d);
        return d;
    }
    }
        int max(int a, int b , int c, int d){
        if(a>b && a>c && a>d)
        {
            printf("%d en büyüktür.", a);
            return a;
        }
        else if(b>a && b>c && b>d)
        {
            printf("%d en büyüktür.",b);
            return b;
        }
        else if(c>a && c>b && c>d)
        {
            printf("%d en büyüktür",c);
            return c;
        }
        else if(d>a && d>b && d>c )
        {
            printf("%d en büyüktür.",d);
            return d;
        }
    }


int main()
{
    int s1;
    int s2;
    int s3;
    int s4;
    printf("4 sayi giriniz");
    scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
    printf("sayılar = %d%d%d%d",s1,s2,s3,s4);
    min(s1,s2,s3,s4);
    max(s1,s2,s3,s4);
    return 0;

}
