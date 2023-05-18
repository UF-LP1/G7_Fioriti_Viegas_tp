#include "cumpleanios.h"

cumpleanios::cumpleanios(string color, string tamanio, float precio, unsigned int stock, string marca,string nombre) :articulos(marca,nombre) {
    this->precio = precio;
    this->stock = stock;
}

cumpleanios::~cumpleanios() {

}


string cumpleanios::get_color() {
    return this->color;
}

string cumpleanios::get_tamanio() {
    return this->tamanio;
}