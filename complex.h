//
//  complex.h
//  Mid-term_project
//
//  Created by jane cheong  on 02/12/2022.
//

#ifndef complex_h
#define complex_h
template <typename T>
class complex{
private:
    T real;
    T imag;
    
public:
    complex();
    complex(T r, T i);
    ~complex();
    complex(const complex<T>& other);
    const complex& operator=(const complex &other);
    template <typename U>
    friend std::istream & operator >> (std::istream &,complex<U> &c);
    complex<T>& operator +=(const complex<T> &c2 );
    complex<T>& operator -=(const complex<T> &c2);
    complex<T>& operator *=(const complex<T>& );
    complex<T>& operator /=(const complex<T>&);
    complex<T> operator+(const complex<T>& );
    complex<T> operator-(const complex<T>& );
    complex<T> operator*(const complex<T>& );
    complex<T> operator/(const complex<T>& );
    complex operator++();
    complex operator ++(int);
    T product(complex<T>& ,complex<T>& );
    T getmodulus();
    void getconjuagte();
    T getdegree();
    void getexponential();
    void log_c();
    T pow_c(T n);
    T tranf_pc();
    T tranf_car();
    void matrix();
    bool operator==(const complex &right) const;
    bool operator!=(const complex &right) const;
    template <typename V>
    friend std::ostream& operator<<(std::ostream &, complex<V> const &c);
    
};



#endif /* complex_h */
