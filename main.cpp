#include "funciones.h"
#include "Producto.h"
#include "Pedido.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int opcion;
    opcion = menuPrincipal();
    carta(opcion);

    return 0;
}
