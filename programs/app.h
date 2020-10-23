#ifndef _INTERVIEW_PRACTICE_PROBLEMS__PROGRAMS__APP_
#define _INTERVIEW_PRACTICE_PROBLEMS__PROGRAMS__APP_

class Application {
  
  private:
  
  /// user account data to be checked by the validation program
  static char * username;
  static char * password;

  /// user data availability status
  static bool isUsernameAvailable;
  static bool isPasswordValid;

  public:

  Application();        /// constructor method
  
  static void setUsername(const char *);
  static const char * getUsername();

  static void setPassword(const char *);
  static const char * getPassword();

  static void checkUsernameAvailability();
  static void checkPasswordAvailability();

  static void updateUsernameAvailabilityStatus();
  static void updatePasswordAvailabilityStatus();

  ~Application();        /// destructor method
};

#endif // _INTERVIEW_PRACTICE_PROBLEMS__PROGRAMS__APP_