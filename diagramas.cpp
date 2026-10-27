#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int opcion;

    do
    {
        cout << "\n===== MENU DE OPCIONES =====\n";
        cout << "1. Ejercicio 5.2 - Triangulo de numeros\n";
        cout << "2. Ejercicio 5.4 - Patron decreciente\n";
        cout << "3. Ejercicio 5.6 - Suma de numeros pares\n";
        cout << "4. Ejercicio 5.8 - Funcion cos(3x) - 2x\n";
        cout << "5. Ejercicio 5.10 - Maximo comun divisor\n";
        cout << "6. Ejercicio 5.12 - Limite maximo de una suma\n";
        cout << "7. Ejercicio 5.14 - Serie exponencial\n";
        cout << "8. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            {
                // Ejercicio 5.2
                cout << "\nEjercicio 5.2: Triangulo de numeros\n";
                cout << "Interpretacion: se imprimen 4 filas. "
                     << "Cada fila muestra numeros desde 1 hasta el numero de la fila.\n";

                for (int i = 1; i <= 4; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 2:
            {
                // Ejercicio 5.4
                int n;

                cout << "\nEjercicio 5.4: Patron decreciente\n";
                cout << "Interpretacion: se lee n y se imprimen filas "
                     << "cada vez mas cortas, hasta llegar a una sola cifra.\n";
                cout << "Ingrese el valor de n: ";
                cin >> n;

                for (int i = n; i >= 1; i--)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 3:
            {
                // Ejercicio 5.6
                int i = 1;
                int suma = 0;

                cout << "\nEjercicio 5.6: Suma de los primeros "
                     << "30 numeros pares\n";
                cout << "Interpretacion: se generan los primeros "
                     << "30 numeros pares y se acumulan en una suma.\n";

                while (i <= 30)
                {
                    int par = 2 * i;
                    suma = suma + par;
                    i++;
                }

                cout << "La suma de los primeros 30 numeros pares es: "
                     << suma << endl;
                break;
            }

            case 4:
            {
                // Ejercicio 5.8
                double x = 0.0;

                cout << "\nEjercicio 5.8: Evaluacion de la funcion\n";
                cout << "Interpretacion: x comienza en 0 y aumenta "
                     << "de 0.5 en 0.5 hasta 5. Se calcula cos(3x) - 2x.\n";

                cout << fixed << setprecision(4);
                cout << "x\t\tResultado\n";
                cout << "-----------------------------\n";

                while (x <= 5.0)
                {
                    double resultado = cos(3 * x) - 2 * x;
                    cout << x << "\t\t" << resultado << endl;
                    x = x + 0.5;
                }
                break;
            }

            case 5:
            {
                // Ejercicio 5.10
                int a, b;

                cout << "\nEjercicio 5.10: Maximo comun divisor\n";
                cout << "Interpretacion: se leen dos enteros y se "
                     << "calculan sus residuos hasta que b sea cero. "
                     << "El ultimo valor de a es el MCD.\n";
                cout << "Ingrese dos numeros enteros: ";
                cin >> a >> b;

                int originalA = a;
                int originalB = b;

                a = abs(a);
                b = abs(b);

                while (b != 0)
                {
                    int residuo = a % b;
                    a = b;
                    b = residuo;
                }

                cout << "El MCD de " << originalA << " y "
                     << originalB << " es: " << a << endl;
                break;
            }

            case 6:
            {
                // Ejercicio 5.12
                double limite_maximo;
                int n = 0;
                double suma = 0.0;

                cout << "\nEjercicio 5.12: Limite maximo\n";
                cout << "Interpretacion: se suman los terminos "
                     << "n*n - n - 2 hasta que la suma alcance "
                     << "o supere el limite indicado.\n";
                cout << "Ingrese el limite maximo: ";
                cin >> limite_maximo;

                if (limite_maximo > 0)
                {
                    while (suma < limite_maximo)
                    {
                        n = n + 1;
                        double termino = n * n - n - 2;
                        suma = suma + termino;
                    }

                    cout << "El numero minimo de terminos es: "
                         << n << endl;
                    cout << "Suma alcanzada: " << suma << endl;
                }
                else
                {
                    cout << "El limite debe ser mayor que cero.\n";
                }
                break;
            }

            case 7:
            {
                // Ejercicio 5.14
                double x;
                int i = 1;
                double termino = 1.0;
                double suma = 1.0;

                cout << "\nEjercicio 5.14: Serie exponencial\n";
                cout << "Interpretacion: se aproxima e^x sumando "
                     << "los primeros 15 terminos de su serie.\n";
                cout << "Ingrese el valor de x: ";
                cin >> x;

                cout << fixed << setprecision(6);
                cout << "Iteracion\tSuma acumulada\n";
                cout << "--------------------------------\n";
                cout << "0\t\t" << suma << endl;

                while (i < 15)
                {
                    termino = termino * x / i;
                    suma = suma + termino;

                    cout << i << "\t\t" << suma << endl;
                    i++;
                }

                cout << "Aproximacion final de e^x: "
                     << suma << endl;
                break;
            }

            case 8:
            {
                cout << "\nPrograma finalizado. Hasta luego.\n";
                break;
            }

            default:
            {
                cout << "\nSeleccion no valida. "
                     << "Ingrese una opcion del 1 al 8.\n";
                break;
            }
        }

    } while (opcion != 8);

    return 0;
}
