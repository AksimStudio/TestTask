#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

typedef struct {
  double x1;     // первый корень
  double x2;     // второй корень
  int num_roots; // количество корней уравнения
} QuadraticSolution;

QuadraticSolution solve_equation(double a, double b, double c);

#endif