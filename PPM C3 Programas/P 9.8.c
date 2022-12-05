#include <stdio.h>
/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */
typedef struct /* Declaración de la estructura alumno. */
{
int matricula;
char nombre[20];
int carrera;
float promedio;
}alumno;
void escribe(FILE *); /* Prototipo de función. */
void main(void)
{
FILE *ar;
if ((ar = fopen ("ad1.dat", "w")) != NULL)
escribe(ar);
else
printf("\nEl archivo no se puede abrir");
fclose(ar);
}
void escribe(FILE *ap)
/* Esta función sirve para leer los datos de los alumnos utilizando una
➥estructura tipo alumno, que se almacenará posteriormente en un archivo. */
{
alumno alu;
int i = 0, r;
printf("\n¿Desea ingresar información sobre alumnos? (Sí-1 No-0): ");
scanf("%d", &r);
while (r)
{
i++;
printf("Matrícula del alumno %d: ", i);
scanf("%d", &alu.matricula);
printf("Nombre del alumno %d: ", i);
fflush(stdin);
gets(alu.nombre);
printf("Carrera del alumno %d: ", i);
scanf("%d", &alu.carrera);
printf("Promedio del alumno %d: ", i);
scanf("%f", &alu.promedio);
fwrite(&alu, sizeof(alumno), 1, ap);
/* Observa que la función fwrite tiene cuatro argumentos. El primero se
➥utiliza para indicar la variable tipo estructura que se desea almacenar; el
➥segundo muestra el tamaño de esa variable en términos de bytes; el tercero
➥señala el número de variables que se leerán o almacenarán en el dispositivo
➥de almacenamiento secundario, y el último representa el apuntador al inicio de
➥la estructura FILE. */
printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): ");
scanf("%d", &r);
}
}
