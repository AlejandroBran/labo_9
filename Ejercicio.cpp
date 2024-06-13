#include <iostream>

// Función para sumar dos números
float sumar(float num1, float num2) {
    return num1 + num2;
}

// Función para restar dos números
float restar(float num1, float num2) {
    return num1 - num2;
}

// Función para multiplicar dos números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

int main() {
    float num1, num2;
    char operacion;

    // Solicitar al usuario los dos números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Solicitar al usuario la operación a realizar
    std::cout << "Elija la operación a realizar (+ para suma, - para resta, * para multiplicación): ";
    std::cin >> operacion;

    // Realizar la operación seleccionada
    float resultado;
    switch (operacion) {
        case '+':
            resultado = sumar(num1, num2);
            break;
        case '-':
            resultado = restar(num1, num2);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            break;
        default:
            std::cout << "Operación no válida.";
            return 1;
    }

    // Mostrar el resultado
    std::cout << "El resultado de la operación es: " << resultado << std::endl;

    return 0;
}








#include <iostream>
#include <vector>

// Función para encontrar el mayor número en un vector
int encontrarMayor(const std::vector<int>& numeros) {
    int mayor = numeros[0];
    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> cantidad;

    // Vector para almacenar los números ingresados
    std::vector<int> numeros;

    // Pedir al usuario los números
    for (int i = 0; i < cantidad; ++i) {
        int numero;
        std::cout << "Ingrese el número " << i + 1 << ": ";
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Llamar a la función para encontrar el mayor número
    int mayor = encontrarMayor(numeros);

    // Mostrar el resultado
    std::cout << "El mayor número ingresado es: " << mayor << std::endl;

    return 0;
}





#include <iostream>

// Función para encontrar el menor número entre n números ingresados por el usuario
int encontrarMenor(int cantidad) {
    int menor, numero;
    std::cout << "Ingrese el número 1: ";
    std::cin >> menor;

    for (int i = 2; i <= cantidad; ++i) {
        std::cout << "Ingrese el número " << i << ": ";
        std::cin >> numero;
        if (numero < menor) {
            menor = numero;
        }
    }
    return menor;
}

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> cantidad;

    if (cantidad <= 0) {
        std::cout << "Cantidad no válida. Debe ser mayor que 0." << std::endl;
        return 1;
    }

    // Llamar a la función para encontrar el menor número
    int menor = encontrarMenor(cantidad);

    // Mostrar el resultado
    std::cout << "El menor número ingresado es: " << menor << std::endl;

    return 0;
}






#include <iostream>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "El número debe ser positivo." << std::endl;
        return 1;
    }

    if (esPrimo(numero)) {
        std::cout << "El número " << numero << " es primo." << std::endl;
    } else {
        std::cout << "El número " << numero << " no es primo." << std::endl;
    }

    return 0;
}







#include <iostream>

// Función para convertir dólares a euros
double dolaresAEuros(double dolares) {
    // Tasa de conversión de dólares a euros
    const double tasaDolarEuro = 0.84;
    return dolares * tasaDolarEuro;
}

// Función para convertir euros a dólares
double eurosADolares(double euros) {
    // Tasa de conversión de euros a dólares
    const double tasaEuroDolar = 1.19;
    return euros * tasaEuroDolar;
}

// Función para convertir dólares a pesos mexicanos
double dolaresAPesosMexicanos(double dolares) {
    // Tasa de conversión de dólares a pesos mexicanos
    const double tasaDolarPesoMexicano = 20.17;
    return dolares * tasaDolarPesoMexicano;
}

// Función para convertir pesos mexicanos a dólares
double pesosMexicanosADolares(double pesosMexicanos) {
    // Tasa de conversión de pesos mexicanos a dólares
    const double tasaPesoMexicanoDolar = 0.049;
    return pesosMexicanos * tasaPesoMexicanoDolar;
}

