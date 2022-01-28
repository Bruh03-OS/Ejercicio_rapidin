
#include <iostream>
using namespace std;

int main() {
	int notas[5];
	int sum, cont;
	sum = cont = 0;

	for (int i = 0; i < 5; i++) {

		do {
			cout << "Nota No." << i + 1 << ": ";
			cin >> notas[i];
		} while (notas[i] < 0 || notas[i] > 100);

		sum += notas[i];
		
		if (!notas[i]) 
			break;
		cont++;
	}
	cout << "Promedio: " << sum / cont;
}
