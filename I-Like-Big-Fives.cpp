#include <bits/stdc++.h>
using namespace std;
int d, aux, total, aparaciones, i, digitos5;
bool multiplica5;
string n;
int main(){
cin.tie(); ios_base::sync_with_stdio(0);
  cin >> n;
  d =  n.size(), aux = d, total=0, aparaciones = 0;
  multiplica5 = false;
  digitos5 = 0;
    for(i = 0;i < d; i++){
    int numero= n[i];
    numero -= 48;
        if(aux>1) aparaciones += numero <= 5 ? ((aux-1)*pow(10, aux-2))*numero : (((aux-1)*pow(10, aux-2))*numero)+1*pow(10, aux-1);
        if(multiplica5) aparaciones += numero*(pow(10, aux-1));
        if(numero==5) aparaciones++, multiplica5 = true;
        aux--;
    }
    cout << aparaciones<<"\n";
    return 0;
}
