#ifndef _VELA_H
#define _VELA_H

#include "cumpleanios.h"


class vela : public cumpleanios {
public:

    vela(string tamanio, float precio, unsigned int stock, string color);

    ~vela();

};

#endif //_VELA_H