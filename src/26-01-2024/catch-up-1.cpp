#include <iostream>
using namespace std;

void int2hour(int _tmp){
    cout << _tmp/3600 << ":" ;
    _tmp = _tmp%3600 ;
    cout << _tmp/60 << ":" ;
    _tmp = _tmp%60 ;
    cout << _tmp ;
}

int somma_interi(int n){
    int risultato = 0 ;
    int i ;
    for (i = 1 ; i <= n ; i = i+1) {
        risultato = risultato + i;
    }
    return(risultato) ;
}

bool is_prime(int n){
    int i ;
    bool flag = false ;
    i = 2 ;
    while ((i < n) && (!flag )){
        if (n%i == 0) flag = true ;
        else i = i + 1 ;
    }
    return(flag) ;
}

void assegnamento(int& x, int e){
    x = e ;
}

int m = 5 ;

void foo(){
    m = 75 ;
}

int main() {
    int n ;
    int y, z ;
   // assegnamento(n,2) ;
    assegnamento(n,n+1) ;
    //int2hour(tmp) ;
    //cout << somma_interi(n) ;
    //cout << is_prime(n) ;
    assegnamento(y,n) ;
    cout << y << endl ;
    assegnamento(y, y+1) ;
    cout << y << endl ;
    assegnamento(z, y*2) ;
    cout << z << endl ;
    foo() ;
    cout << m ;
    return(0) ;
}