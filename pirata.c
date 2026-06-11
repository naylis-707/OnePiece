#include "piratas.h"
#include <string.h>

int comparePirates(const void* x, const void* y){

    Pirate* a = (Pirate*)x;
    Pirate* b = (Pirate*)y;

    // mayor recompensa primero
    if(a->bounty > b->bounty)
        return -1;

    if(a->bounty < b->bounty)
        return 1;

    // menor edad primero
    if(a->age < b->age)
        return -1;

    if(a->age > b->age)
        return 1;

    // nombre alfabético
    int cmp = strcmp(a->name, b->name);

    if(cmp != 0)
        return cmp;

    // tripulación alfabética
    return strcmp(a->crew, b->crew);
}
