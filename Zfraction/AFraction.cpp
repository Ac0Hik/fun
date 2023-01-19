#include<iostream>
#include"AFraction.h"

using namespace std;


AFraction::AFraction(int numenator,int denominator){
    if(pgcd(numenator,denominator) == 1){
        m_numenator = numenator;
        m_denominator = denominator;
    }else{
        m_numenator = numenator/pgcd(numenator,denominator);
        m_denominator = denominator/pgcd(numenator,denominator);
    }
}

void AFraction::show()const{
    cout << "number is ";
    if(m_numenator == 0){
        cout << 0 << endl;
    }else if(m_denominator == 1){
        cout << m_numenator << endl;
    }else{
    cout << m_numenator << "/" << m_denominator << endl;
    }
}
void AFraction::convert(){
        const int pf = pgcd(m_numenator,m_denominator);
        m_numenator   /= pf;
        m_denominator /= pf;
}
bool AFraction::isEqual(AFraction const& b)const{
    AFraction copa(m_numenator,m_denominator), copb(b);
    copa.convert();
    copb.convert();
    return (copa.m_numenator == copb.m_numenator && copa.m_denominator == copb.m_denominator);

}
bool AFraction::isGreaterThan(AFraction const& b)const{
    AFraction copa(m_numenator,m_denominator), copb(b);
    copa.convert();
    copb.convert();
    if (copa.m_denominator == copb.m_denominator){
        return copa.m_numenator > copb.m_numenator;
    }else{
        return copa.m_numenator*copb.m_denominator > copb.m_numenator*copa.m_denominator;
    }

}

bool AFraction::isLessThan(AFraction const& b)const{
    AFraction copa(m_numenator,m_denominator), copb(b);
    copa.convert();
    copb.convert();
    if (copa.m_denominator == copb.m_denominator){
        return copa.m_numenator < copb.m_numenator;
    }else{
        return copa.m_numenator*copb.m_denominator < copb.m_numenator*copa.m_denominator;
    }

}


//-------------------------------operators---------------------------------
AFraction& AFraction::operator+=(AFraction const& b){
    m_numenator = m_numenator*b.m_denominator + m_denominator*b.m_numenator;
    m_denominator *= b.m_denominator;
    this->convert();
    return *this;
}

AFraction& AFraction::operator-=(AFraction const& b){
    m_numenator = m_numenator*b.m_denominator - m_denominator*b.m_numenator;
    m_denominator *= b.m_denominator;
    this->convert();
    return *this;
}

AFraction operator+(AFraction const& a, AFraction const& b){
    AFraction cop(a);
    cop += b;
    return cop;
}

AFraction& AFraction::operator*=(AFraction const& b){
    m_numenator   *= b.m_numenator;
    m_denominator *= b.m_denominator;
    this->convert();
    return *this;
}

AFraction operator*(AFraction const& a, AFraction const& b){
    AFraction cop(a);
    cop *= b;
    return cop;
}

AFraction operator-(AFraction const& a, AFraction const& b){
    AFraction cop(a);
    cop -= b;
    return cop;
}

bool operator==(AFraction const& a, AFraction const& b){
    return a.isEqual(b);
}

bool operator!=(AFraction const& a, AFraction const& b){
    return !(a.isEqual(b));
}

bool operator>(AFraction const& a, AFraction const& b){
    return a.isGreaterThan(b);
}
bool operator<=(AFraction const& a, AFraction const& b){
    return !(a.isGreaterThan(b));
}

bool operator<(AFraction const& a, AFraction const& b){
    return a.isLessThan(b);
}

bool operator>=(AFraction const& a, AFraction const& b){
    return !(a.isLessThan(b));
}



//--------------------------------------------functions--------------------
int pgcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

//********************************************************
//flux-----------------------------------------
ostream& operator<<(ostream &flux,AFraction const& a){
    a.show(flux);
    return flux;
}

void AFraction::show(ostream &flux)const{
    flux << m_numenator << "/" << m_denominator <<endl;
}
