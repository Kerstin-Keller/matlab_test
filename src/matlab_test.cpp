/* ========================= eCAL LICENSE =================================
 *
 * Copyright (C) 2016 - 2019 Continental Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * ========================= eCAL LICENSE =================================
*/

#include "mex.h"
#include "matrix.h"
#include <string>

/*
* This function shall be called in Matlab like this
* ret = MatlabTest()
*/
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[])
{
    /*Check that one input is given*/
    if(nrhs != 0) {
    mexErrMsgIdAndTxt("MatlabTestProject:nrhs",
                      "No Inputs required.");
    }

    /*Check that one output is given*/
    if(nlhs != 1) {
    mexErrMsgIdAndTxt("MatlabTestProject:nhls",
                      "One output required.");
    }

    plhs[0] = mxCreateDoubleScalar(1.0);
}
