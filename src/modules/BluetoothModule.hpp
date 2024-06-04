#ifndef __SPACE_Y_MODULE_BLUETOOTH__
#define __SPACE_Y_MODULE_BLUETOOTH__

#include <ArduinoBLE.h>
#include "lib/kernel/kernel.hpp"
#include "lib/kernel/module.hpp"

struct __BluetoothModule : public Module {
  __BluetoothModule() : Module("NAME") {}

  virtual bool init(unsigned long time) { return true; }
  virtual bool loop(unsigned long time) { return true; }
};
// __BluetoothModule BluetoothModule;

#endif

/*
 * peripheral device
#include <ArduinoBLE.h>

int buttonPin = 2;
boolean ledSwitch;

BLEService LEDService("19B10000-E8F2-537E-4F6C-D104768A1214"); // BLE LED Service
// BLE LED Switch Characteristic - custom 128-bit UUID, read and writable by central
BLEByteCharacteristic LEDCharacteristic("19B10001-E8F2-537E-4F6C-D104768A1214", BLERead | BLENotify | BLEWrite);
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  // begin initialization
  if (!BLE.begin()) {
    Serial.println("starting Bluetooth® Low Energy failed!");
  }
  // set advertised local name and service UUID:
  BLE.setLocalName("Button Device");
  BLE.setAdvertisedService(LEDService);
  // add the characteristic to the service
  LEDService.addCharacteristic(LEDCharacteristic);
  // add service
  BLE.addService(LEDService);
  // start advertising
  BLE.advertise();
  Serial.println("BLE LED Peripheral, waiting for connections....");
}
void loop() {
  // listen for BLE peripherals to connect:
  BLEDevice central = BLE.central();
  // if a central is connected to peripheral:
  if (central) {
    Serial.print("Connected to central: ");
    // print the central's MAC address:
    Serial.println(central.address());
    // while the central is still connected to peripheral:
    while (central.connected()) {

      int buttonState = digitalRead(buttonPin);

      if (buttonState == LOW) {
        ledSwitch = !ledSwitch;
        delay(500);

        if (ledSwitch) {
          Serial.println("ON");
          LEDCharacteristic.writeValue((byte)0x01);
        }
        else {
          LEDCharacteristic.writeValue((byte)0x00);
          Serial.println("OFF");
        }
      }
    }
    // when the central disconnects, print it out:
    Serial.print(F("Disconnected from central: "));
    Serial.println(central.address());
  }
}
*/

/*
 * central device
#include <ArduinoBLE.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  while (!Serial);
  // initialize the BLE hardware
  BLE.begin();
  Serial.println("BLE Central - LED control");
  // start scanning for Button Device BLE peripherals
  BLE.scanForUuid("19b10000-e8f2-537e-4f6c-d104768a1214");
}
void loop() {
  // check if a peripheral has been discovered
  BLEDevice peripheral = BLE.available();
  if (peripheral) {
    // discovered a peripheral, print out address, local name, and advertised service
    Serial.print("Found ");
    Serial.print(peripheral.address());
    Serial.print(" '");
    Serial.print(peripheral.localName());
    Serial.print("' ");
    Serial.print(peripheral.advertisedServiceUuid());
    Serial.println();
    if (peripheral.localName().indexOf("Button Device") < 0) {
      Serial.println("No 'Button Device' in name");
      return;  // If the name doesn't have "Button Device" in it then ignore it
    }
    // stop scanning
    BLE.stopScan();
    controlLed(peripheral);
    // peripheral disconnected, start scanning again
    BLE.scanForUuid("19b10000-e8f2-537e-4f6c-d104768a1214");
  }
}
void controlLed(BLEDevice peripheral) {
  // connect to the peripheral
  Serial.println("Connecting ...");
  if (peripheral.connect()) {
    Serial.println("Connected");
  } else {
    Serial.println("Failed to connect!");
    return;
  }
  // discover peripheral attributes
  Serial.println("Discovering attributes ...");
  if (peripheral.discoverAttributes()) {
    Serial.println("Attributes discovered");
  } else {
    Serial.println("Attribute discovery failed!");
    peripheral.disconnect();
    return;
  }
  // retrieve the LED characteristic
  BLECharacteristic LEDCharacteristic = peripheral.characteristic("19b10001-e8f2-537e-4f6c-d104768a1214");
  if (!LEDCharacteristic) {
    Serial.println("Peripheral does not have LED characteristic!");
    peripheral.disconnect();
    return;
  }
  while (peripheral.connected()) {
    // while the peripheral is connected
    if (LEDCharacteristic.canRead()) {
      byte value = LEDCharacteristic.read();
      LEDCharacteristic.readValue(value);
      //Serial.println(LEDCharacteristic.readValue(value));
      if (value == 0x01) {
        Serial.println("ON");
        digitalWrite(LED_BUILTIN, HIGH);
      }
      else if (value == 0x00) {
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("OFF");
      }
    }
    delay(500);
  }
  Serial.println("Peripheral disconnected");
}
*/