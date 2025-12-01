#ifndef UX_H
#define UX_H

#include <string>
#include <vector>

void LimpiarPantalla();
std::string center(const std::string &s, int width = 70);
void mostrarASCII();
int interfaz();

void loadingBarSalida();
void loadingBarEntrada();

void entrada();
void salida();

int runUXMenu();

#endif
