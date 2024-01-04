# Transmit-signal-using-LoRa

Small project using LoRa modules and Arduino Uno to transmit temperature, humidity signal from sensor to a LCD.

- Wiring for transmitter module:
  
  ![image](https://github.com/ngvnduck/Transmit-signal-using-LoRa/assets/119344467/9e56fca9-8529-4cd4-9241-8a51541a060a)

  **LoRa SX1278 Module**     **Arduino Uno**<br>
        3.3V --- 	                  3.3V<br>
        GND --- 	                    GND<br>
        NSS	 ---                     D10<br>
        DIO0	 ---                   D2<br>
        SCK	    ---                  D13<br>
        MISO	  ---                  D12<br>
        MOSI	   ---                 D11<br>
        RST	     ---                 D9<br><br>
  **DHT 11 Sensor**	          **Arduino Uno**<br>
        VCC	  ---                    5V<br>
        GND	   ---                   GND<br>
        DATA	  ---                  A0<br>

- Wiring for receiver module:

  ![image](https://github.com/ngvnduck/Transmit-signal-using-LoRa/assets/119344467/8e51b9f1-b882-4f53-812b-26f232379643)

  **LoRa SX1278 Module**	    **Arduino Uno**<br>
        3.3V --- 	                  3.3V<br>
        GND	  ---                    GND<br>
        NSS	   ---                   D10<br>
        DIO0	   ---                 D2<br>
        SCK	     ---                 D13<br>
        MISO	  ---                  D12<br>
        MOSI	  ---                  D11<br>
        RST	     ---                 D9<br><br>
     **LCD 1602**            **Arduino Uno**<br>
        GND	   ---                   GND<br>
        VDD	    ---                  5V<br>
        VO	    ---                  Rheostat's 2nd pin<br>
        RS	    ---                  D8<br>
        RW	   ---                   GND<br>
        E	     ---                   D7<br>
        D4	    ---                  D6<br>
        D5	    ---                  D5<br>
        D6	     ---                 D4<br>
        D7	     ---                 D3<br>
        A	      ---                  5V<br>
        K	      ---                  GND<br>

