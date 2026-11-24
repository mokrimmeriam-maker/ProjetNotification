#pragma once
#include "Notification.h"
class NotificationSMS : public Notification {
private:
    string operateur;
public:
    NotificationSMS(string num, string msg, string op);
    void afficher() override;
    void envoyer() override;
};