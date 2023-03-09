#include <iostream>
#include <random>

using namespace std;

// Base class for sensors
class Sensor {
public:
    virtual float read() = 0;
};

// Temperature sensor class
class TemperatureSensor : public Sensor {
public:
    float read() override {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<float> dist(20.0, 30.0);
        return dist(gen);
    }
};

// Humidity sensor class
class HumiditySensor : public Sensor {
public:
    float read() override {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<float> dist(30.0, 70.0);
        return dist(gen);
    }
};

// Light sensor class
class LightSensor : public Sensor {
public:
    float read() override {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<float> dist(0.0, 1000.0);
        return dist(gen);
    }
};

// Barometer sensor class
class BarometerSensor : public Sensor {
private:
    float height;
    float temperature;
public:
    BarometerSensor(float h, float t) : height(h), temperature(t) {}
    float read() override {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<float> dist(900.0, 1100.0);
        return dist(gen);
    }
    float readSeaLevel() {
        // Normalize air pressure reading to sea level
        float pressure = read();
        return pressure / pow(1 - (0.0065 * height / (temperature + 0.0065 * height + 273.15)), 5.257);
    }
};

// Actuator class for controlling greenhouse lights
class LightActuator {
public:
    void turnOn() {
        cout << "Greenhouse lights turned on." << endl;
    }
    void turnOff() {
        cout << "Greenhouse lights turned off." << endl;
    }
};

// Smart device class
class SmartDevice {
private:
    TemperatureSensor tempSensor;
    HumiditySensor humSensor;
    LightSensor lightSensor;
    BarometerSensor baroSensor;
    float threshold;
    bool lightStatus;
    LightActuator lightActuator;
public:
    SmartDevice(float h, float t, float th) : baroSensor(h, t), threshold(th), lightStatus(false) {}
    void turnOn() {
        cout << "Smart device turned on." << endl;
    }
    void turnOff() {
        cout << "Smart device turned off." << endl;
    }
    void setLocation(float h) {
        baroSensor = BarometerSensor(h, baroSensor.read());
    }
    void readSensors() {
        float temperature = tempSensor.read();
        float humidity = humSensor.read();
        float lightIntensity = lightSensor.read();
        float seaLevelPressure = baroSensor.readSeaLevel();
        if (lightIntensity < threshold && !lightStatus) {
            lightActuator.turnOn();
            lightStatus = true;
        }
    }
    void controlDevice() {
        // Simulate control logic for the smart device
        // ...
    }
};

int main() {
    SmartDevice device(5.0, 25.0, 500.0);
    device.turnOn();
    device.readSensors();
    device.controlDevice();
    device.turnOff();
    return 0;
}
