//Genera un numero aleatorio y comprueba si coincide con lo que dice el usuario

#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {	

	srand(time(NULL));
	
	int num, guess;	
	guess = rand()%10;
	std::cout << guess << "\n";

return 0;
}
