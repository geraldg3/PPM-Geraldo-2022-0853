#include <stdio.h>
/* Producto de vectores.
El programa calcula el producto de dos vectores y almacena el resultado
➥en otro arreglo unidimensional. */
const int MAX = 10; /* Se define una constante para el tamaño de los
➥arreglos. */
void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T); /* Prototipos de funciones. */
void Producto(int *X, int *Y, int *Z, int T); /* Observa que en los
➥parámetros, para indicar que lo que se recibe es un arreglo, se puede escribir
➥VEC[] o *VEC. */
void main(void)
{
int VE1[MAX], VE2[MAX], VE3[MAX];
/* Se declaran tres arreglos de tipo entero de 10 elementos. */
Lectura(VE1, MAX);
/* Se llama a la función Lectura. Observa que el paso del arreglo a la función
➥es por referencia. Sólo se debe incluir el nombre del arreglo. */
Lectura(VE2, MAX);
Producto(VE1, VE2, VE3, MAX);
/* Se llama a la función Producto. Se pasan los nombres de los tres arreglos. */
printf("\nProducto de los Vectores");
Imprime(VE3, MAX);
}
void Lectura(int VEC[], int T)
/* La función Lectura se utiliza para leer un arreglo unidimensional de T
➥elementos de tipo entero. */
{
int I;
printf("\n");
for (I=0; I<T; I++)
{
printf("Ingrese el elemento %d: ", I+1);
scanf("%d", &VEC[I]);
}
}

void Imprime(int VEC[], int T)
/* La función Imprime se utiliza para imprimir un arreglo unidimensional de T
➥elementos de tipo entero. */
{int I;

for (I=0; I<T; I++)
printf("\nVEC[%d]: %d", I+1, VEC[I]);
}




void Producto(int *X, int *Y, int *Z, int T)
/* Esta función se utiliza para calcular el producto de dos arreglos
➥unidimensionales de T elementos de tipo entero. */
{
int I;
for(I=0; I<T; I++)
Z[I] = X[I] * Y[I];
}