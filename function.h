#ifndef Function_h
#define Function_h

int var1(int* m, int size);
int var2(int* m, int size);
int var3(int* m, int size);

int(*choice(int* m, int size))(int* m, int size);

double sum(double a, double b);
double substruct(double a, double b);

void fold(double* mass, unsigned size, double(*funco)(double, double), double* acc);
#endif
