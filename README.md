# Riga Transit Display

A battery-powered e-ink dashboard mounted magnetically on my friedge, showing real-time tram, bus, and trolleybus departures for my two closest stops in Riga, plus current weather so I know if I should grab an umbrella.

## Hardware

- ESP32 Dev Board (FT232 USB-C)
- Waveshare 7.5" e-ink display (075BN-T7-D2, 800x480, UC8179 driver)
- 30 pin FPC breakout board
- 3000mAh battery
- USB-C charger module with protection
- Buck converter (5V regulation)
- Slide switch for power

## Stops

| Stop | ID | Routes |
|------|----|--------|
| Katoļu iela | 3161 | Tram |
| Emīlijas Benjamiņas iela | 0079 | Bus, Trolleybus |

## Data Source

Real-time departures from Rīgas Satiksme open API:

```
https://saraksti.rigassatiksme.lv/departures2.php?stopid=STOPID
```

Response format per departure:
```
vehicle_type, route, direction, seconds_since_midnight, vehicle_id, destination
```

## Libraries

- GxEPD2 (e-ink display)
- Adafruit GFX (fonts and graphics)
- WiFi (ESP32 built-in)
- HTTPClient (ESP32 built-in)

## Wiring

See `docs/wiring.md`
