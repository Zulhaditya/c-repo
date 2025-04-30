#include <stdio.h>

// union digunakan untuk menyimpan lebih dari 1 variabel ke address memory yang
// sama
enum notif_type { EMAIL, SMS };

struct Notification {
  char *title;
  char *message;
  enum notif_type type;
  union {
    char *phone_number;
    char *email_address;
  };
};

int main() {
  struct Notification sms;
  struct Notification email;

  sms.type = SMS;
  sms.title = "Greeting";
  sms.message = "Halo, anda mendapat bonus paket data 10GB / Bulan";
  sms.phone_number = "+6285835404216";

  email.type = EMAIL;
  email.title = "Welcome";
  email.message = "Anda berhasil login ke Gmail";
  email.email_address = "zulhaditya@gmail.com";

  printf("## 🔔 NOTIFICATION SMS ##\n");
  printf("to: %s\n", sms.phone_number);
  printf("message: %s\n", sms.message);

  printf("## ✉ NOTIFICATION EMAIL ##\n");
  printf("subject: %s\n", email.title);
  printf("to: %s\n", email.email_address);
  printf("message: %s\n", email.message);

  return 0;
}
