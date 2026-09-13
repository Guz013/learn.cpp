#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>

using namespace std;

class Notification {
protected:
  string receiver;

public:
  Notification(string ireceiver);

  virtual void send();
  virtual ~Notification();
};

class Email : public Notification {
private:
  string subject;

public:
  Email(string receiver, string subject);

  void send() override;
};

class SMS : public Notification {
public:
  SMS(string receiver);

  void send() override;
};

class Push : public Notification {
public:
  Push(string receiver);

  void send() override;
};

#endif // !NOTIFICATION_H
