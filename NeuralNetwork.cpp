#include "NeuralNetwork.h"

NeuralNetwork::NeuralNetwork()
{
	//
}

NeuralNetwork::NeuralNetwork(int inputs, int outputs, int hiddenHeight, int hiddenLayers)
{

	//create Matricies for each layer;

	//Matrix 1: inputs*hiddenHeight
	//Matrix 2 - hiddenLayers + 1: hiddenHeight*hiddenHeight
	//Matrix final: hiddenHeight*outputs

	//
	//Assume always 1 hidden layer is present.
	//

	//Inputs to hidden layer
	Matrix W1 (inputs, hiddenHeight);
	W1.Randomize();
	weights_.push_back(W1);

	//create other hidden layers
	for (int i = 0; i < hiddenLayers - 1; ++i) {
		Matrix Wn (hiddenHeight, hiddenHeight);
		Wn.Randomize();
		weights_.push_back(Wn);
	}

	//Hidden layer to output layer
	Matrix Wo (hiddenHeight, outputs);
	Wo.Randomize();
	weights_.push_back(Wo);


	numOutputs_ = outputs;

}


Matrix NeuralNetwork::FeedForward(Matrix inputData) {

	//Feedforward algorithm works by premultiplying the inputData by the weights

	Matrix temp = weights_[0] * inputData;


	//multiply the resulting matrix by each layer of the network

	for (int i = 1; i < weights_.size(); ++i)
	{

		temp = weights_[i] * temp;
		
	}

	temp.Print();

	return temp;
}