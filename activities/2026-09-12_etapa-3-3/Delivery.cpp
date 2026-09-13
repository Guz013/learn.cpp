#include "Delivery.h"
#include <iostream>

using namespace std;

Delivery::Delivery(double d) { distanceKM = d; }
Delivery::~Delivery() {}

double Delivery::calculateFee() { return 0.0; }
void Delivery::showTime() {}
string Delivery::getName() { return ""; }

InPersonDelivery::InPersonDelivery(double d) : Delivery(d) {}
double InPersonDelivery::calculateFee() { return 0; }
void InPersonDelivery::showTime() {
  cout << "Prazo: Disponível para retirada" << endl;
}
string InPersonDelivery::getName() { return "Retirada em Loja"; }

NormalDelivery::NormalDelivery(double d) : Delivery(d) {}
double NormalDelivery::calculateFee() { return 10 + distanceKM * 1.20; }
void NormalDelivery::showTime() { cout << "Prazo: 3 a 5 dias úteis" << endl; }
string NormalDelivery::getName() { return "Entrega Normal"; }

ExpressDelivery::ExpressDelivery(double d) : Delivery(d) {}
double ExpressDelivery::calculateFee() { return 20 + distanceKM * 2; }
void ExpressDelivery::showTime() { cout << "Prazo: 1 a 2 dias úteis" << endl; }
string ExpressDelivery::getName() { return "Entrega Expressa"; }

MotoboyDelivery::MotoboyDelivery(double d) : Delivery(d) {}
double MotoboyDelivery::calculateFee() { return 8 + distanceKM * 1.5; }
void MotoboyDelivery::showTime() { cout << "Prazo: mesmo dia." << endl; }
string MotoboyDelivery::getName() { return "Entrega via motoboy"; }
