#include <stdio.h>
#include "calc.h"

#define MAXVAL	100

int sp = 0;
double val[MAXVAL];

void push(double p){
	if(sp < MAXVAL){ val[sp++] = p; }
	else{ printf("error: stack full, can't push %g\n", p); }
}

double pop(){ 
	if(sp > 0){ return val[--sp]; }
	else{ printf("error: stack empty\n"); return 0.0; }
}