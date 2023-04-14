#include <stdio.h>

void sumaproducto(int  n1,int n2,int *suma,int *producto)
{
    *suma=n1+n2;
    *producto=n1*n2;
}

int main()
{
    int suma;
    int producto;
    sumaproducto(n1 var1,n2 var2,&suma,&producto)
    printf("La suma es %d\n El producto es:%d\n",*suma,*producto);

    return 0;
}