int main() {
    int opcion;
    double cantidad;

    std::cout << "Seleccione la opción deseada:" << std::endl;
    std::cout << "1. Dólar a Euro" << std::endl;
    std::cout << "2. Euro a Dólar" << std::endl;
    std::cout << "3. Dólar a Peso Mexicano" << std::endl;
    std::cout << "4. Peso Mexicano a Dólar" << std::endl;
    std::cout << "Ingrese el número de la opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Ingrese la cantidad en dólares: ";
            std::cin >> cantidad;
            std::cout << cantidad << " dólares equivale a " << dolaresAEuros(cantidad) << " euros." << std::endl;
            break;
        case 2:
            std::cout << "Ingrese la cantidad en euros: ";
            std::cin >> cantidad;
            std::cout << cantidad << " euros equivale a " << eurosADolares(cantidad) << " dólares." << std::endl;
            break;
        case 3:
            std::cout << "Ingrese la cantidad en dólares: ";
            std::cin >> cantidad;
            std::cout << cantidad << " dólares equivale a " << dolaresAPesosMexicanos(cantidad) << " pesos mexicanos." << std::endl;
            break;
        case 4:
            std::cout << "Ingrese la cantidad en pesos mexicanos: ";
            std::cin >> cantidad;
            std::cout << cantidad << " pesos mexicanos equivale a " << pesosMexicanosADolares(cantidad) << " dólares." << std::endl;
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
            break;
    }

    return 0;
}






#include <iostream>

// Función para convertir grados Celsius a grados Fahrenheit
double celsiusAFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    // Solicitar al usuario una temperatura en grados Celsius
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> celsius;

    // Realizar la conversión
    double fahrenheit = celsiusAFahrenheit(celsius);

    // Mostrar el resultado
    std::cout << celsius << " grados Celsius equivale a " << fahrenheit << " grados Fahrenheit." << std::endl;

    return 0;
}






#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Función para encontrar los primeros n números primos y mostrarlos
void primerosNPrimos(int n) {
    int cantidad = 0;
    int num = 2; // Empezamos desde el primer número primo
    cout << "Los primeros " << n << " numeros primos son:\n";
    while (cantidad < n) {
        if (esPrimo(num)) {
            cout << num << " ";
            cantidad++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de numeros primos que desea: ";
    cin >> cantidad;

    primerosNPrimos(cantidad);

    return 0;
}






#include <iostream>

using namespace std;

// Función para calcular el CUM
double calcularCUM(int numMaterias) {
    double sumatoriaNotas = 0.0;
    double sumatoriaUV = 0.0;

    for (int i = 0; i < numMaterias; ++i) {
        double nota, uv;
        cout << "Ingrese la nota de la materia " << (i + 1) << ": ";
        cin >> nota;
        cout << "Ingrese las unidades valorativas de la materia " << (i + 1) << ": ";
        cin >> uv;

        sumatoriaNotas += nota * uv;
        sumatoriaUV += uv;
    }

    return sumatoriaNotas / sumatoriaUV;
}

int main() {
    int numMaterias;
    cout << "Ingrese el número de materias cursadas: ";
    cin >> numMaterias;

    double CUM = calcularCUM(numMaterias);

    cout << "El Coeficiente de Unidades por Materia (CUM) es: " << CUM << endl;

    return 0;
}






#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159; // Definimos PI como una constante

// Función para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    return PI * pow(radio, 2); // Fórmula: área = PI * radio^2
}

int main() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Verificamos si el radio es negativo
    if (radio < 0) {
        cout << "El radio no puede ser negativo." << endl;
        return 1; // Salir del programa con un código de error
    }

    double area = calcularAreaCirculo(radio);

    cout << "El area del circulo con radio " << radio << " es: " << area << endl;

    return 0;
}




//DIFICILES DE FUNCIONES







#include <iostream>

using namespace std;

// Función para realizar la suma
double sumar(double a, double b) {
    return a + b;
}

// Función para realizar la resta
double restar(double a, double b) {
    return a - b;
}

// Función para realizar la multiplicación
double multiplicar(double a, double b) {
    return a * b;
}

// Función para realizar la división
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: no se puede dividir por cero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    char opcion;
    double num1, num2;

    do {
        cout << "=== Calculadora ===" << endl;
        cout << "a. Suma" << endl;
        cout << "b. Resta" << endl;
        cout << "c. Multiplicacion" << endl;
        cout << "d. Division" << endl;
        cout << "e. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La suma es: " << sumar(num1, num2) << endl;
                break;
            case 'b':
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La resta es: " << restar(num1, num2) << endl;
                break;
            case 'c':
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La multiplicacion es: " << multiplicar(num1, num2) << endl;
                break;
            case 'd':
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << "La division es: " << dividir(num1, num2) << endl;
                break;
            case 'e':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor seleccione nuevamente." << endl;
        }
    } while (opcion != 'e');

    return 0;
}






