#include <iostream>
using namespace std;
int RangosPrimos[50000002];
bool Criba[50000002];
long long n, a, i , j;
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    Criba[1] = 1;
    Criba[0] = 1;
    for(i = 3; i*i<50000000; i+=2){
       if( not Criba[i] ){
        for(j = i+i; j <= 50000000; j += i){
           Criba[j] = 1;
        }
       }
    }
    RangosPrimos[2] = 1;
    for(i = 3; i <= 50000000; i++){
        RangosPrimos[i] = RangosPrimos[i-1] + ((not Criba[i] && i%2 != 0));
    }
    cin >> n;
    while(n--){
        cin >> a;
        cout << RangosPrimos[a-1] << "\n";
    }
    return 0;
}
