#define PIN_LED_ANALOG_11 11 //le numéro de la broche sur laquelle la lampe 2  est branchée
#define PIN_LED_DIGITAL_13 13 // Le numéro de la broche sur laquelle la lampe 1 
//pin 13 est la valeur par défaut intégrée dans la carte LED_BUILTIN
int PAS = 2; // incrément de l'intensité
char data; // variable contenant le caractère lu
int intensite = 0; // variable contenant l'intensité de la deuxième lampe
const int INTENSITE_MAX = 255; //changer à 100 pour les LED

void setup() {
  // Configure la broche sur laquelle est reliée notre LED  en sortie
  pinMode(PIN_LED_DIGITAL_13, OUTPUT);
  //La LED reliée à la broche 13 est intialisé à l'état LOW
  digitalWrite(PIN_LED_DIGITAL_13, LOW);

  //La LED reliée à la broche 13 est intialisé à l'état LOW
  pinMode(PIN_LED_ANALOG_11, OUTPUT);
  analogWrite(PIN_LED_ANALOG_11, LOW);
  Serial.begin(9600); //Permet d'initialiser le moniteur série à 9600 bauds
}

void loop() {
  if (Serial.available()) {
    //Si un message a été reçu  faire ceci
    data = Serial.read();
    // controler la lampe 1 reliée à la broche 13
    if (data == '1') //si le caractère lu est égale à 1
    {
      digitalWrite(PIN_LED_DIGITAL_13, HIGH); // alumer la lampe
      Serial.write('1'); //envoyer le nouvel état de la lampe
    }
    else if (data == '0') //si le caractère lu est égale à 0
    {
      digitalWrite(PIN_LED_DIGITAL_13, LOW); //éteindre la lampe
      Serial.write('0'); //envoyer le nouvel état de la lampe
    }
    // Régler l'intensité de la luminosité de la deuxième lampe branchée sur la broche 11
    else if (data == '2') //si le caractère reçu est égale à 2
    {
      intensite += PAS; // incrémenter l'intesité de la lumière
      if (intensite > INTENSITE_MAX) // nouvelle valeur de l'intesité ne doit pas dépasser l'intensité max=255
        intensite = INTENSITE_MAX;
        
      analogWrite(PIN_LED_ANALOG_11, intensite);
      //Serial.write(intensite); //(écrire dans le port série, utiler pour débogage)
    }
    else if (data == '3')
    {
      intensite -= PAS;
      if (intensite < 0) 
        intensite = 0;

      analogWrite(PIN_LED_ANALOG_11, intensite);
      //Serial.write(intensite); //(écrire dans le port série, utiler pour débogage)
    }
  }
}


