// eso = eval stack operation
#include "../lib/lib_eso.h"

// stands for the operation 
// no integer, only double, why ? because you can add 1233.32 and 22.1 => 1255.33

// add +
double add(double nbrA, double nbrB){
	return nbrA + nbrB;
}

// substract -
double sub(double nbrA, double nbrB){
	return nbrA - nbrB;
}

// multiply * or x
double mul(double nbrA, double nbrB){
	return nbrA * nbrB;
}

//divide /
double div(double nbrA, double nbrB){
	return nbrA / nbrB;
}

// euclidian %
double mod(double nbrA, double nbrB){
	return (double)((int)nbrA % (int)nbrB);
}

// power
double powr(double nbrA, double nbrB){
	return pow(nbrA, nbrB);
}
// square root
double sqr(double nbrA){
	return sqrt(nbrA);
}
// absolute
double abst(double nbrA){
	return fabs(nbrA);
}


