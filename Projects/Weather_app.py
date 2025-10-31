import tkinter as tk
from tkinter import messagebox
from PIL import Image, ImageTk
import requests
from io import BytesIO

API_KEY = "a18c57c70c4a2674d4a605c07e93f93e"  # Replace with your OpenWeatherMap API key
BASE_URL = "https://api.openweathermap.org/data/2.5/weather"
ICON_URL = "http://openweathermap.org/img/wn/{}@2x.png"

def get_weather(city):
    """Fetch current weather from OpenWeatherMap."""
    params = {
        "q": city,
        "appid": API_KEY,
        "units": "imperial"  # changed from 'metric' to 'imperial'
    }
    response = requests.get(BASE_URL, params=params)
    if response.status_code != 200:
        raise ValueError(f"City not found or API error ({response.status_code})")
    return response.json()


def show_weather():
    city = city_entry.get().strip()
    if not city:
        messagebox.showwarning("Input Error", "Please enter a city name")
        return
    try:
        data = get_weather(city)
        name = data["name"]
        temp = data["main"]["temp"]
        humidity = data["main"]["humidity"]
        description = data["weather"][0]["description"].capitalize()
        icon_code = data["weather"][0]["icon"]

        # Update text
        weather_text.set(f"{name}\nTemperature: {round(temp)}°F\nCondition: {description}\nHumidity: {humidity}%")

        # Fetch icon
        icon_response = requests.get(ICON_URL.format(icon_code))
        icon_image = Image.open(BytesIO(icon_response.content))
        icon_photo = ImageTk.PhotoImage(icon_image)
        icon_label.config(image=icon_photo)
        icon_label.image = icon_photo  # keep reference
    except Exception as e:
        messagebox.showerror("Error", str(e))

# --- GUI Setup ---
root = tk.Tk()
root.title("Weather App")
root.geometry("300x300")
root.resizable(False, False)

# Fonts and padding
padx, pady = 10, 10

# City Input
tk.Label(root, text="Enter city name:", font=("Arial", 12)).grid(row=0, column=0, columnspan=2, pady=pady)
city_entry = tk.Entry(root, width=20, font=("Arial", 12))
city_entry.grid(row=1, column=0, columnspan=2, pady=pady)

# Get Weather Button
tk.Button(root, text="Get Weather", font=("Arial", 12), command=show_weather).grid(row=2, column=0, columnspan=2, pady=pady)

# Weather Display
weather_text = tk.StringVar()
weather_label = tk.Label(root, textvariable=weather_text, font=("Arial", 12), justify="left")
weather_label.grid(row=3, column=0, sticky="w", padx=padx)

# Weather Icon
icon_label = tk.Label(root)
icon_label.grid(row=3, column=1, sticky="e", padx=padx)

root.mainloop()
