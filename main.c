#include <stdio.h>
#include <string.h>
#include "sorting.h"
#include "piratas.h"

int main(){
    Pirate pirates[1000] = {
	{"Luffy", 3000000000LL, 19, "Mugiwara"},
        {"Law",   3000000000LL, 26, "Heart"},
        {"Kid",   3000000000LL, 23, "Kid"},
        {"Zoro",  1111000000LL, 21, "Mugiwara"},
        {"Sanji", 1032000000LL, 21, "Mugiwara"},
        {"Nami",   366000000LL, 20, "Mugiwara"}
    };
    int n = 6;

    insertionSort(
        pirates,
        n,
        sizeof(Pirate),
        comparePirates
    );

    for(int i = 0; i < n; i++){

        printf("%s %lld %d %s\n",
               pirates[i].name,
               pirates[i].bounty,
               pirates[i].age,
               pirates[i].crew);
    }

    return 0;
}
