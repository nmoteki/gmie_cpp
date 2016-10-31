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
Output results are Qsca, Qabs, Qext, and two elements of amplitude scattering matrix (S1, S2). In absorbing medium, Qsca, Qabs, and (S1, S2) are set to NaN, because these parameters are not defined.

### Theory:
This code is based on the theory described in followingr books and paper.
*Bohren and Huffman 1983, Absorption and Scatteing of Light by Small Particles, John Wiley & Sons. Inc.
Kerker et al. 1983, Electromagnetic scattering by magnetic spheres, J.Opt.Soc.Am., vol. 73, 765-767.
Mischchenko 2007, Electromagnetic scattering by a fixed finite object embedded in an absorbing medium, Optics Express,vol 15, 13188-13202.

### Contact
nobuhiro.moteki@gmail.com

### Licence
Please see LICENSE.txt
