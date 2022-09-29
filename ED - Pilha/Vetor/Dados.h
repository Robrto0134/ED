#ifndef DADOS_H
#define DADOS_H

class Dados{
    private:
        int d[10];
        int tamAtual;

    public:
        virtual ~Dados();
        Dados();

        void empilhar(int data);
        void remover();
        int retornarTopo();
        int retornarTam();
        bool verificarVazia();
};

#endif