// DegreesCalc - kalkulator temperatur

#include <iostream>
#include <conio.h>
#include "calc.h"

int main()
{
	std::cout << "   KALKULATOR TEMPERATUR   " << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout <<std::endl;

	// zapytujemy o skalę, w której będzie wprowadzona wartość
	char chSkala;
	std::cout << "Wybierz wejsciowa skale temperatur" << std::endl;
	std::cout << "(c - Celsjusza, f - Fahrenheita, k - Kelwina): ";
	std::cin >> chSkala;
	if (chSkala != 'c' && chSkala != 'f' && chSkala != 'k') return 0;

	// zapytujemy o rzeczoną temperaturę
	float fTemperatura;
	std::cout << "Podaj temperature: ";
	std::cin >> fTemperatura;

	// deklarujemy obiekt kalkulator (tworząc go) i przekazujemy doń temp.
	CDegreesCalc Kalkulator;
	Kalkulator.UstawTemperature (fTemperatura, static_cast<SCALE>(chSkala));

	// pokazujemy wynik - czyli temperaturę we wszystkich skalach
	std::cout << std::endl;
	std::cout << "- stopnie Celsjusza: "
			  << Kalkulator.PobierzTemperature(SCL_CELSIUS) << std::endl;
	std::cout << "- stopnie Fahrenheita: "
			  << Kalkulator.PobierzTemperature(SCL_FAHRENHEIT) << std::endl;
	std::cout << "- kelwiny: "
			  << Kalkulator.PobierzTemperature(SCL_KELVIN) << std::endl;

    // czekamy na dowolny klawisz
    getch();

    // koniec programu
    return 0;
}
