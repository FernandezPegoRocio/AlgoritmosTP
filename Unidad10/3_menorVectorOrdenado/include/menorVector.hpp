#ifndef MENORVECTOR_HPP
#define MENORVECTOR_HPP

namespace Numeros {
    class MenorVector {
    public:
        static void generar(int* &numeros, int tamano);
        static void ordenar(int* numeros, int tamano);
        static void mostrar(int* numeros, int tamano);
    };
}

#endif
