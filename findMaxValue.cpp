#include "implementations.hpp"
// extraido de https://www.ime.usp.br/~pf/mac0122-2002/aulas/recursion.html
// A função maxr4 devolve um elemento máximo do vetor v[p..r]. 
// Ela supõe que p <= r. 
int maxr4 (int vector[], int p, int r) 
{   
    int u, v; 

    int m = (p + r)/2; 

    if (p == r) return vector[p];

    u = maxr4(vector, p, m);
    v = maxr4(vector, m+1, r);

    return (u>v) ?u:v;
}