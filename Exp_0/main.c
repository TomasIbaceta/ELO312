#include <stdio.h>

//variables globales
int i1= 0, i2 = 1, i3 = 2;
int Arr[] = {0, 1, 2, 3, 4};
const int Brr[] = { 3, 2, 1, 0};

char ch = 'o';
char *p1 = "hola";      //puntero a variable de tipo char
char p2[]= " mundo";

long int li1 = 65534L;
long int li2 = -65534L;

double cte = 3/5;               //¿Qué valor toma esta variable?

//una estructura de datos que se llama header
struct header{
  struct header *h;
  int  modo;
  float dato;
};

//¿qué valor toma la variable dato después de esta definición?
struct header cabecera = {&cabecera, 25, 3.0/5.0};

void main(void)
{
  /*variables locales*/
  int j1, j2 = 0, j3;
  char *p3 = p2;
  char *p4 = &ch;
  *p4 += 1;     //¿que ocurre aqui?
  double temp;
  
  j1 = i1 + i2 + i3 + j2;
  // dos maneras para referenciar a un elemento de un arreglo
  j2 = Arr[0] + (*(Brr + 1)) - j1;
  
  cte += 1/2;   //¿que ocurre aqui?
  
  //asi se accede a los elementos internos de la estructura
  cabecera.modo = j1 + 3;
  cabecera.dato = cte - 0.1;
  
  *(p1 + 3) = ch;
  *(p3+4)='B';
  
  temp = li1 + li2; //¿donde se almacena temp?
  cte += temp;
  
  j3 = sizeof(p2); //tamaño de un arreglo
  j3 = sizeof(p3); //tamaño de un puntero
  
  
  // Imprimir tamaños de almacenamiento
  printf("size for char : %d bytes \n", sizeof(char));
  printf("size for int : %d bytes \n", sizeof(int));
  printf("size for long int: %d bytes \n", sizeof(long int));
  printf("size for float : %d bytes \n", sizeof(float));
  printf("size for double : %d bytes \n", sizeof(double));
  printf("size for long double : %d bytes \n", sizeof(long double));
  
  printf("size for pointer : %d bytes \n", sizeof(p1));
  printf("size for struct header : %d bytes \n", sizeof(struct header));
  
  return;
}