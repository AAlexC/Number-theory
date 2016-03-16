#include <iostream>
#include <vector>
using namespace std;
int Criba[100010];
vector <int> P;
int main(){
    P.reserve(100002);
    cin.tie(0); ios_base::sync_with_stdio(0);
    int a,b,desde,f,t=0,aux,in=2,pos;
    cin >> a >> b;
       while(in*in < b){
         for(int i=in;i<=b;i+=in) Criba[i]=1;
         Criba[in]=0;
         while(Criba[++in]!=0);
       }
        P.push_back(2);
        for(int j=3;j<=b;j+=2) if(Criba[j]==0) P.push_back(j);
        desde = a-1;
        while(++desde <= b){
          if(Criba[desde]==0) continue;
          aux = desde;
          f = 0;
          pos=0;
           while(aux > 1){
            while(aux%P[pos]!=0) pos++;
            aux /= P[pos];
            f++;
                if(Criba[aux]==0){
                aux=1;
                f++;
                }
           }
           if(Criba[f]==0) t++;
        }
       cout << t;
    return 0;
}
