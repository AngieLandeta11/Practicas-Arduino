#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "INFINITUM1C61_2.4";
const char* password = "E3GDXUxPd6";

// Pin para controlar el ventilador
const int pinVentilador = 19;

// Create an instance of the WiFi server
WiFiServer server(80);

void setup() {
  // Start the serial communication
  Serial.begin(115200);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  // Wait for the Wi-Fi connection to be established
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  // Print the IP address of the ESP32
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Configurar el pin del ventilador como salida digital
  pinMode(pinVentilador, OUTPUT);

  // Start the server
  server.begin();
}

void loop() {
  // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // Wait for the client to send data
  Serial.println("new client");
  while (!client.available()) {
    delay(1);
  }

  // Read the first line of the request
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

  // Check if the request is for the fan
  if (request.indexOf("/fan/on") != -1) {
    // Turn on the fan
    digitalWrite(pinVentilador, HIGH); // Encender el ventilador
    Serial.println("Fan turned on");
  } else if (request.indexOf("/fan/off") != -1) {
    // Turn off the fan
    digitalWrite(pinVentilador, LOW); // Apagar el ventilador
    Serial.println("Fan turned off");
  }

  // Send the response back to the client
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<head><title>ESP32 Fan Control</title></head>");
  client.println("<body>");
  client.println("<h1>ESP32 Fan Control</h1>");
  client.println("<p><a href=\"/fan/on\">Turn on fan</a></p>");
  client.println("<p><a href=\"/fan/off\">Turn off fan</a></p>");
  client.println("</body>");
  client.println("</html>");

  delay(1);
  Serial.println("Client disconnected");
}