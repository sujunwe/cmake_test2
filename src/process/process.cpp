#include <iostream>
#include "process.h"
#include <Eigen/Dense>

using std::cout, std::endl;
using Eigen::MatrixXd;

void Process::planProcess()
{
    cout << "this is planing process" << endl;
    my_map.mapInfo();
    cout << "planning success" << endl;

    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 5;
    m(0, 1) = -4;
    m(1, 1) = 8;

    cout << m << endl;
}