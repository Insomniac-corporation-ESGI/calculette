// eso = eval stack operation
// stands for the operation 
// no integer, only double, why ? because you can add 1233.32 and 22.1 => 1255.33
#include <stdint.h>

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
	return nbrA % nbrB;
}

// power
double pow(double nbrA, double nbrB){
	return pow(nbrA, nbrB);
}
// square root
double sqrt(double nbrA){
	return sqrt(nbrA);
}
// absolute
double fabs(double nbrA){
	return fabs(nbrA);
}


