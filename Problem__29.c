//Problema 70 -- Leetcode

int climbStairs(int n){
    if( n <= 3 ){
        return n;
    }
    int aux, temp, fib;
    fib = 0;
    aux = 2;
    temp = 1;
    for(int i = 3; i <= n; i++){
        fib = aux + temp;
        temp = aux;
        aux = fib;
    }
return fib;
}
