#ifndef DELIVERY_H
#define DELIVERY_H

#include <string>

using namespace std;

class Delivery {
protected:
  double distanceKM;

public:
  Delivery(double distanceKM);

  virtual double calculateFee();
  virtual void showTime();
  virtual string getName();

  ~Delivery();
};

class InPersonDelivery : public Delivery {
public:
  InPersonDelivery(double distanceKM);

  double calculateFee();
  void showTime();
  string getName();
};

class NormalDelivery : public Delivery {
public:
  NormalDelivery(double distanceKM);

  double calculateFee();
  void showTime();
  string getName();
};

class ExpressDelivery : public Delivery {
public:
  ExpressDelivery(double distanceKM);

  double calculateFee();
  void showTime();
  string getName();
};

class MotoboyDelivery : public Delivery {
public:
  MotoboyDelivery(double distanceKM);

  double calculateFee();
  void showTime();
  string getName();
};

#endif // !DELIVERY_H
