#include <iostream>

using namespace std;

class Notification {
protected:
  string receiver;

public:
  Notification(string ireceiver) { receiver = ireceiver; }

  virtual void send() = 0;
  virtual ~Notification() {}
};

class Email : public Notification {
private:
  string subject;

public:
  Email(string receiver, string isubject) : Notification(receiver) {
    subject = isubject;
  }

  void send() override {
    cout << "Enviando email para " << receiver << endl;
    cout << "Assunto: " << subject << endl;
  }
};

class SMS : public Notification {
public:
  SMS(string receiver) : Notification(receiver) {};

  void send() override { cout << "Enviando SMS para " << receiver << endl; }
};

class Push : public Notification {
public:
  Push(string receiver) : Notification(receiver) {};

  void send() override {
    cout << "Enviando notifcação push para " << receiver << endl;
  }
};

int main(int argc, char *argv[]) {
  Email email("contact@guz.one", "Aviso da disciplina");
  SMS sms("+55 (51) 99999-9999");
  Push push("guz013");

  Notification *notifications[3];
  notifications[0] = &email;
  notifications[1] = &sms;
  notifications[2] = &push;

  for (Notification *notification : notifications) {
    notification->send();
    cout << "-----------------" << endl;
  }

  return 0;
}
