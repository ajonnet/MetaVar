//
//  MetaVar.cpp
//  OpenCVCMD
//
//  Created by Amit Jain on 21/06/17.
//  Copyright © 2017 ajonnet. All rights reserved.
//

#include <iostream>

using namespace std;

class MetaVar {
public:
    int val;
    int maxVal,minVal,stepVal;
    string valDesc;
    int *linkedVar;
    
    MetaVar(int _val=0, int _minVal=-9999, int _maxVal=9999, int _stepVal=1, string _valDesc = "Not defined", int *_linkedVar = NULL) {
        val=_val; minVal = _minVal; maxVal = _maxVal; stepVal = _stepVal; valDesc = _valDesc; linkedVar = _linkedVar;
        if(linkedVar != NULL) *linkedVar = val;
    }
    
    void linkVar(int *var) {
        linkedVar = var;
        if(linkedVar != NULL) *linkedVar = val;
    }
    
    void nextVal() {
        val += stepVal;
        if(val > maxVal) val = minVal;
        if(linkedVar != NULL) *linkedVar = val;
    }
    void prevVal() {
        val -= stepVal;
        if(val < minVal) val = maxVal;
        if(linkedVar != NULL) *linkedVar = val;
    }
};
