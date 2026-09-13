#ifndef APP_H
#define APP_H

#include "notifications.h"
#include <string>

using namespace std;

class MessageApp : public Notification {
private:
  string appName;

public:
  MessageApp(string appName, string receiver);
  void send() override;
};

#endif // !APP_H
