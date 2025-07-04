# 🔆 Arduino Potentiometer-Based LED Brightness Controller

This Arduino project demonstrates how to control the brightness of two LEDs using a potentiometer — with one LED following **exponential scaling** and the other following **linear scaling**. It also outputs voltage and brightness information to the Serial Monitor for real-time observation.

---

## 🧰 Components Required

- 1 × Arduino Uno (or compatible)
- 1 × Potentiometer
- 2 × LEDs (Red & White recommended)
- 2 × 1000Ω Resistors
- Breadboard & Jumper Wires
- USB Cable for Programming

---

## ⚙️ Features

- Reads analog input from a potentiometer (A2)
- Calculates actual voltage (0–5V)
- Controls two LEDs:
  - `D11` → **Exponential Brightness**
  - `D10` → **Linear Brightness**
- Outputs live data via Serial Monitor

---

## 🔌 Wiring Diagram

| Component        | Arduino Pin |
|------------------|-------------|
| Potentiometer     | A2 (middle pin) |
| Red LED (Exponential)   | D11 (PWM) |
| White LED (Linear)      | D10 (PWM) |
| Potentiometer +5V       | 5V |
| Potentiometer GND       | GND |

- Ensure each LED is connected in series with a **1000Ω resistor** to ground.

---

## 🧠 Concepts Explored

- **ADC (Analog to Digital Conversion)** — Reads analog voltage (0–5V) and maps it to 0–1023
- **PWM (Pulse Width Modulation)** — Controls LED brightness via analogWrite
- **Exponential Scaling** — Models human eye perception of brightness
- **Serial Communication** — Outputs voltage and brightness for debugging

---

## 📟 Serial Output Example

```bash
potVal: 512 Voltage: 2.50
Exponential Brightness: 31.75
Linear Brightness: 127
```
---
## 🚀 Getting Started

1. Wire the components as shown
2. Upload the sketch to your Arduino board
3. Open the **Serial Monitor** at **9600 baud**
4. Rotate the potentiometer to see:
   - LED brightness change
   - Real-time voltage and brightness in the Serial Monitor

---

## ✅ Improvements & Suggestions

- Replace magic numbers (`127.875`, `255./1023.`) with named constants for readability
- Add LED labels in the Serial Monitor output for clarity
- Include comments for brightness formulas to explain the math
- Include a schematic image or Fritzing diagram for visuals
- Consider using `map()` or `constrain()` functions for cleaner scaling logic
---
## ✨ Author

Created by **Simon Maarawi** — Passionate about hardware & software integration for real-world solutions 🚀🇱🇧
