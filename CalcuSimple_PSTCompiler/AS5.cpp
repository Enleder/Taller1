#include "AS5.h"

void AS5_FUNC_carga(AS5 &as, enumOpsArits func, StringDyn nomVariable, int valor1){
    as.nomVariable = nomVariable;
    as.valor1   = valor1;
}
enumOpsArits AS5_FUNC_darTipoFUNC(AS5 as5){

void AS5_PROC_darNombreVariable(AS5 as5, StringDyn &nombreVar){

int AS5_FUNC_darValor1(AS5 as5){

StringDyn AS5_FUNC_darNombreVariable(AS5 as5IN){
    return as5IN.nomVariable;
}