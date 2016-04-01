#include <bits/stdc++.h>
using namespace std;
queue <int> x;
bool criba[1000010];
vector <int> P;
int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int mayor=1000000, mete=-1;
          int i=2;
      while(i*i < mayor){
        for(int j=i;j<=mayor;j+=i) criba[j]=1;
        criba[i]=0;
        while(criba[++i]==1);
      }
        P.push_back(2);
        for(int i=3;i<=mayor;i+=2) if(criba[i]==0) P.push_back(i);
    while(mete!=0){
    cin>>mete;
    if(mete==0) break;
        int nu = mete;
        int p1 = 0;
        int j = 0;
        while(P[++j]<nu);
        int primoMayor=j;
           while( P[p1] + P[j] != nu){
                j--;
                if(P[p1] == P[j] && P[p1] + P[j] != nu){//Si son iguales 3 y al sumar son diferentes aumentamos dejando al máximo y aumentamos el bajo
                   j=primoMayor;
                   p1++;
                }
           }
                cout << P[p1] << " " << P[j] <<"\n";
      }
    return 0;
}
