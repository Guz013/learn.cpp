#include "Request.h"

Request::Request(string client, double requestPrice) {
  clientName = client;
  price = requestPrice;
}
string Request::getClient() { return clientName; }
void Request::setClient(string name) { clientName = name; }
double Request::getPrice() { return price; }
void Request::setPrice(double value) { price = value; }
