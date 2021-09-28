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
// exponentiel --> e(x)
double expo(double nbrA){
	return exp(nbrA);
}
// logarithme
double log(double nbrA){
	return fabs(nbrA);
}
// logarithme base 10
double loga10(double nbrA){
	return log10(nbrA);
}


