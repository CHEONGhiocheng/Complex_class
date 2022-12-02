//
//  main.cpp
//  Mid-term_project
//
//  Created by jane cheong  on 27/11/2022.
//

#include <iostream>
#include <cmath>
template <typename T>
class complex{
private:
    T real;
    T imag;
    
public:
    complex(){
        real = 0;
        imag =0;
    };
    complex(T r, T i){
        real = r;
        imag = i;
    };
    complex(const complex<T>& other){
        real = other.real;
        imag = other.imag;
    }
    const complex& operator=(const complex &other){
        real = other.real;
        imag = other.imag;
        return *this;
    };
    ~complex(){};
    // enter real and imag
    friend std::istream & operator >> (std::istream &in, complex &c){
        std::cout <<"\n Enther the real part of your complex number:" <<std::endl;
        in >> c.real;
        std::cout <<"\n Enther the imaginary part of your complex number:" <<std::endl;
        in >> c.imag;
        return in;
    };
    //operator+-*/
    complex<T>& operator +=(const complex<T>& c2){
        real += c2.real;
        imag += c2.imag;
           return *this;
    };
       
    complex<T>& operator -=(const complex<T>&c2){
        real -= c2.real;
        imag -= c2.imag;
        return *this;
    };
    
    complex<T>& operator *=(const complex<T>& c2){
       // complex<T> c;
     //  c.real= c.real * c2.real - c.imag * c2.imag;
     //  c.imag= c.real * c2.imag + c.imag * c2.real;
        *this = *this * c2;
        return *this;
    };
    
    complex<T>& operator /=(const complex<T>&c2){
       // complex<T> c=*this;
       // T d;
      //  d= (c2.real*c2.real)+(c2.imag*c2.imag);
      //  this->real = (c.real*c2.real+c.imag*c2.imag)/d;
      //  this->imag = (c.imag*c2.real-c.real*c2.imag)/d;
        *this = *this / c2;
        return  *this;
    };
    complex<T> operator+(const complex<T>& c1){
        complex c;
        c.real = c1.real+this->real;
        c.imag=c1.imag+this->imag;
        return c;
    };
    complex<T> operator-(const complex<T>& c1){
        complex<T> c;
        c.real = c1.real-this->real;
        c.imag= c1.imag-this->imag;
        return c;
    };
    complex<T> operator*(const complex<T>& c1){
        complex<float> d;
        d.real = c1.real*this->real;
        d.imag= c1.imag*this->imag;
        return d;
    };
    complex<T> operator/(const complex<T>& c1){
        complex<float> f;
        f.real = c1.real/this->real;
        f.imag= c1.imag/this->imag;
        return f;
    };
    complex operator++(){    //for postfix incriment copmplex operator++(int)
    real++;
    imag++;
    complex c;
    c.real=real;
    c.imag=imag;
    return c;
    };
   
    complex operator ++(int) {
        complex temp = *this;
        ++*this;
        return temp;
        
    }; //called for num++

    //product
    T product(complex<T>& a,complex<T>& b)
    {
        complex<float> d;
        d.real = (a.real*b.real)-(a.imag*b.imag);
        d.imag= (a.real*b.imag)+(a.imag*b.real);
        std::cout << "The product of complex number is:" ;
        std::cout<< d.real;
          if (d.imag > 0) {
              std::cout<<"+"<<d.imag<<"i";
          }
          else if (d.imag<0) {
            std::cout<<"-"<<abs(d.imag)<<"i";
          }
             std::cout<<"\n";
        return (d.real&&d.imag);
    };
    
    
    // modulus and conjugate
 T getmodulus(){
        T z;
        z=sqrt(real*real+imag*imag);
        std::cout << "The modulus of complex number is:";
        std::cout<<z<<std::endl;
        return z;
    };
  
    void getconjuagte(){
        complex c;
        c.real=this->real;
        c.imag=(-1)*this->imag;
        std::cout<<"The conjugate of complex number is:";
        std::cout<<c.real<<"+"<<c.imag<<"i"<<std::endl;
    };
   // calculate the degree of complex number
    T getdegree(){
        complex c;
        T deg;
        c.real=this->real;
        c.imag=this->imag;
        deg = atan(c.imag/c.real)*180/M_PI;
        std::cout<<"The degree of complex number is:";
        std::cout<< deg << std::endl;
        return deg;
    };
    
    //exponential
    void getexponential(){
        T x;
        T y;
        T z;
        complex c;
        c.real=this->real;
        c.imag=this->imag;
        x = exp(c.real);
        y = cos(c.imag);
        z = sin(c.imag);
        std::cout << "The exponential complex is:" << x <<"*"<<"("<<y<<"+"<<z<<"i)"<<std::endl;
    };
    
