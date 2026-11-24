#pragma once
#include "Notification.h"
class NotificationEmail : public Notification {
private:
    string objet;
public:
    NotificationEmail(string dest, string msg, string obj);
    void afficher() override;
    void envoyer() override;
};