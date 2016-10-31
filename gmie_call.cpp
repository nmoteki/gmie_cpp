#include <iostream>
#include <iomanip>
#include <complex>
#include <vector>
#include <tuple>
using namespace std;

#include "gmie.hpp"


int main(int argc, char* argv[]){

    //input parameters
    double wl_0 {1.0}; // wavelength in vaccum (=c/w)
    double r_p {1.0}; // particle radius
    complex<double> eper_m {1.0+0.0i}; //complex permittivity of medium ε
    complex<double> mper_m {1.0+0.0i}; //complex permiability of medium μ
    complex<double> eper_p {2.0+1.0i}; //complex permittivity of particle ε1
    complex<double> mper_p {1.0+0.0i}; //complex permiability of particle μ1
    int nang {3}; // number of scattering angles between 0-180 deg for scattering matrix element S1 S2

    double Qsca, Qabs, Qext;
    vector<complex<double>> S1,S2;

    tie(Qsca,Qabs,Qext,S1,S2)= gmie(wl_0, r_p, nang, eper_p, mper_p, eper_m, mper_m);

    cout << "Qsca, Qabs, Qext ==  " << Qsca << ", " << Qabs << ", "  << Qext << endl;
    for(int i= 0; i < nang; ++i){
        cout << "iang, S1, S2 ==  " << i << ", " << S1[i] << ", " << S2[i] << endl;
    }

}
