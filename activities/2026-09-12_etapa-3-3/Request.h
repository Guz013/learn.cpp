#ifndef REQUEST_H
#define REQUEST_H

#include <string>

using namespace std;

class Request {
private:
  string clientName;
  double price;

public:
  Request(string client, double price);

  string getClient();
  void setClient(string name);
  double getPrice();
  void setPrice(double value);
};

#endif // !REQUEST_H
