#include "notifications.h"
#include <iostream>

using namespace std;

Notification::Notification(string _receiver) { receiver = _receiver; }
void Notification::send() {}
Notification::~Notification() {}

Email::Email(string receiver, string isubject) : Notification(receiver) {
  subject = isubject;
}

void Email::send() {
  cout << "Enviando email para " << receiver << endl;
  cout << "Assunto: " << subject << endl;
}

SMS::SMS(string receiver) : Notification(receiver) {};
void SMS::send() { cout << "Enviando SMS para " << receiver << endl; };

Push::Push(string receiver) : Notification(receiver) {};
void Push::send() {
  cout << "Enviando notifcação push para " << receiver << endl;
}
