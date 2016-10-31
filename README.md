## "gmie_cpp" -- A general purpose Mie scattering code in C++

### General Descriptions:
Electromagnetic scattering of plane wave by a sphere (Mie scattering). The sphere can be magnetic. The surrounding medium can be absorbing and magnetic.

### Prerequisites:
1. A C++ compiler supporting C++11. The author tested the code using the gcc version 6.2.0.

### Usage:
1. Modify the compilation parameters in "Makefile" according to your environmIn particular,please change the "CXX" (= C++ complier).
2. Specify the input parameters in "gmie_call.cpp".
3. Compilation and linking are performed by
    make
4. Run the executable by
    ./gmie

### Output:
Output results are Qsca, Qabs, Qext, and two elements of amplitude scattering matrix (S1, S2).

### Contact
nobuhiro.moteki@gmail.com

### Licence
Please see LICENSE.txt
