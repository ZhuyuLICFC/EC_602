#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#copyright 2018 Zhuyu Li zhuyuli@bu.edu
#python file: calculate the storages of electrons on earth

mass_earth_kg = 5.965e24;
mol_num = 6.02e23;
ave_mole_kg = 0.065;
tera_storage = 1e12;

electron_num_total = mass_earth_kg / ave_mole_kg * mol_num;


electron_tera = electron_num_total / tera_storage;
electron_tera_low = electron_tera * 0.9;
electron_tera_high = electron_tera * 1.1;

print(str(electron_tera) + '\n' + str(electron_tera_low) + '\n' + str(electron_tera_high))



