
// Plik nagłówkowy z klasą kalkulatora stopni

// typ wyliczeniowy określający skalę temperatur
enum SCALE { SCL_CELSIUS = 'c', SCL_FAHRENHEIT = 'f', SCL_KELVIN = 'k' };

class CDegreesCalc
{
	private:
		// temperatura w stopniach Celsjusza
		double m_fStopnieC;
	public:
		// ustawienie i pobranie temperatury
		void UstawTemperature(double, SCALE);
		double PobierzTemperature(SCALE);
};
