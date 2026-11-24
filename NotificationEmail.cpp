#include "NotificationEmail.h"
#include <iostream>
NotificationEmail::NotificationEmail(string dest, string msg, string obj)
    : Notification(dest, msg) {
    objet = obj;
}
void NotificationEmail::afficher() {
    cout << "EMAIL A : " << destinataire
        << " Objet : " << objet
        << " Message : " << message << endl;
}
void NotificationEmail::envoyer() {
    cout << "Envoi de l'email a " << destinataire << "..." << endl;
}