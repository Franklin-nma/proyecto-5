#include <iostream>

int main() {
 double  distanciadelsolaMarte, velocidaddelaluz, tiempo;
 std::cout<<"ingresela distancia de marte al sol"<<std::endl;
 std::cin>> distanciadelsolaMarte;
 velocidaddelaluz=299.792458;
 tiempo= distanciadelsolaMarte/velocidaddelaluz;
 std::cout<<"eltiempo que le toma a a luz llegar a marte es:"<<tiempo<<"segundos"<<std::endl;
}