#ifndef __functions__
#define __functions__

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <armadillo>
#include <functional>
#include "random.h"
#include "global.h"

using namespace std;
using namespace arma;

//functions declarations
void Read_input();
Random random_initialization(int);
uword cost_function(uword, uword, Random& rnd);
void total_fitness(Random&);
void Selection(Random&,uword); //random generator
void Lunch_time(Random&,uword,uword);
void Update(Random&); //aggiorno la popolazione
void initial_population(Random&);
bool match(uword,uword);
void Mutation(Random&,uvec&,int);
void shift_vector(uvec&,int,int);
void prepare_hist(uword);
void print_vector(vector<string>, string);

#endif 

