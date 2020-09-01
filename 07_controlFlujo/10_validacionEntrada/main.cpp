#include <iostream>
#include <limits>

using namespace std;

double obtenerNumero(){
    while (true)
    {
        cout << "Ingrese un valor con decimal: ";
        double x{};
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return x;
        }
    }
}

char obtenerOperador(){
    while (true)
    {
        cout << "Ingrese uno de los siguientes +, -, *, o /: ";
        char op{};
        cin >> op;
        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            cout << "Esto es invalido, ingrese un operador valido.\n";
        }
    }
}

void imprimirResultado(double valorx, char operacion, double valory)
{
    switch (operacion)
    {
    case '+':
        cout << valorx << " + " << valory << " es " << valorx + valory << '\n';
        break;
    case '-':
        cout << valorx << " - " << valory << " es " << valorx - valory << '\n';
        break;
    case '*':
        cout << valorx << " * " << valory << " es " << valorx * valory << '\n';
        break;
    case '/':
        cout << valorx << " / " << valory << " es " << valorx / valory << '\n';
        break;
    }
}

int main(int argc, char const *argv[])
{
    double x{obtenerNumero()};
    char operacion{obtenerOperador()};
    double y{obtenerNumero()};

    imprimirResultado(x, operacion, y);

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return EXIT_SUCCESS;
}