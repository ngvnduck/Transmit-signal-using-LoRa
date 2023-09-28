# Transmit-signal-using-LoRa

Small project using LoRa modules and Arduino Uno to transmit temperature, humidity signal from sensor to a LCD.

- Wiring for transmitter:
  
  ![image](https://github.com/ngvnduck/Transmit-signal-using-LoRa/assets/119344467/9e56fca9-8529-4cd4-9241-8a51541a060a)

  **LoRa SX1278 Module**     **Arduino Uno**
        3.3V	                  3.3V
        GND	                    GND
        NSS	                    D10
        DIO0	                  D2
        SCK	                    D13
        MISO	                  D12
        MOSI	                  D11
        RST	                    D9
  **DHT 11 Sensor**	          **Arduino Uno**
        VCC	                    5V
        GND	                    GND
        DATA	                  A0

- Wiring for receiver:

  ![image](https://github.com/ngvnduck/Transmit-signal-using-LoRa/assets/119344467/8e51b9f1-b882-4f53-812b-26f232379643)

  **LoRa SX1278 Module**	    **Arduino Uno**
        3.3V	                  3.3V
        GND	                    GND
        NSS	                    D10
        DIO0	                  D2
        SCK	                    D13
        MISO	                  D12
        MOSI	                  D11
        RST	                    D9
     **LCD 1602	**            **Arduino Uno**
        GND	                    GND
        VDD	                    5V
        VO	                    Rheostat's 2nd pin
        RS	                    D8
        RW	                    GND
        E	                      D7
        D4	                    D6
        D5	                    D5
        D6	                    D4
        D7	                    D3
        A	                      5V
        K	                      GND

