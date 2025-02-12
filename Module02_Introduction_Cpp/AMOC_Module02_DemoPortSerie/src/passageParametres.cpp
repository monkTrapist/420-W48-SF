#include <Arduino.h>

#include "passageParametres.h"

void passageDeParametres1(int p_v1, int &p_r1, int *p_p1) {
  Serial.println("int p_v1 (int * : 0x" + String((uint16_t)(&p_v1), HEX) + ") = " + String(p_v1));
  Serial.println("int &p_r1 (int * : 0x" + String((uint16_t)(&p_r1), HEX) + ") = " + String(p_r1));
  Serial.println("int *p_p1 (int ** : 0x" + String((uint16_t)(&p_p1), HEX) + ") adresse : 0x" + String((uint16_t)p_p1, HEX) + " = " + String(*p_p1));
}

void passageDeParametresCopie(Flasher p_flasher) {
  Serial.println("passageDeParametresCopie - Flasher p_flasher (Flasher* : 0x" + String((uint16_t)(&p_flasher), HEX) + ")");
}

void passageDeParametresReference(Flasher& p_flasher) {
  Serial.println("passageDeParametresReference - Flasher& p_flasher (Flasher* : 0x" + String((uint16_t)(&p_flasher), HEX) + ")");
}

void passageDeParametresPointeur(Flasher* p_flasher) {
  Serial.println("passageDeParametresPointeur - Flasher* p_flasher (Flasher* : 0x" + String((uint16_t)(p_flasher), HEX) + ")");
}