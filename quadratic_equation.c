#include "quadratic_equation.h"
#include <math.h>

QuadraticSolution solve_equation(double a, double b, double c) {
  QuadraticSolution solution; // создаем переменную типа QuadraticSolution для
                              // хранения решения
  double discriminant = b * b - 4 * a * c; // формула дискриминанта
  // проверка значения дискриминанта
  if (discriminant > 0) {
    solution.num_roots = 2;
    solution.x1 = (-b + sqrt(discriminant)) / (2 * a); // находим первый корень
    solution.x2 = (-b - sqrt(discriminant)) / (2 * a); // находим второй корень
  } else if (discriminant == 0) {
    solution.num_roots = 1;
    solution.x1 =
        -b / (2 * a); // находим 1 корень так как дискриминант равен нулю
    solution.x2 = solution.x1;
  } else {
    solution.num_roots = 0; // корней нет
  }

  return solution; // возвращаем структуру с решением уравнения
}
