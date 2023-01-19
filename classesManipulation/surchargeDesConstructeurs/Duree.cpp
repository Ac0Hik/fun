#include<iostream>
#include"Duree.h"

using namespace std;

Duree::Duree(int hours, int minutes, int seconds ): m_hours(hours), m_minutes(minutes), m_seconds(seconds){}

void Duree::convert(){

   if(m_seconds < 0){
    m_seconds = 0;
   }
   if(m_minutes < 0){
    m_minutes = 0;
   }
   if(m_hours < 0){
    m_hours = 0;
   }
   while(m_seconds >= 60){
    m_seconds-=60;
    m_minutes++;
   }
   while(m_minutes >= 60){
    m_minutes-=60;
    m_hours++;
   }
}

 void Duree::showState() const {
    cout << "-----------------status:---------------------" << endl;
    cout << "hours: " << m_hours << endl << "minutes: " << m_minutes << endl << "seconds: " << m_seconds << endl;
}

bool Duree::isEqual(Duree const& b)const{
    return(m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds == b.m_seconds);
}

bool Duree::isLessThan(Duree const& b) const{

    if(m_hours < b.m_hours){
        return true;
    }else if(m_hours == b.m_hours && m_minutes < b.m_minutes){
        return true;
    }else if(m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds < b.m_seconds){
        return true;
    }else{
        return false;//in this case they are equal so we return false, dans ce cas ils sont egaux alors on retourne faux
    }
}

bool Duree::isGreaterThan(Duree const& b) const{

    if(m_hours > b.m_hours){
        return true;
    }else if(m_hours == b.m_hours && m_minutes > b.m_minutes){
        return true;
    }else if(m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds > b.m_seconds){
        return true;
    }else{
        return false;//in this case they are equal so we return false, dans ce cas ils sont egaux alors on retourne faux
    }
}

Duree& Duree::operator+=(Duree const& b){

    m_seconds += b.m_seconds;//on commence par l'addition de seconds, we start by adding  seconds
    m_minutes += m_seconds/60;// si le nombre de seconds (dans l'objet droit) depasse 60 on rajoute des minutes (la partie entiere de la div faite)
    m_seconds %= 60;//on affect le reste aux seconds

    //we follow pretty much the same logic we add minutes while making sure they don't go past 59
    // on suit le meme logic en gardant la format d'une duree
    //----------------minutes
    m_minutes += b.m_minutes;
    m_hours += m_minutes/60;
    m_minutes %= 60;
    //------------------hours-------------
    m_hours += b.m_hours;
    return *this;
}
Duree& Duree::operator+=(int seconds){
    m_seconds += seconds;
    m_minutes += m_seconds/60;
    m_seconds %= 60;
    m_hours += m_minutes/60;
    m_minutes %= 60;
     return *this;
}

Duree& Duree::operator*=(Duree const& b){
    //pour le produit  on va tout d'abord multiplier tous les attribus et les convertir au bon format par la suite
    m_hours *= b.m_hours;
    m_minutes *= b.m_minutes;
    m_seconds *= b.m_seconds;

    //la conversion
    m_minutes += m_seconds/60;
    m_seconds %= 60;
    m_hours += m_minutes/60;
    m_minutes %= 60;
    return *this;
}
Duree& Duree::operator-=(Duree const& b){
    //la deuxieme duree est plus grande alors on met les attribus du premier membre a 0;
    if(m_hours < b.m_hours){//second duration is greater, we can not calculate the difference so we put the 1st member to 0
        m_hours = 0;
        m_minutes = 0;
        m_seconds = 0;
        return *this;
    }else{

        if(m_minutes < b.m_minutes){
            m_hours -= b.m_hours;
            m_minutes = 0;
            m_seconds = 0;
            return *this;
        }else{
            if(m_seconds < b.m_seconds){
                m_hours -= b.m_hours;
            }
        }
    }
}

bool operator==(Duree const& a, Duree const& b){
    return a.isEqual(b);
}

bool operator!=(Duree const& a, Duree const& b){
    return !(a.isEqual(b));
}

bool operator<(Duree const& a, Duree const& b){
    return a.isLessThan(b);
}

bool operator>=(Duree const& a, Duree const& b){
    return !(a.isLessThan(b));
}
bool operator>(Duree const& a, Duree const& b){
    return a.isGreaterThan(b);
}
bool operator<=(Duree const& a, Duree const& b){
    return !(a.isGreaterThan(b));
}

Duree operator+(Duree const& a, Duree const& b){

    Duree theCopy(a);//result container , l'objet qui va contenir le resultats utilisant le constructeur copy()
    theCopy += b;
    return theCopy;
}

Duree operator+(Duree const& a, int seconds){

    Duree copie(a);
    copie+= seconds;
    return copie;
}

Duree operator*(Duree const& a, Duree const& b){

    Duree theCopy(a);//result container , l'object qui va contenir le resultats utilisant dans le constructeur copy()
    theCopy *= b;
    return theCopy;
}

Duree operator-(Duree const& a, Duree const& b){

    Duree theCopy(a);//result container , l'object qui va contenir le resultats utilisant le constructeur copy()
    theCopy -= b;
    return theCopy;
}


//flux-----------------------------------------
ostream& operator<<( ostream &flux,Duree const& a){
    a.show(flux);
    return flux;
}

void Duree::show(ostream &flux)const{
    flux << m_hours << "h" << m_minutes << "min" << m_seconds <<"s" << endl;
}


