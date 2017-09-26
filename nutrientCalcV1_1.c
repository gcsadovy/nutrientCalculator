//make a nutrient calculator that takes in an array of pointers to a set of defined ppm values that corespond to a specifically names element, an int value for the amount of solvent used in the titration, and the output will be an array of pointers pointing to an array of char strings for names of compounds

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXPPM 1400

//for the names and weights of the ions and salts, you can declare them as external variables and initialize it once and for all when it is defined

//I don't know if a structure is the best way to declare this

struct ions {
  char *name;
  double *weight;
  char *ppm;
  struct compounds *c[];
} iontab[] = {
    "NO3", 62.00, 0, compoundtab["CaNO3", "KNO3"],
    "P2O5", 142.00, 0, compoundtab["KH2PO4"]
};

struct compounds {
  char *name;
  double *weight;
  struct ions *i[];
} compoundtab[] = {
    "CaNO3", 1080.00, iontab["Ca", "NO3"] //this is actually amonium salt  
};


