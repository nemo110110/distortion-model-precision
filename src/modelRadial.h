#ifndef MODELRADIAL_H
#define MODELRADIAL_H

#include "model.h"

/// Classic radial model (center variable or fixed at origin)
class ModelRadial : public Model {
    std::vector<flnum> k_;
    flnum center_[2];
    bool varCenter_;
    bool odd_;
public:
    ModelRadial(int order, bool varCenter=false, bool onlyOddOrder=false);
    void change_order(int order);

    void apply(flnum& x, flnum& y) const;
    void evaluate(libNumerics::matrix<flnum>& ptsU,
                  libNumerics::matrix<flnum>& ptsD);
};

#endif
