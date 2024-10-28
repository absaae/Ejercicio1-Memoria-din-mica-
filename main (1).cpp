#include <iostream>
using namespace std;

struct persona {
    int n;
    char k;
    int *p;
    persona *otra;
};

int main() {
    // Número de personas que tenemos
    const int num_personas = 4;
    
    // Se asigna la memoria para el arreglo
    persona* personas = new persona[num_personas];

    int m = 20;
    int n = 1;
    int o = 3;
    int q = 78;

    personas[0].n = 10;
    personas[0].k = '&';
    personas[0].p = &m;
    personas[0].otra = &personas[1];

    personas[1].n = 1;
    personas[1].k = 'c';
    personas[1].p = &n;
    personas[1].otra = &personas[2];
    
    personas[2].n = 2;
    personas[2].k = 'h';
    personas[2].p = &o;
    personas[2].otra = &personas[3];
    
    personas[3].n = 9;
    personas[3].k = '%';
    personas[3].p = &q;
    personas[3].otra = nullptr; 

   
    persona* per = &personas[0];
    while (per != nullptr) {
        cout << "n: " << per->n << ", k: " << per->k << ", p: " << *(per->p) << endl;
        per = per->otra;
    }

    // Liberar la memoria asignada 
    delete[] personas;

    return 0;
}
