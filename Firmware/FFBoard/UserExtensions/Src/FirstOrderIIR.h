#ifndef FIRST_ORDER_IIR_H
#define FIRST_ORDER_IIR_H

typedef struct
{
    float alpha;
    float out;
} FirstOrderIIR;

//filter initialization (store filter coefficient, clear filter output)
void FirstOrderIIR_Init(FirstOrderIIR *filt, float alpha);

//update filter output
float FirstOrderIIR_Update(FirstOrderIIR *filt, float in);

#endif

