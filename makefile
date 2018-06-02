
all: NN


NN: Matrix
	g++ -c NeuralNetwork.cpp


Matrix:
	g++ -c Matrix.cpp

clean:
	del *.o