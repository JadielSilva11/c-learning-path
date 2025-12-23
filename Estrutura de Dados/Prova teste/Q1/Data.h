#ifndef DATA_H
#define DATA_H

typedef struct data Data;

Data* criar_data(int dia, int mes, int ano);
void eBissexto(Data *d);
void compara(Data *d1, Data *d2);
void liberar_data(Data *d);

#endif