#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "Matrix.h"

class NeuralNetwork
{

public:

	NeuralNetwork();
	NeuralNetwork(int inputs, int outputs, int hiddenHeight, int hiddenLayers);


	Matrix FeedForward(Matrix inputData);


private:

	//vector holding weights for connections between each layer of the network

	std::vector<Matrix> weights_;

	int numOutputs_;
};

#endif //NUERALNETWORK_H
