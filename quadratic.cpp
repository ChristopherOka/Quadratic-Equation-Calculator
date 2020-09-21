#include <iostream>
#include <cmath>

void quadratic() {
double A;
double B;
double C;
double X_one;
double X_two;
 std::cout << "In form: ax^2 + bx + c\n" << "A = ";
 std::cin >> A; 
 std::cout << "B = ";
 std::cin >> B;
 std::cout << "C = ";
 std::cin >> C;
  

X_one = ((B * (-1)) + (sqrt((B * B) - 4 * A * C))) / (2 * A);
X_two = ((B * (-1)) - (sqrt((B * B) - 4 * A * C))) / (2 * A);
if (X_one == X_two) {
  std::cout << "x = " << X_one << "\n"; 
}
else {
std::cout << "x = " << X_one << "\n"; 
std::cout << "x = " << X_two << "\n";
}
}

int main() {
quadratic();

}
