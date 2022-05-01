//https://github.com/pms67/HadesFCS/blob/ad6935db6ad8af8603cba0d84286dcc5568df3a6/Filtering/C%20Code/IIRFirstOrder.h

#include "FirstOrderIIR.h"

void FirstOrderIIR_Init(FirstOrderIIR *filt, float alpha)
{
    // check filter coefficient bounds and store
    if (alpha <0.0f)
    {
        filt->alpha = 0.0f;
    }
    else if (alpha > 1.0f)
    {
        filt->alpha = 1.0f;
    }
    else
    {
        filt->alpha = alpha;
    }


    //reset filter output
    filt->out = 0.0f;
}

float FirstOrderIIR_Filter(FirstOrderIIR *filt, float in)
{
    //compute filter output using current input and stored coefficient
    filt->out = (1.0f - filt->alpha) * in + filt->alpha * filt->out;
    //return filter output
    return filt->out;
}