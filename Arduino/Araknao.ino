/*
 * Programmer: Lorenzo Daidone
 * Date: 24/01/2017
 */

#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h>
#include <string.h>

#define PORT      7891
#define BAUD_RATE 115200

YunServer server(PORT);

void setup()
{
  Serial.begin(BAUD_RATE);
  Serial.println("Bridge begin");
  Bridge.begin();
  Serial.println("Bridge started");
  server.noListenOnLocalhost();
  server.begin();
  pinMode(2,OUTPUT);
}

void loop()
{
  char echo_message[50];  // buffer

  Serial.println("Waiting server");         // for debug

  YunClient client = server.accept();

  if (client.connected())
  {
    while(client.connected())
    {
      if(client.available())
      {
        Serial.println("Client available"); // for debug
        Serial.print("Received: ");         // for debug
        char received = client.read();
        Serial.println(received);           // for debug
        
        if(received==48+1)
        {
          
          digitalWrite(2,HIGH);
          Serial.println("Accesa luce 1 da Nao");
          }
       else if (received==48+2)
        {
          
          digitalWrite(2,LOW);
          Serial.println("Accesa luce 1 da Nao");
          }
          //QUI eventali altre luci
          {
            Serial.println("Error! Char not properly received");      // for debug
            strcpy(echo_message, "Error! Char not properly received");
            client.write(echo_message, 50);
            break;
          }
        
      }
    }
    client.stop();              // disconnects from the server
  }

  else
    Serial.println("\tNo client connected");      // for debug

  delay(150);
}
