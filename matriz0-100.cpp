#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <iomanip>
#include<cstdlib>

using namespace std;
bool Verifica(int matriz[5] [5], int n, int m, int nume){
	for(n = 0; n < 5; n++) {
		for(m= 0; m< 5; m++) {
		if(nume == matriz[n][m]) {
			return false;
		}
		}
	}
	return true;
}

int main () {
	int Matriz  [5][5];
	int n, m, numE;
	srand(time(0));
	for(n = 0; n < 5; n++) {
		for(m= 0; m< 5; m++) {
			numE = 1 + rand() % 100;
			while (Verifica(Matriz,5,5,numE) == false) {
				numE = 1 + rand() % 100;
			}
		Matriz [n][m]=numE;
		}
	}
	
		for(n = 0 ; n < 5; n++) {
		    for(m = 0; m < 5; m++) {
			cout<<setw(3)<<Matriz[n][m]<<"";
		
		}cout<<endl;
	}
	return 0;
}


