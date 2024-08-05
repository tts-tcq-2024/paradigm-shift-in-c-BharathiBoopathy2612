#include "message_translations.h"
#include "language_settings.h"

const char* translateMessage(const char* message) {
    if (currentLanguage == GERMAN) {
        if (strcmp(message, "is out of range! Too low!") == 0) {
            return "liegt außerhalb des Bereichs! Zu niedrig!";
        } else if (strcmp(message, "is out of range! Too high!") == 0) {
            return "liegt außerhalb des Bereichs! Zu hoch!";
        } else if (strcmp(message, "Warning") == 0) {
            return "Warnung";
        } else if (strcmp(message, "is approaching the low limit!") == 0) {
            return "nähert sich dem unteren Grenzwert!";
        } else if (strcmp(message, "is approaching the high limit!") == 0) {
            return "nähert sich dem oberen Grenzwert!";
        }
        
    }
    // Default to English
    return message;
}
