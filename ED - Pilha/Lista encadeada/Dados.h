#ifndef DADOS_H
#define DADOS_H

class Dados{
    private:
        int info;
        Dados *below;

    public:
        virtual ~Dados();
        Dados();

        void setInfo(int data);
        void setBelow(Dados *old);
        
        int getInfo();
        Dados* getBelow();
};

#endif