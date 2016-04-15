#include <iostream>
using namespace std;
unsigned long long int a, i, j, b, c = 0;
#define MAXN 1000000
bool Criba[1000002];
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin >> a >> b;
    Criba[0] = 1, Criba[1] = 1, Criba[2] = 0;
    for(i = 3; i*i <= MAXN; i += 2){
        if(Criba[i]==0){
            for(j = i+i; j <= MAXN; j += i ){
            Criba[j] = 1;
            }
        }
    }
    i = 0;
    while(++i <= MAXN){
        if(Criba[i] == 0 && i % 2 != 0 && i * i >= a && i * i <= b || i == 2 && i * i >= a && i * i <= b) c++;
    }
    cout << c << "\n";
    return 0;
}
