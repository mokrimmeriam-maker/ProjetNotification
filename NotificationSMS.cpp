#include "NotificationSMS.h"
#include <iostream>
NotificationSMS::NotificationSMS(string num, string msg, string op)
    : Notification(num, msg) {
    operateur = op;
}
void NotificationSMS::afficher() {
    cout << "SMS Numero : " << destinataire
        << " Operateur : " << operateur
        << " Message : " << message << endl;
}
void NotificationSMS::envoyer() {
    cout << "Envoi du SMS au " << destinataire << " via " << operateur << "..." << endl;
}