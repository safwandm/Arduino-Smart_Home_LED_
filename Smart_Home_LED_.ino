
#define BLYNK_PRINT Serial// digunakan untuk monitor blynk di serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"


#include <ESP8266WiFi.h> //file untuk modul wifi
#include <BlynkSimpleEsp8266.h> //file untuk blynk

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "zMlosSJ-Kq5MgKkD5smdE6Z_OzgHBxBI"; // token yang dikirim dari blynk ke email masing masing

// Your WiFi credentialsl.
// Set password to "" for open networks.
char ssid[] = "AndroidAP3F5F";
char pass[] = "safwan030804";

void setup()
{
  // Debug console
  Serial.begin(9600); // untuk moonitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan password
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop() // fungsi utama dijalankan berulang kali
{
  Blynk.run(); // perintah untuk menjalankan blynk
}
