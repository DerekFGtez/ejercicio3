#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#define ANCHO 40
#define ALTO 20
#define ARRIBA 0
#define ABAJO 1
#define IZQUIERDA 2
#define DERECHA 3
#define MAX_LONGITUD[100]

int tablero[20][40];
struct serpiente
{
int serpiente[100]
void direccion()
};
 
typedef struct {
    int x;
    int y;
} Punto;

typedef struct {
    Punto posicion[ANCHO*ALTO];
    int longitud;
    
} Serpiente;

void inicializarSerpiente(Serpiente *serpiente);



//Variables globales del juego 
; 
int punto;
int puntaje = 0;
int posicionx = 1;
int posiciony = 1;



