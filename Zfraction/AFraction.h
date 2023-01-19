#ifndef AFRACTION_H_INCLUDED
#define AFRACTION_H_INCLUDED
#include<iostream>


class AFraction{
    public:
        AFraction(int numena = 0 , int denomi = 1);
        void show() const;
        void affiche() const { if (m_denominator ==1){std::cout << m_numenator;}else{ std::cout << m_numenator << "/" << m_denominator;}}
        void convert();
        void setNuM(int v){ m_numenator = v;};
        void setdeM(int v){ m_denominator = v;};
        AFraction& operator+=(AFraction const& );
        AFraction& operator-=(AFraction const& );
        AFraction& operator*=(AFraction const& );
        bool isEqual(AFraction const& )const;
        bool isGreaterThan(AFraction const& )const;
        bool isLessThan(AFraction const& )const;
    private:
        void show(std::ostream &flux) const;
        friend std::ostream &operator<<(std::ostream &flux,AFraction const& a);
        int m_numenator;
        int m_denominator;

};
int pgcd(int ,int );


AFraction operator+(AFraction const& , AFraction const& );
AFraction operator-(AFraction const& , AFraction const& );
AFraction operator*(AFraction const& , AFraction const& );

bool operator==(AFraction const& , AFraction const& );
bool operator!=(AFraction const& , AFraction const& );
bool operator>(AFraction const& , AFraction const& );
bool operator>=(AFraction const& , AFraction const& );
bool operator<(AFraction const& , AFraction const& );
bool operator<=(AFraction const& , AFraction const& );



#endif // AFRACTION_H_INCLUDED
