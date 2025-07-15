#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N,D;
    cin >> N >> D;
    
    int X[N];
    int Y[N];
    
    long long max_kedekatan = 0;
    long long min_kedekatan= 9e18;
    
    for(int i = 0; i < N; ++i){
        cin >> X[i] >> Y[i];
    }
    
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            int selisih_X = abs(X[j]-X[i]);
            int selisih_Y = abs(Y[j]-Y[i]);
            
            long long kedekatan_saat_ini = pow(selisih_X,D) + pow(selisih_Y, D);
            
            if (kedekatan_saat_ini > max_kedekatan){
                max_kedekatan = kedekatan_saat_ini;
            }
            if(kedekatan_saat_ini < min_kedekatan){
                min_kedekatan = kedekatan_saat_ini;
            }
        }
    }
    
    cout << min_kedekatan << " " << max_kedekatan << endl;
}
