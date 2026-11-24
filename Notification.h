#pragma once
#include <string>

using namespace std;

class Notification {
protected:
    string destinataire;
    string message;

public:
    Notification(string dest, string msg);
    virtual ~Notification();

    virtual void afficher();
    virtual void envoyer() = 0;
};