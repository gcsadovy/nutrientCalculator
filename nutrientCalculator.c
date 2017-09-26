#include <stdio.h>
#include <string.h>
#include <ctype.h>

//we want to read in an array of pointers to character strings (the names of the nutrients) that point to an int which is the max ppm for each of the nutrients, and an int that represents the amount of water in which you are diluting the compounds

//we want to read out an array of pointers to character strings (the names of the dry compounds to add to the blend) which points to an int, which is the amount of material that should be added to x value for the water added



int water;


/*
struct element {
  char *name;
  int *ppm;
  struct molecule *p;
};

struct molecule {
  char *name;
  int *weight;
  struct ion *t;
};

struct ion {
  char *name;
  int *weight;
};
  
*/

//take in a pointer to an array of names of cations and anions that you want to put in the mix and the maxppm of each

//use structures to relate the cations and anions to the compounds from which they come

#define MAXPPM 1400

struct nutrient {
  char *name; //pointer to an array of pointers to a character string
  int *weight; //pointer to value for the weight of the ion 
  struct nutrient *compounds; //pointer to array of pointers to compound information
};


//nutrientCalculator: take in an array of ppm ints and ion char names; and give back an array of masses with compound char names
main(

  
