// Compilado em clang++ -std=C++23 e rodado em Linux

#include "app.h"
#include "notifications.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Email email("contact@guz.one", "Atividade da Etapa 3");
  SMS sms("+55 (51) 99999-9999");
  Push push("@guz013");
  MessageApp app("UnisinosMessage", "@guz013");

  Notification *notifications[4];
  notifications[0] = &email;
  notifications[1] = &sms;
  notifications[2] = &push;
  notifications[3] = &app;

  for (Notification *notification : notifications) {
    notification->send();
    cout << "-----------------" << endl;
  }

  return 0;
}
