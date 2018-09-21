//copyright 2018 Zhuyu Li zhuyuli@bu.edu

#include<iostream>
#include<cmath>
using namespace std;

/*

A C++ program that calculate the storages of electrons on earth

*/

int main()
{
    /*
    double mass_earth_g = 5.965e27;
    double percent_mass[4] = {0.4806, 0.2630, 0.0773, 0.0475};
    double mass_g_mol[4] = {15.999, 28.085, 26.981, 55.845};
    double electron_num_sep[4] = {8, 14, 13, 26};
    double mol_num = 6.02e23;
    double electron_num_total = 0;
    double tera_storage = 1e12;




    for (int i = 0; i < 4; i++) {
        electron_num_total += (mass_earth_g * percent_mass[i] / mass_g_mol[i] * mol_num * electron_num_sep[i]);
    }*/
    double mass_earth_kg = 5.965e24;
    double mol_num = 6.02e23;
    double ave_mole_kg = 0.065;
    double tera_storage = 1e12;

    double electron_num_total = mass_earth_kg / ave_mole_kg * mol_num;


    double electron_tera = electron_num_total / tera_storage;
    double electron_tera_low = electron_tera * 0.9;
    double electron_tera_high = electron_tera * 1.1;

    cout << electron_tera << endl;
    cout << electron_tera_low << endl;
    cout << electron_tera_high << endl;



    return 0;





  /*  double percent_o = 0.301;
    double percent_si = 0.151;
    double percent_mg = 0.139;
    double percent_s = 0.029;
    double percent_ni = 0.018;
    double percent_ca = 0.015;
    double percent_al = 0.014;*/

}
