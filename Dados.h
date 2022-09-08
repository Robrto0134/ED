#ifndef DADOS_H
#define DADOS_H

class Dados{
    private:
        int info[10];
        int tamMax, tamAgr;

    public:
        virtual ~Dados();
        Dados();

        void adicionarFinal(int info);

        bool verificaVazia();
        bool verificaCheia();
        int verificarTam();

        void adicionaAonde(int pos, int info);
        void removeAonde(int pos);
        void printPos(int pos);
        void printAll();
        void modificar(int pos, int info);
};

#endif