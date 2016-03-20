#include <bits/stdc++.h>
using namespace std;
unsigned D(unsigned i){
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
int n, total = 9, digitos, base, potencia = 0, i, k;
int main(){
cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> n;
	digitos = D(n);
	n *= digitos;
	for(i = 1, k = digitos;i < (digitos - 1) && digitos > 2; i++, k--) potencia += pow(10, k-1); 
	if(digitos < 2){
	total=0;
	cout << n + total <<"\n";	
	return 0;	
	}
 total =( ( (total - digitos) + 2) + potencia) * - 1;
cout << n + total <<"\n";	
return 0;	

}
