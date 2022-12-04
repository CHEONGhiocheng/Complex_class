# Complex_class
Operating systems: MacOS

The Compiler environment : Xcode

C++ – Version: g++ 4.2.1

In the complex class, I implement the following functions:

Operator + - * /: is about +-*/operator, and there can operate two complex numbers and print out the result.

Operator++() and operator++(int) : is about prefix and postfix increments. It can let the complex number add one to its operand.

Product : is about the product. That is according to the complex product equation and to calculate the answer.

Power : That can compute the (a+bi)^n. In order to simply calculate the result, I decided on polar coordinate transformation that can easily calculate the answer.

Matrix : I define the standard complex matrix as {1,0,0,1} (real part) and {0,-1,1,0} (imaginary part). Based on the standard matrix, I design the real part of a complex number to multiply the real part of the matrix and imaginary as the same.  And the code shows the real and imaginary matrix is separate.

Logarithm : Based on modulus and degree, and according the logarithm equation, the code will show the result in form ln(modulus) + i*degree. There is no computing of the result ln(r) to show the logarithmic form clearly.

Modulus : This function will base on the modulus equation for complex numbers, calculate in code, and print out the answer.

Conjugate: This function depends on the definition of conjugate, and the code will determine if the imaginary is bigger than 0 or not, and it will show in + or - in the imaginary part.

Polar coordinate: there is in tranf_pc(). And this code will show that the complex number transforms into a polar coordinate. On the polar coordinate, it will show in the form of r(cosӨ+isinӨ), where Ө is the radians. 
Cartesian coordinate: There is in tranf_car(). This code will show the complex number (a+ib) to (a,b).
 
Degree: This code will show the degree of complex numbers. And the degree is based on the arctan(b/a)*180/π equation.
 
Istream: This code can make us enter the complex numbers we want. But, for convenience, I do not call this function in main(). There has code that can execute at the bottom.
 
Ostream: This code has a function for printing out the complex number. Moreover, it will determine the size of the imaginary part to print out (a+ib) or (a-ib).
 
Exponential: This code use the exponential transform such that e(a+ib)transform to ea(cosb+isinb), where will compute ea,  cos b and sin b.
 
Operator == and !=: These codes will determine if the two complex numbers are equal or not equal. And print a message – The c2 is not equal to c3, or The c2 is equal to c3.
 
 In the bottom, that has a code about operation. This code can let us enter what operation we want. And it combines the istream function to operate our numbers.
 
The above codes will depend on the template, and there is input for any type of complex number.
