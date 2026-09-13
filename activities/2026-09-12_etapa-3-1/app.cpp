#include "app.h"
#include "notifications.h"
#include <iostream>

using namespace std;

MessageApp::MessageApp(string appname, string initreceiver)
    : Notification(initreceiver) {
  appName = appname;
}

void MessageApp::send() {
  cout << appName << ": Mensagem enviada para " << receiver << endl;
}
