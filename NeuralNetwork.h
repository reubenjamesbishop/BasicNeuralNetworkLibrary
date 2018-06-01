#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "Matrix.h"

class NeuralNetwork
{

public:

	NeuralNetwork();
	NeuralNetwork(int inputs, int outputs, int hiddenHeight, int hiddenLayers);


private:

	Matrix* weights;

};

#endif //NUERALNETWORK_H