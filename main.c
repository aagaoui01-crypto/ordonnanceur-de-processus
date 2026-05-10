#include <stdio.h>
#include <stdlib.h>
#include "politiques.h"

int main() {
    // Simuler la lecture du fichier de config [cite: 8, 9]
    Processus procs[] = {{"P1", 0, 5}, {"P2", 1, 3}, {"P3", 2, 8}};
    int n = 3;

    int choix;
    printf("Menu Ordonnanceur:\n1. FIFO\n2. SJF\n3. Round-Robin\nChoix: ");
    if(scanf("%d", &choix) != 1) return 1;

    switch(choix) {
        case 1: fifo(procs, n); break;
        case 2: sjf(procs, n); break;
        case 3: rr(procs, n, 2); break;
        default: fifo(procs, n); // FIFO par defaut [cite: 17]
    }
    return 0;
}
