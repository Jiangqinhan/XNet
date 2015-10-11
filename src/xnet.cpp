/*
 * xnet.cpp
 *
 *  Created on: Sep 20, 2015
 *      Author: lyx
 */

#include "dataset/mnist.h"
#include "dataset/cifar10.h"
#include "dataset/imagenet.h"

using namespace std;

int main() {
	cout << "XNet v1.0" << endl;
	callCuda(cublasCreate(&global::cublasHandle));
	callCudnn(cudnnCreate(&global::cudnnHandle));

	//mnist::train();
	//cifar10::train();
	imagenet::train();

	callCuda(cublasDestroy(global::cublasHandle));
	callCudnn(cudnnDestroy(global::cudnnHandle));
	cout << "End" << endl;
	return 0;
}


