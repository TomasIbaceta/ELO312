#include <stdio.h>

/*variables globales*/
int x;
unsigned int y;

/*declaracion de funcion*/
void prt(int);

void main(void){
  x = 15;
  prt(x);       //apretar "step over"
  x = x << 2;
  prt(x);       //apretar "step into"
  x = x >> 2;
  prt(x);
  printf("=========================== \n");
  
  y = 15;
  prt(y);
  y = y << 2;
  prt(y);
  y = y >> 2;
  prt(y);
  printf("=========================== \n");
  
  //¿Observan alguna diferencia en los resultados hasta el momento?
  x = -15;
  prt(x);
  x = x << 2;
  prt(x);
  x = x >> 2;
  prt(x);
  printf("=========================== \n");
  
  y = -15; //¿Que ocurre aqui?
  prt(y);
  y = y<<2;
  prt(y);
  y = y>>2;
  prt(y);
  printf("=========================== \n");
  
  return;
}

/* La definicion de la funcion prt()
   @brief imprime en la salida estandar la
          representacion binaria de un numero
          pasado como parametro
*/
void prt(int i){
  /*j es una variable local de prt()*/
  int j;
  for (j = 15; j >= 0; j--){
    /*esto se llama "ternary conditional operator" --> (a) ? (b) : (c)*/
    ((1<<j) & i) ? (putchar ('1')) : (putchar('0'));
  }
  putchar('\n');
  
  return;
}

