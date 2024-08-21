from selenium import webdriver
from selenium.webdriver.chrome.service import Service

service = Service('C:/WebDrivers/chromedriver.exe')  # Update this path

# Initialize WebDriver
driver = webdriver.Chrome(service=service)

# Open a website
driver.get("https://www.google.com")

# Close the browser
driver.quit()

