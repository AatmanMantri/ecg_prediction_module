// Original code extracted from: https://github.com/blakeMilner/real_time_QRS_detection/blob/master/QRS_test.c
// Based on the algorithm proposed in: HC Chen, SW Chen, "A Moving Average based Filtering System with its Application to Real-time QRS Detection", Computers in Cardiology, 2003.

//detect_QRS.h

#ifndef DETECT_QRS
#define DETECT_QRS

#include <iostream>
#include <stdlib.h>  
#include <vector>

void detect_QRS(std::vector<double> ecg, std::vector<int> &result);

#endif
