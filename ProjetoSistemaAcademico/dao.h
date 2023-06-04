#ifndef DAO_H
#define DAO_H

template <class Tipo>
class DAO
{
public:
    DAO(){}
    virtual void incluir(Tipo* obj)=0;
    virtual Tipo* buscar(Tipo* obj)=0;
    virtual void alterar(Tipo* obj)=0;
    virtual Tipo* remover(Tipo* obj)=0;
};

#endif // DAO_H
