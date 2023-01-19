#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

#include<iostream>
#include<string>

class Vehicule{

    public :
         Vehicule();
         Vehicule(int);
         virtual void showType() const;
         virtual int tiresNumber() const = 0;
         virtual ~Vehicule();
         int getPrice();
    protected:
         int m_price;

};

class Car : public Vehicule{

    public:
        Car();
        Car(int ,std::string );
        virtual void showType() const;
        virtual int tiresNumber() const;
        virtual ~Car();
    private:
        int m_doors;
        std::string m_type;

};

class Motorcycle : public Vehicule{
    public:
        Motorcycle();
        Motorcycle(int, std::string);
        virtual void showType() const;
        virtual int tiresNumber() const;
        virtual ~Motorcycle();
    private:
        int m_speed;
        std::string m_type;
};

class Truck : public Vehicule{
    public:
        Truck(int, int, std::string);
        virtual void showType() const;
        virtual int tiresNumber() const;
        void deployCargo();
        void transport(int,int);
        virtual~Truck();
    private:
        int m_sze;
        std::string m_cargo;
};


#endif // VEHICULE_H_INCLUDED