#include <iostream>

using namespace std;

// Función para intercambiar dos números
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para ordenar un arreglo de números de menor a mayor
void ordenarNumeros(int numeros[], int longitud) {
    for (int i = 0; i < longitud - 1; ++i) {
        for (int j = 0; j < longitud - i - 1; ++j) {
            if (numeros[j] > numeros[j + 1]) {
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }
}

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de numeros a ordenar: ";
    cin >> cantidad;

    // Arreglo para almacenar los números ingresados por el usuario
    int numeros[cantidad];

    // Solicitar los números al usuario
    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Llamar a la función para ordenar los números
    ordenarNumeros(numeros, cantidad);

    // Mostrar los números ordenados
    cout << "Los numeros ordenados de menor a mayor son:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}






#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

// Función para calcular el área de un círculo
double areaCirculo(double radio) {
    return PI * radio * radio;
}

// Función para calcular el perímetro de un círculo
double perimetroCirculo(double radio) {
    return 2 * PI * radio;
}

// Función para calcular el área de un cuadrado
double areaCuadrado(double lado) {
    return lado * lado;
}

// Función para calcular el perímetro de un cuadrado
double perimetroCuadrado(double lado) {
    return 4 * lado;
}

// Función para calcular el área de un rectángulo
double areaRectangulo(double base, double altura) {
    return base * altura;
}

// Función para calcular el perímetro de un rectángulo
double perimetroRectangulo(double base, double altura) {
    return 2 * (base + altura);
}

// Función para calcular el área de un triángulo
double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Función para calcular el perímetro de un triángulo (solo para triángulos equiláteros)
double perimetroTriangulo(double lado) {
    return 3 * lado;
}

// Función para calcular el área de un trapecio
double areaTrapecio(double baseMayor, double baseMenor, double altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}

// Función para calcular el perímetro de un trapecio (aproximación)
double perimetroTrapecio(double baseMayor, double baseMenor, double lado1, double lado2) {
    return baseMayor + baseMenor + lado1 + lado2;
}

int main() {
    char opcion;

    do {
        cout << "=== Menu ===" << endl;
        cout << "a. Circulo" << endl;
        cout << "b. Cuadrado" << endl;
        cout << "c. Rectangulo" << endl;
        cout << "d. Triangulo equilatero" << endl;
        cout << "e. Trapecio" << endl;
        cout << "f. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'a': {
                double radio;
                cout << "Ingrese el radio del circulo: ";
                cin >> radio;
                cout << "Area del circulo: " << areaCirculo(radio) << endl;
                cout << "Perimetro del circulo: " << perimetroCirculo(radio) << endl;
                break;
            }
            case 'b': {
                double lado;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                cout << "Area del cuadrado: " << areaCuadrado(lado) << endl;
                cout << "Perimetro del cuadrado: " << perimetroCuadrado(lado) << endl;
                break;
            }
            case 'c': {
                double base, altura;
                cout << "Ingrese la base del rectangulo: ";
                cin >> base;
                cout << "Ingrese la altura del rectangulo: ";
                cin >> altura;
                cout << "Area del rectangulo: " << areaRectangulo(base, altura) << endl;
                cout << "Perimetro del rectangulo: " << perimetroRectangulo(base, altura) << endl;
                break;
            }
            case 'd': {
                double lado;
                cout << "Ingrese el lado del triangulo equilatero: ";
                cin >> lado;
                cout << "Area del triangulo: " << areaTriangulo(lado, (lado * sqrt(3)) / 2) << endl;
                cout << "Perimetro del triangulo: " << perimetroTriangulo(lado) << endl;
                break;
            }
            case 'e': {
                double baseMayor, baseMenor, lado1, lado2, altura;
                cout << "Ingrese la base mayor del trapecio: ";
                cin >> baseMayor;
                cout << "Ingrese la base menor del trapecio: ";
                cin >> baseMenor;
                cout << "Ingrese el lado 1 del trapecio: ";
                cin >> lado1;
                cout << "Ingrese el lado 2 del trapecio: ";
                cin >> lado2;
                cout << "Ingrese la altura del trapecio: ";
                cin >> altura;
                cout << "Area del trapecio: " << areaTrapecio(baseMayor, baseMenor, altura) << endl;
                cout << "Perimetro del trapecio: " << perimetroTrapecio(baseMayor, baseMenor, lado1, lado2) << endl;
                break;
            }
            case 'f':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor seleccione nuevamente." << endl;
        }
    } while (opcion != 'f');

    return 0;
}








