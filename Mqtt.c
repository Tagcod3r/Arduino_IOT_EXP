import paho.mqtt.client as mqtt
import time
import random

broker = "broker.hivemq.com"
port = 1883
topic = "demo/mqtt/test"

client = mqtt.Client()
client.connect(broker, port, 60)

for i in range(5):
    data = f"Temperature: {round(random.uniform(20, 30), 2)} °C"
    client.publish(topic, data)
    print(f"Published: {data}")
    time.sleep(2)

client.disconnect()
