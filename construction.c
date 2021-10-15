#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct pokestat {char pokemon[40]; int basehp; int baseattack;};


void printpokestat(struct pokestat *p) {

  printf("Pokemon: %s   \tBase Hp: %d\tBase Attack: %d\n", p->pokemon, p->basehp, p->baseattack);

}


struct pokestat * structheap(char *c, int i, int a) {

  struct pokestat *p = malloc(sizeof(struct pokestat));
  strcpy(p->pokemon, c);
  p->basehp = i;
  p->baseattack = a;

  return p;

}


int main() {
  //setting up random numbers
  srand( time(NULL) );

  int x = rand() % 1000;
  int y = rand() % 1000;
  struct pokestat *a = structheap("Pikachu", x,y);
  printpokestat(a);

  x = rand() % 1000;
  y = rand() % 1000;
  a = structheap("Zekrom", x,y);
  printpokestat(a);
  
  x = rand() % 1000;
  y = rand() % 1000;
  struct pokestat *b = structheap("Snivy", x,y);
  printpokestat(b);

  return 0;
}
