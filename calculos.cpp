# include <iostream>

using namespace std;

int main() {
	
	return 0;
}

// Pre:  n >= 0 AND 2 <= b <= 10
// Post: (n = 0 -> numCifras(n,b) = 1) AND
//       (n > 0 -> numCifras(n,b) = NC AND  n >= b^(NC-1) AND n < b^NC)
int numCifras(const int n, const int b = 10) {
	if (n < 0)
		return 1;
	else
		return 1 + numCifras(n/b, b);
}

// Pre:  n >= 0 AND i >= 1 AND 2 <= b <= 10
// Post: cifra(n,b,i) = (n / b^(i-1)) % b
int cifra(const int n, const int i, const int b = 10) {
	if (i == 1)
		return n%b;
	else
		return cifra(n/b, i-1, b);
}

// Pre:  n >= 0 AND 2 <= b <= 10
// Post: cifraMayor(n,b) = (MAX alfa EN [1,infinito].cifra(n,alfa,b))
int cifraMayor(const int n, const int b = 10) {
	int mayorTemp;
	if (n < b) {
		return n;
	} else {
		mayorTemp = n%b;
		int nuevoMayor = cifraMayor(n/b, b);
		if (mayorTemp < nuevoMayor)
			mayorTemp = nuevoMayor;
		return mayorTemp;
	}
}


// Pre:  n >= 0 AND 2 <= b <= 10
// Post: cifraMasSignificativa(n) = n / b^(NC-1)
//       AND (n >= b^(NC-1) AND n < b^NC)
int cifraMasSignificativa(const int n, const int b = 10) {
	if (n < b)
		return n;
	else
		return cifraMasSignificativa(n/b, b);
}

// Pre:  n >= 0 AND 2 <= b <= 10
// Post: sumaCifras(n,b) = (SUM alfa EN [1,infinito].cifra(n,alfa,b))
int sumaCifras(const int n, const int b = 10) {
	if (n == 0)
		return n;	// return n == return 0
	else
		return (n % b) + sumaCifras(n / b, b);
}