    void log_c(){
        complex c;
        c.real=this->real;
        c.imag=this->imag;
        T r;
        r = sqrt(c.real*c.real+c.imag*c.imag);
        T sigta;
        sigta = atan(c.imag/c.real);
        c.real=r;
        c.imag=sigta;
        std::cout<<"ln"<<c.real<<"+"<<"i"<<c.imag<<std::endl;
    };
    
    T pow_c(T n){
        complex c;
        c.real=this->real;
        c.imag=this->imag;
        T r;
        r = sqrt(c.real*c.real+c.imag*c.imag);
        T sigta;
        sigta = atan(c.imag/c.real);
        c.real = pow(r,n)*cos(n*sigta);
        c.imag = pow(r,n)*sin(n*sigta);
        std::cout<<"The power of complex number is:";
        std::cout<< c.real;
          if (c.imag > 0) {
              std::cout<<"+"<<c.imag<<"i";
          }
          else if (c.imag<0) {
            std::cout<<"-"<<abs(c.imag)<<"i";
          }
             std::cout<<"\n";
        return (c.real && c.imag);
    };
    
    //transform to polar coordinate
    T tranf_pc(){
        T r;
        T sigta;
        T new_deg;
        complex c;
        c.real=this->real;
        c.imag=this->imag;
        r = c.getmodulus();
        sigta = c.getdegree();
        new_deg = sigta/180;
        std::cout<<"The polar coordinate of complex number is:";
        std:: cout<< r <<"(cos("<<new_deg << ")pi"<<"+"<< "i" <<"sin("<<new_deg<<")pi)" <<std::endl;
        return (r && new_deg);
    };
    //show the Cartesian coordinate
    T tranf_car(){
        complex c;
        c.real=this->real;
        c.imag=this->imag;
        std::cout << "The Cartesian coordinate of complex number is:";
        std::cout<<"("<<c.real<<","<< c.imag <<")"<<std::endl;
        return (c.real && c.imag);
    };
    
    //transform to matrix
    void matrix(){
        complex c;
        complex new_c;
        c.real=this->real;
        c.imag=this->imag;
        int p1[2][2]={1,0,0,1};
        int p2[2][2]={0,-1,1,0};
        std::cout<<"\nThe matrix of real part is:\n";
              for(int i=0;i<2;i++)
              {
                  for(int j=0;j<2;j++)
                  {
                      new_c.real=c.real*p1[i][j];
                      std::cout<<"\t"<<new_c.real;
                }
                  std::cout<<std::endl;
              }
        std::cout<<"\nThe matrix of imaginary part is:\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                new_c.imag=c.imag*p2[i][j];
                std::cout<<"\t"<<new_c.imag;
          }
          std::cout<<std::endl;
        }
    };

     bool operator==(const complex &right) const{

            if ((real == right.real) || (imag == right.imag))
                return true;
            else
                return false;

    };
    
        bool operator!=(const complex &right) const{

            if ((real != right.real) || (imag != right.imag))
                return true;
            else
                return false;

        };
    
    //display
    friend std::ostream & operator <<(std::ostream &out, complex const &c){
        out<< c.real;
          if (c.imag > 0) {
              out<<"+"<<c.imag<<"i";
          }
          else if (c.imag<0) {
            out<<"-"<<abs(c.imag)<<"i";
          }
             out<<"\n";
        return out;
    };
    
};

int main(int argc, const char * argv[]) {
    complex<float> c1(-2,-3);
    complex<float> c2(4,6);
    complex<float> c3,c4;
    c3=c1+c2;
    std::cout<<"Sum of two complex numbers is:"<<c3<<std::endl;
    c3=c1*c2;
    std::cout<<"Multiple of two complex numbers is:"<<c3<<std::endl;
    c3=c1-c2;
    std::cout<<"Subtraction of two complex numbers is:"<<c3<<std::endl;
    c3=c1/c2;
    std::cout<<"Divise of two complex numbers is:"<<c3<<std::endl;
    std::cout<<"Multiplication of two complex numbers is:"<<(c1*=c2)<<std::endl;
    std::cout<<"Division of two complex numbers is:"<<(c1/=c2)<<std::endl;
    std::cout<<"add of two complex numbers is:"<<(c1+=c2)<<std::endl;
    c1.getmodulus();
    c1.getconjuagte();
    c1.getdegree();
    c1.tranf_pc();
    c1.tranf_car();
    c1.matrix();
    std::cout <<"The copy constructor is: \n" ;
    complex<float> c=c1;
    c4 = c1;
    std::cout<<c<<std::endl;
    std::cout<<c4<<std::endl;
    c3.product(c1,c2);
    std::cout << "The c1 post-increment is:"<<c1++<<std::endl;
    std::cout <<"The c1 pre-increment is:" <<++c1<<std::endl;
    if(c2==c3){
        std::cout << "The c2 is equal to c3." << std::endl;
    }
    else{
        std::cout << "The c2 is not equal to c3." << std::endl;
    }
    c1.getexponential();
    c1.pow_c(2);
    c1.log_c();
    return 0;
}
