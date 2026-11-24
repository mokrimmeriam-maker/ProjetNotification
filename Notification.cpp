#include "Notification.h"
#include <iostream>
Notification::Notification(string dest, string msg) {
    destinataire = dest;
    message = msg;
}
Notification::~Notification() {
}
void Notification::afficher() {
    cout << "Destinataire : " << destinataire << "  ,Message : " << message << endl;
}