/*
 * ArraysController.cpp
 *
 *  Created on: Mar 22, 2016
 *      Author: snem8901
 */

#include <iostream>
#include"ArraysC++.h"
using namespace std;

ArraysController :: ArraysController()
{

	doubleArray = new double[4];
	doubleArray = 4865.369;
	intArray = new int[8];
	intArray[8] = 4789;

}

void ArraysController::Start()
{
	cout << *doubleArray << endl;
	cout << *intArray << endl;

}