#include <iostream>

using namespace std;

// Función para verificar si un número es divisible por 2
bool esDivisiblePorDos(int num) {
    return num % 2 == 0;
}

// Función para verificar si un número es divisible por 3
bool esDivisiblePorTres(int num) {
    return num % 3 == 0;
}

// Función para verificar si un número es divisible por 5
bool esDivisiblePorCinco(int num) {
    return num % 5 == 0;
}

// Función para verificar si un número es divisible por 7
bool esDivisiblePorSiete(int num) {
    return num % 7 == 0;
}

// Función para verificar si un número es divisible por 11
bool esDivisiblePorOnce(int num) {
    return num % 11 == 0;
}

int main() {
    int numero;

    // Solicitar al usuario un número
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Verificar si el número es divisible por 2
    if (esDivisiblePorDos(numero)) {
        cout << numero << " es divisible por 2." << endl;
    } else {
        cout << numero << " no es divisible por 2." << endl;
    }

    // Verificar si el número es divisible por 3
    if (esDivisiblePorTres(numero)) {
        cout << numero << " es divisible por 3." << endl;
    } else {
        cout << numero << " no es divisible por 3." << endl;
    }

    // Verificar si el número es divisible por 5
    if (esDivisiblePorCinco(numero)) {
        cout << numero << " es divisible por 5." << endl;
    } else {
        cout << numero << " no es divisible por 5." << endl;
    }

    // Verificar si el número es divisible por 7
    if (esDivisiblePorSiete(numero)) {
        cout << numero << " es divisible por 7." << endl;
    } else {
        cout << numero << " no es divisible por 7." << endl;
    }

    // Verificar si el número es divisible por 11
    if (esDivisiblePorOnce(numero)) {
        cout << numero << " es divisible por 11." << endl;
    } else {
        cout << numero << " no es divisible por 11." << endl;
    }

    return 0;
}







#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Función para calcular la sumatoria total de los números en un rango
int sumatoriaTotal(int limiteInferior, int limiteSuperior) {
    int sumatoria = 0;
    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        sumatoria += i;
    }
    return sumatoria;
}

// Función para calcular la multiplicativa total de los números en un rango
long long multiplicativaTotal(int limiteInferior, int limiteSuperior) {
    long long multiplicativa = 1;
    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        multiplicativa *= i;
    }
    return multiplicativa;
}

int main() {
    int limiteInferior, limiteSuperior;

    // Solicitar al usuario los límites inferior y superior
    cout << "Ingrese el limite inferior: ";
    cin >> limiteInferior;
    cout << "Ingrese el limite superior: ";
    cin >> limiteSuperior;

    // Calcular la sumatoria total
    int sumatoria = sumatoriaTotal(limiteInferior, limiteSuperior);
    cout << "La sumatoria total es: " << sumatoria << endl;

    // Verificar si la sumatoria total es un número primo
    if (esPrimo(sumatoria)) {
        cout << "La sumatoria total es un numero primo." << endl;
    } else {
        cout << "La sumatoria total no es un numero primo." << endl;
    }

    // Calcular la multiplicativa total
    long long multiplicativa = multiplicativaTotal(limiteInferior, limiteSuperior);
    cout << "La multiplicativa total es: " << multiplicativa << endl;

    // Verificar si la multiplicativa total es un número primo
    if (esPrimo(multiplicativa)) {
        cout << "La multiplicativa total es un numero primo." << endl;
    } else {
        cout << "La multiplicativa total no es un numero primo." << endl;
    }

    return 0;
}
