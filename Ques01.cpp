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


int main(){

 int x, y;
cout << "Escolha dois numeos naturais inteiros:  ";
cin >> x >> y;

cout << "O mdc_01 e:  " << MDC_01(x,y) << endl ;
cout << "O mdc_02 e:  " << MDC_02(x,y) << endl ;


    return 0;
}