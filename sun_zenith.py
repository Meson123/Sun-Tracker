import pvlib
import pandas as pd
from datetime import datetime
import numpy as np
import matplotlib.pyplot as plt

# Define the location of the suntracker (latitude, longitude, altitude)
location = pvlib.location.Location(latitude=35.0, longitude=-120.0, altitude=100)

# Define the time range for the simulation (one day at hourly intervals)
times = pd.date_range(start=datetime(2024, 6, 21, 0), end=datetime(2024, 6, 21, 23, 59), freq='H', tz='UTC')

# Calculate the sun's position
sun_position = location.get_solarposition(times)

# Function to simulate the suntracker's movement
def simulate_suntracker(sun_position):
    # Initialize arrays to store suntracker angles
    tracker_tilt = []
    tracker_azimuth = []

    for i, row in sun_position.iterrows():
        # The suntracker aims to align with the sun's position
        tilt = row['apparent_zenith']
        azimuth = row['azimuth']

        # Add some constraints (e.g., max tilt angle)
        max_tilt = 90
        if tilt > max_tilt:
            tilt = max_tilt

        tracker_tilt.append(tilt)
        tracker_azimuth.append(azimuth)

    return tracker_tilt, tracker_azimuth

# Simulate the suntracker's movement
tracker_tilt, tracker_azimuth = simulate_suntracker(sun_position)

# Plot the simulation results
plt.figure(figsize=(12, 6))

plt.subplot(2, 1, 1)
plt.plot(times, sun_position['apparent_zenith'], label='Sun Zenith')
plt.plot(times, tracker_tilt, label='Tracker Tilt', linestyle='--')
plt.xlabel('Time')
plt.ylabel('Angle (degrees)')
plt.title('Sun Zenith and Tracker Tilt Angles')
plt.legend()

plt.subplot(2, 1, 2)
plt.plot(times, sun_position['azimuth'], label='Sun Azimuth')
plt.plot(times, tracker_azimuth, label='Tracker Azimuth', linestyle='--')
plt.xlabel('Time')
plt.ylabel('Angle (degrees)')
plt.title('Sun Azimuth and Tracker Azimuth Angles')
plt.legend()

plt.tight_layout()
plt.show()
