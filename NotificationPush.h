#pragma once
#include "Notification.h"
class NotificationPush : public Notification {
private:
    string application;
public:
    NotificationPush(string idUser, string msg, string app);
    void afficher() override;
    void envoyer() override;
};