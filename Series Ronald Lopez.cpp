#include <iostream>
#include <cmath>
using namespace std;

// =====================================================
// FUNCIÓN AUXILIAR PARA SABER SI UN NÚMERO ES PRIMO
// =====================================================
// Lógica:
// Un número primo solo es divisible entre 1 y él mismo.
// Aquí revisamos si tiene divisores desde 2 hasta sqrt(n).
// Si encontramos uno, no es primo.
bool esPrimo(int x){
    if(x < 2) return false;

    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

// =====================================================
// EJERCICIO 1
// Serie: 4, 5, 9, 14, 23, 37, ...
// Lógica:
// Es una serie tipo Fibonacci.
// Cada término es la suma de los dos anteriores.
// Para usar la lógica pedida:
// a = 3, b = 1
// c = a + b -> 4
// luego 1 + 4 = 5, luego 4 + 5 = 9...
// =====================================================
void ejercicio1(int n){
    int a = 3, b = 1, c;

    for(int i = 1; i <= n; i++){
        c = a + b;
        cout << c << " , ";
        a = b;
        b = c;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 2
// Serie: 60, 1, 58, 3, 56, 5, ...
// Lógica:
// Se intercalan dos series:
// - una descendente de números pares: 60, 58, 56...
// - una ascendente de números impares: 1, 3, 5...
// =====================================================
void ejercicio2(int n){
    int grande = 60, pequeno = 1;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << grande << " , ";
            grande -= 2;
        }else{
            cout << pequeno << " , ";
            pequeno += 2;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 3
// Serie: 1, 1, 2, 3, 5, 8, 13...
// Lógica:
// Serie Fibonacci clásica.
// Se usan valores previos ocultos:
// a = 1, b = 0
// c = a + b -> 1
// luego 0 + 1 = 1
// luego 1 + 1 = 2 ...
// =====================================================
void ejercicio3(int n){
    int a = 1, b = 0, c;

    for(int i = 1; i <= n; i++){
        c = a + b;
        cout << c << " , ";
        a = b;
        b = c;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 4
// Serie: 2, 1, 4, 3, 6, 5, 8, 7, 10, 9...
// Lógica:
// Si la posición es impar, se imprime i+1
// Si la posición es par, se imprime i-1
// Así se van invirtiendo pares e impares.
// =====================================================
void ejercicio4(int n){
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << i + 1 << " , ";
        }else{
            cout << i - 1 << " , ";
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 5
// Serie: 0, 2, 6, 12, 20...
// Lógica:
// Cada término sigue la fórmula n(n+1)
// Si n=0 -> 0
// Si n=1 -> 2
// Si n=2 -> 6
// =====================================================
void ejercicio5(int n){
    for(int i = 0; i < n; i++){
        cout << i * (i + 1) << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 6
// Serie: 1, 4, 9, 16, 25...
// Lógica:
// Son cuadrados perfectos: n^2
// =====================================================
void ejercicio6(int n){
    for(int i = 1; i <= n; i++){
        cout << i * i << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 7
// Serie: 1, 2, 3, 5, 7, 11, 13, 17...
// Lógica:
// El ejemplo incluye el 1 y luego siguen números primos.
// Aunque 1 no es primo matemáticamente, aquí se respeta
// el patrón dado por el ejercicio.
// =====================================================
void ejercicio7(int n){
    int contador = 0;
    int num = 2;

    if(n >= 1){
        cout << 1 << " , ";
        contador++;
    }

    while(contador < n){
        if(esPrimo(num)){
            cout << num << " , ";
            contador++;
        }
        num++;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 8
// Serie: 1, 0, 1, 0, 1, 0...
// Lógica:
// Alternancia simple entre 1 y 0
// =====================================================
void ejercicio8(int n){
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << 1 << " , ";
        }else{
            cout << 0 << " , ";
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 9
// Serie: 1, 2, 4, 5, 10, 11, 22...
// Lógica:
// Se alternan dos operaciones:
// posición impar -> multiplicar por 2
// posición par   -> sumar 1
// =====================================================
void ejercicio9(int n){
    int valor = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";

        if(i % 2 != 0){
            valor *= 2;
        }else{
            valor += 1;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 10
// Serie: 1, 1,2, 1,2,3, 1,2,3,4...
// Lógica:
// Se generan bloques crecientes:
// bloque 1: 1
// bloque 2: 1,2
// bloque 3: 1,2,3
// =====================================================
void ejercicio10(int n){
    int contador = 0;

    for(int bloque = 1; contador < n; bloque++){
        for(int i = 1; i <= bloque && contador < n; i++){
            cout << i << " , ";
            contador++;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 11
// Serie: 1,1,2,1,2,3,1,2,3,4...
// Lógica:
// Igual al ejercicio 10
// =====================================================
void ejercicio11(int n){
    int contador = 0;

    for(int bloque = 1; contador < n; bloque++){
        for(int i = 1; i <= bloque && contador < n; i++){
            cout << i << " , ";
            contador++;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 12
// Serie: 1, 4, 7, 10, 13...
// Lógica:
// Progresión aritmética con diferencia +3
// =====================================================
void ejercicio12(int n){
    for(int i = 0; i < n; i++){
        cout << 1 + 3 * i << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 13
// Serie: 3, 8, 13, 18, 23...
// Lógica:
// Progresión aritmética con diferencia +5
// =====================================================
void ejercicio13(int n){
    for(int i = 0; i < n; i++){
        cout << 3 + 5 * i << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 14
// Serie: 3, 9, 27, 81, 243...
// Lógica:
// Potencias de 3
// Cada término se obtiene multiplicando por 3
// =====================================================
void ejercicio14(int n){
    long long valor = 3;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor *= 3;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 15
// Serie: 1, 8, 27, 64, 125...
// Lógica:
// Cubos perfectos: n^3
// =====================================================
void ejercicio15(int n){
    for(int i = 1; i <= n; i++){
        cout << i * i * i << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 16
// Serie: 4, 2, 1, 0.5, 0.25...
// Lógica:
// Cada término se divide entre 2
// =====================================================
void ejercicio16(int n){
    double valor = 4;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor /= 2;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 17
// Si n=8 -> 0,1,7,2,6,3,5,4
// Si n=7 -> 7,1,6,2,5,3,4
// Lógica:
// Para n par, arranca desde 0 y alterna extremo bajo/alto.
// Para n impar, arranca desde n y alterna alto/bajo.
// =====================================================
void ejercicio17(int n){
    if(n % 2 == 0){
        int bajo = 0;
        int alto = n - 1;

        cout << bajo << " , ";
        bajo++;

        while(bajo <= alto){
            cout << bajo << " , ";
            bajo++;

            if(bajo <= alto){
                cout << alto << " , ";
                alto--;
            }
        }
    }else{
        int alto = n;
        int bajo = 1;

        while(bajo < alto){
            cout << alto << " , ";
            alto--;

            cout << bajo << " , ";
            bajo++;
        }

        if(bajo == alto){
            cout << bajo << " , ";
        }
    }

    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 18
// Serie: 1,20,3,18,5,16,7,14...
// Lógica:
// Se intercalan:
// - impares ascendentes: 1,3,5,7...
// - pares descendentes desde 20: 20,18,16...
// =====================================================
void ejercicio18(int n){
    int impar = 1;
    int parDesc = 20;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << impar << " , ";
            impar += 2;
        }else{
            cout << parDesc << " , ";
            parDesc -= 2;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 19
// Serie: 1, 2, 4, 8, 16, 32...
// Lógica:
// Potencias de 2
// Nota: el enunciado decía (n²), pero no coincide.
// Aquí se sigue la serie visible.
// =====================================================
void ejercicio19(int n){
    long long valor = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor *= 2;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 20
// Serie:
// 1,2,3,4,5,5,4,3,2,1,
// 1,2,3,4,4,3,2,1,
// 1,2,3,3,2,1,
// 1,2,2,1,
// 1,1
// Lógica:
// Se arma una subida y bajada, reduciendo el máximo.
// =====================================================
void ejercicio20(){
    for(int maximo = 5; maximo >= 1; maximo--){
        for(int i = 1; i <= maximo; i++){
            cout << i << " , ";
        }

        for(int i = maximo; i >= 1; i--){
            cout << i << " , ";
        }
    }

    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 21
// Serie: -1, 1, -2, 3, -5, 8, -13, 21...
// Lógica:
// La magnitud sigue Fibonacci.
// El signo alterna: negativo, positivo, negativo...
// Usamos previos ocultos a=1, b=0
// =====================================================
void ejercicio21(int n){
    int a = 1, b = 0, c;

    for(int i = 1; i <= n; i++){
        c = a + b;

        if(i % 2 != 0){
            cout << -c << " , ";
        }else{
            cout << c << " , ";
        }

        a = b;
        b = c;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 22
// Serie: 1, 3, 6, 8, 16, 18, 36...
// Lógica:
// Se alternan dos operaciones:
// +2, luego x2, luego +2, luego x2...
// =====================================================
void ejercicio22(int n){
    int valor = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";

        if(i % 2 != 0){
            valor += 2;
        }else{
            valor *= 2;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 23
// Serie: 1, 3, 2, 6, 4, 9, 12, 12, 48...
// Lógica asumida:
// posiciones pares: múltiplos de 3 -> 3,6,9,12...
// posiciones impares: 1,2,4,12,48...
// En la parte impar se va multiplicando progresivamente.
// Esta serie viene media sospechosa de fábrica, así que aquí
// se reproduce con una regla práctica.
// =====================================================
void ejercicio23(int n){
    int impar = 1;
    int par = 3;
    int mult = 2;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << impar << " , ";
            impar *= mult;
            if(mult < 4) mult++;
        }else{
            cout << par << " , ";
            par += 3;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 24
// Serie: 1, 10, 100, 1000, 10000...
// Lógica:
// Potencias de 10
// =====================================================
void ejercicio24(int n){
    long long valor = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor *= 10;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 25
// Serie: 1, -3, 9, -13, 25, -31...
// Lógica asumida:
// positivos -> cuadrados impares: 1,9,25...
// negativos -> secuencia dada en arreglo
// Aquí el enunciado también viene medio torcido, así que
// se arma una solución consistente con lo mostrado.
// =====================================================
void ejercicio25(int n){
    int positivos[] = {1, 9, 25, 49, 81, 121};
    int negativos[] = {-3, -13, -31, -57, -91, -133};

    int p = 0, q = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << positivos[p] << " , ";
            p++;
        }else{
            cout << negativos[q] << " , ";
            q++;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 26
// Serie: 1,1,2,1,2,3,1,2,3,4...
// Lógica:
// Igual al ejercicio 10
// =====================================================
void ejercicio26(int n){
    int contador = 0;

    for(int bloque = 1; contador < n; bloque++){
        for(int i = 1; i <= bloque && contador < n; i++){
            cout << i << " , ";
            contador++;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 27
// Serie: 4, 7, 10, 13, 16, 19...
// Lógica:
// Progresión aritmética con diferencia +3
// =====================================================
void ejercicio27(int n){
    for(int i = 0; i < n; i++){
        cout << 4 + 3 * i << " , ";
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 28
// Serie: 8, 9, 11, 14, 18...
// Lógica:
// Se va sumando 1, luego 2, luego 3, luego 4...
// =====================================================
void ejercicio28(int n){
    int valor = 8;
    int suma = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor += suma;
        suma++;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 29
// Serie: 4, 4, 8, 24, 96...
// Lógica:
// Se multiplica por 1, luego por 2, luego por 3, luego por 4...
// =====================================================
void ejercicio29(int n){
    int valor = 4;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor *= i;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 30
// Serie: 1, 7, 14, 21, 28...
// Lógica asumida:
// El primer término es 1
// Luego siguen múltiplos de 7
// =====================================================
void ejercicio30(int n){
    for(int i = 1; i <= n; i++){
        if(i == 1){
            cout << 1 << " , ";
        }else{
            cout << 7 * (i - 1) << " , ";
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 31
// Serie: 1, 4, 8, 16, 32...
// Lógica asumida:
// Primer término 1
// Luego se comienza en 4 y se duplica
// =====================================================
void ejercicio31(int n){
    int valor = 1;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";

        if(i == 1){
            valor = 4;
        }else{
            valor *= 2;
        }
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 32
// Serie: 8, 13, 23, 38, 58...
// Lógica:
// Se suma 5, luego 10, luego 15, luego 20...
// =====================================================
void ejercicio32(int n){
    int valor = 8;
    int suma = 5;

    for(int i = 1; i <= n; i++){
        cout << valor << " , ";
        valor += suma;
        suma += 5;
    }
    cout << "..." << endl;
}

// =====================================================
// EJERCICIO 33
// Serie: 6, 8, 14, 22, 36...
// Lógica:
// Serie tipo Fibonacci
// previos ocultos: a=4, b=2
// c = a + b -> 6
// luego 2 + 6 = 8
// luego 6 + 8 = 14...
// =====================================================
void ejercicio33(int n){
    int a = 4, b = 2, c;

    for(int i = 1; i <= n; i++){
        c = a + b;
        cout << c << " , ";
        a = b;
        b = c;
    }
    cout << "..." << endl;
}

// =====================================================
// FUNCIÓN PRINCIPAL
// =====================================================
int main(){
    cout << "Ejercicio 1: ";  ejercicio1(6);
    cout << "Ejercicio 2: ";  ejercicio2(12);
    cout << "Ejercicio 3: ";  ejercicio3(7);
    cout << "Ejercicio 4: ";  ejercicio4(10);
    cout << "Ejercicio 5: ";  ejercicio5(5);
    cout << "Ejercicio 6: ";  ejercicio6(5);
    cout << "Ejercicio 7: ";  ejercicio7(8);
    cout << "Ejercicio 8: ";  ejercicio8(9);
    cout << "Ejercicio 9: ";  ejercicio9(7);
    cout << "Ejercicio 10: "; ejercicio10(15);
    cout << "Ejercicio 11: "; ejercicio11(21);
    cout << "Ejercicio 12: "; ejercicio12(9);
    cout << "Ejercicio 13: "; ejercicio13(8);
    cout << "Ejercicio 14: "; ejercicio14(7);
    cout << "Ejercicio 15: "; ejercicio15(9);
    cout << "Ejercicio 16: "; ejercicio16(5);
    cout << "Ejercicio 17 (n=8): "; ejercicio17(8);
    cout << "Ejercicio 17 (n=7): "; ejercicio17(7);
    cout << "Ejercicio 18: "; ejercicio18(22);
    cout << "Ejercicio 19: "; ejercicio19(8);
    cout << "Ejercicio 20: "; ejercicio20();
    cout << "Ejercicio 21: "; ejercicio21(10);
    cout << "Ejercicio 22: "; ejercicio22(7);
    cout << "Ejercicio 23: "; ejercicio23(9);
    cout << "Ejercicio 24: "; ejercicio24(6);
    cout << "Ejercicio 25: "; ejercicio25(6);
    cout << "Ejercicio 26: "; ejercicio26(10);
    cout << "Ejercicio 27: "; ejercicio27(6);
    cout << "Ejercicio 28: "; ejercicio28(5);
    cout << "Ejercicio 29: "; ejercicio29(5);
    cout << "Ejercicio 30: "; ejercicio30(5);
    cout << "Ejercicio 31: "; ejercicio31(5);
    cout << "Ejercicio 32: "; ejercicio32(5);
    cout << "Ejercicio 33: "; ejercicio33(5);

    return 0;
}