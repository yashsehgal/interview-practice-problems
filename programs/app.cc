#include "app.h"
#include "length.h"
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <iostream>

#define __None__ '\0'
#define __FALSE__ false
#define __TRUE__ true

Application::Application() {
  std::cout << "loginfo: Application object has been used by this module" << std::endl;

  /// setting up the class data members with their default values
  Application::username = __None__ ;
  Application::password = __None__;

  Application::isUsernameAvailable = __FALSE__;
  Application::isPasswordValid = __FALSE__;
}

void Application::setUsername(const char * _username_) {
  Application::username = (char *)_username_;
}

const char * Application::getUsername() {
  return (const char *)Application::username;
}

void Application::setPassword(const char * _password_) {
  Application::password = (char *)_password_;
}

const char * Application::getPassword() {
  return (const char *)Application::password;
}

void Application::checkUsernameAvailability() {
  Length _length;
  int length = _length.getLength((const char *)Application::username);

  std::fstream file;
  file.open("usernames.txt", std::ios::in);

  if (file.is_open()) {
    while (file.eof()) {
      // char * bufferText = file.get((char *)Application::username);
      if (file.read((char *)&Application::username, sizeof(Application::username))) {
        Application::isUsernameAvailable = __TRUE__;
      }
    }
  } else {
    std::cout << "internal_error: method is unable to open the file to check the username availability..." << std::endl;
  }
}