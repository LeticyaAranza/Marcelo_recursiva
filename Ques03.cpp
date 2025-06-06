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
// interativa

int somaDig02(int n){
    if(n/10 ==0)
    return n % 10;
    return n % 10 + somaDig02(n/10);
}
//recursiva

unsigned long long int converteBin(int n){
    if(n/2 == 0)
    return n % 2;
    return n % 2 + converteBin(n/2)*10;
}
// recursiva


int main(){

 int A;

 cout << "Digite um numeoro: ";
 cin >> A;

 cout << converteBin(A) << "\n\n";

    return 0;
}