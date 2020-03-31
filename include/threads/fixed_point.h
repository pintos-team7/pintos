#ifndef THREAD_FIXED_POINT_H
#define THREAD_FIXED_POINT_H

#include <stdint.h>

#define FRACTIONAL (1<<14)


int i_convert_f(int n);
int f_convert_i(int x);
int f_add_f(int x, int y);
int f_sub_f(int x, int y);
int f_add_i(int x, int n);
int f_sub_i(int x, int n);
int i_sub_f(int n, int x);
int f_mul_f(int x, int y);
int f_mul_i(int x, int n);
int f_div_f(int x, int y);
int f_div_i(int x, int n);





#endif