"""# A oop file is being made 
class car:
    def __init__(self,x,y):
        self.x=x*x
        self.y=y*y
    def aman(self):
        print(type(self.x))
        for i in self.x:
            print("hello world this is the case for the soemkthing that should be done for you for the file and the this is the nice names should")    

p=car(2,3)
print(p.y,p.x)
print("hello world just like ")
"""
import pyaudio
import numpy as np
import math

# Define constants
SAMPLE_RATE = 44100
DURATION = 5
FREQUENCY = 440

# Generate audio samples for a sine wave
def generate_samples():
    phase = 0
    for _ in range(int(DURATION * SAMPLE_RATE)):
        sample = np.sin(phase * 2 * math.pi * FREQUENCY / SAMPLE_RATE)
        phase += 1.0
        if phase >= 1.0:
            phase -= 1.0
        yield sample

# Initialize PyAudio
p = pyaudio.PyAudio()

# Open a stream
stream = p.open(format=pyaudio.paFloat32,
                channels=1,
                rate=SAMPLE_RATE,
                output=True)

# Play the sound
samples = generate_samples()
for sample in samples:
    stream.write(sample.astype(np.float32).tobytes())

# Close the stream
stream.stop_stream()
stream.close()

# Terminate PyAudio
p.terminate()
