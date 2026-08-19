#include <iostream>
#include <vector>

using namespace std;

int main(){
	int qtdDias;
	int preco = 0, lucro;

	cin >> qtdDias;
	
	vector<int> prices(qtdDias);
	
	for(int i = 0; i < qtdDias; i++){
		cin >> prices[i];
	}
	int dia = 0;
	int maior = prices[0];

	
	for(int i = 0; i < qtdDias; i++){
		if(prices[i] > maior){
			maior = prices[i];
			dia = i;
			}	
		}
			cout << maior << " ";
		
	
	return 0;
}
