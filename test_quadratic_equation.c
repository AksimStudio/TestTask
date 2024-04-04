#include "quadratic_equation.h"
#include <stdio.h>

void test_solve_equation() {
  QuadraticSolution solution;

  // Тесты для квадратного уравнения x^2 - 5x + 6 = 0
  solution = solve_equation(1, -5, 6);
  if (solution.num_roots != 2 || solution.x1 != 3.0 || solution.x2 != 2.0) {
    printf("Test failed for equation x^2 - 5x + 6 = 0\n");
  }

  // Тесты для квадратного уравнения x^2 + 6x + 9 = 0
  solution = solve_equation(1, 6, 9);
  if (solution.num_roots != 1 || solution.x1 != -3.0 || solution.x2 != -3.0) {
    printf("Test failed for equation x^2 + 6x + 9 = 0\n");
  }

  // Тесты для квадратного уравнения x^2 + 2x + 1 = 0
  solution = solve_equation(1, 2, 1);
  if (solution.num_roots != 1 || solution.x1 != -1.0 || solution.x2 != -1.0) {
    printf("Test failed for equation x^2 + 2x + 1 = 0\n");
  }

  // Тесты для квадратного уравнения 2x^2 + 3x + 4 = 0
  solution = solve_equation(2, 3, 4);
  if (solution.num_roots != 0) {
    printf("Test failed for equation 2x^2 + 3x + 4 = 0\n");
  }
  
}
int main() {
  double a = 1, b = -3, c = 2; // аргументы уравнения
  QuadraticSolution solution = solve_equation(a, b, c); // решение уравнения

  // вывод результата на экран
  if (solution.num_roots == 2) {
    printf("Уравнение имеет два корня:\n");
    printf("x1 = %.2f, x2 = %.2f\n", solution.x1, solution.x2);
  } else if (solution.num_roots == 1) {
    printf("Уравнение имеет один корень:\n");
    printf("x = %.2f\n", solution.x1);
  } else {
    printf("Уравнение не имеет действительных корней.\n");
  }
  test_solve_equation();//если будет ошибка ,от ошибка выведется иначе будет пусто в терминале

  return 0;
}
