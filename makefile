
all: NN
	g++ -o main.exe main.cpp NeuralNetwork.o Matrix.o


NN: Matrix
	g++ -c NeuralNetwork.cpp


Matrix:
	g++ -c Matrix.cpp

clean:
	del *.o