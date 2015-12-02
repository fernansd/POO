//guess.cc
//Genera un numero aleatorio y comprueba si coincide con lo que dice el usuario

#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {	

	srand(time(NULL));
	
	int num, guess;	
	guess = rand()%10;
	
	std::cout << "Introduce un número entre 0 y 9: ";
	std::cin >> num;	
	while ( num != guess ) {
		
		std::cout << "Has fallado\n";
			
		std::cout << "Introduce otro número: ";
		std::cin >> num;		
	}
	
	std::cout << "Has acertado\n";

return 0;
}
