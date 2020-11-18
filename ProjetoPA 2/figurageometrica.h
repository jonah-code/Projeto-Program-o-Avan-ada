#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

class FiguraGeometrica{
private:
    float r,g,b,a;
public:
    FiguraGeometrica();
    void setColor(float r,float g,float b,float a);
    virtual void draw(Sculptor &t);
};

#endif // FIGURAGEOMETRICA_H
