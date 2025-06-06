#include <iostream>

using namespace std;

int MDC_01(int a, int b){
int resto;
while(a%b != 0){
    resto = a % b;
    a = b;
    b = resto;
}

return b;

} //iterativa

int MDC_02(int a, int b){

    if(a % b == 0)
    return b;

    return MDC_02(b, a%b);

}//recursiva

int somaDig01(int n){
    int soma=0;
    while (n/10 != 0){
        soma += n % 10;
        n/=10;
    }

    soma += n;
    return soma;
}

int somaDig02(int n){
    if(n/10 ==0)
    return n % 10;
    return n % 10 + somaDig02(n/10);
}


int main(){

 int A,B;

 cout << "Digite um numeor: ";
 cin >> A;
 cout << somaDig01(A) << endl;

 cout << somaDig02(A) << "\n\n";
    return 0;
}