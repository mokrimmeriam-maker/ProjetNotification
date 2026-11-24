#include "NotificationPush.h"
#include <iostream>
NotificationPush::NotificationPush(string idUser, string msg, string app)
    : Notification(idUser, msg) {
    application = app;
}
void NotificationPush::afficher() {
    cout << "PUSH  Utilisateur : " << destinataire
        << " Application : " << application
        << " Message : " << message << endl;
}

void NotificationPush::envoyer() {
    cout << "Envoi notification push sur " << application << " pour " << destinataire << "..." << endl;
}