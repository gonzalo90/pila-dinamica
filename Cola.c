#include <stdio.h>
#include <stdlib.h>

typedef struct s_nodo
{
  t_dato dato;
  struct s_nodo *sig;
}t_nodo;

typedef struct
{
  t_nodo *pri;
  t_nodo *ult;
}t_cola;

void crearCola(t_cola *);
int ponerEnCola(t_cola *, t_dato *);
int quitarDeCola(t_cola *, t_dato *);
void vaciarCola(t_cola *);
int colaVacia(t_cola *);
int colaLlena(t_cola *);


