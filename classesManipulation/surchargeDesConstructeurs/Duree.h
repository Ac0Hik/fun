#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED


class Duree{
     public :

      Duree (int hours = 0, int minutes = 0 , int seconds = 0);
      void convert();
      void showState() const;
      bool isEqual(Duree const& b)const;
      bool isLessThan(Duree const &b) const;
      bool isGreaterThan(Duree const&b) const;
      Duree& operator+=(Duree const& b);
      Duree& operator+=(int seconds);
      Duree& operator*=(Duree const& b);
      Duree& operator-=(Duree const& b);



     private :
      void show(std::ostream &flux) const;
      friend std::ostream &operator<<(std::ostream &flux,Duree const& a);
      int m_hours;
      int m_minutes;
      int m_seconds;

};
//comparison ,comparaison
bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);
bool operator>(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);

// arithmetic operations, operations arithmétiques
Duree operator+(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, int seconds);
Duree operator*(Duree const& a, Duree const& b);
Duree operator-(Duree const& a, Duree const& b);/**not finished yet**/

//flux ------------------------
//friend std::ostream &operator<<(std::ostream &flux,Duree const& a);






#endif // DUREE_H_INCLUDED
