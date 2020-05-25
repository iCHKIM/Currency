#include <iostream>

int main() {
  
  int pesos;
  int reais;
  int soles;

  int dollars;
  //Conversion rates as of 5/25/20
  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;
  //1 Peso is 0.00027 USD
  std::cout << "Enter number of Brazilian Reais:\n";
  std::cin >> reais;
  //1 Reais is 0.18 USD
  std::cout << "Enter number of Peruvian Soles:\n";
  std::cin >> soles;
  //1 Soles is 0.29 USD
  dollars = 0.00027 * pesos + 0.18 * reais + 0.29 * soles;
  
  std::cout << "US Dollars = $" << dollars << "\n";
}
