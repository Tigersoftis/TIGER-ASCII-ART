#define WIELKOSC_TABLICY 4  // stala, rozwiazuje problem magic numbers - definiuje liczbe - [wielkosc tablicy]

#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	int liczba1, liczba2, liczba3, liczba4;
	
	cout << endl << "Wprowadz ponizej 4 liczby, ktore trafia do tablicy jednowymiarowej:" << endl;
	
	cout << endl << "wprowadz pierwsza liczbe calkowita:\t"; // "\t" to tabulator (zeby wyswietlic równo w pionie wprowadzane liczby)
	cin >> liczba1;
	cout << endl << "Wprowadz druga liczbe calkowita:\t";
	cin >> liczba2;
	cout << endl << "Wprowadz trzecia liczbe calkowita:\t";
	cin >> liczba3;
	cout << endl << "Wprowadz czwarta liczbe calkowita:\t";
	cin >> liczba4;
	
	int tablica [WIELKOSC_TABLICY] = {liczba1, liczba2, liczba3, liczba4}; // w [] zamiast liczby stala zdefiniowana na poczatku 
	//powyzej utworzylem tablice z 4 elementami (0,1,2,3) bez wprowadzonych danych (pusta) - tylko wczesniej zdefiniowane 4 zmienne int
	
	cout << endl << endl << "Liczby, ktore wprowadziles to: \t";
	cout << "\t" << tablica [0] << "\t" << tablica [1] << "\t" << tablica [2] << "\t" << tablica [3] << endl << endl << endl;
	
	cout << "Suma liczb w tych komorkach to: \t" << tablica [0] + tablica [1] + tablica [2] + tablica [3] << endl;
	cout << "Iloczyn liczb w tych komorkach to: \t" << tablica [0] * tablica [1] * tablica [2] * tablica [3] << endl << endl << endl;
		
	system ("pause");
	return 0;
}
