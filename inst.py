from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.keys import Keys
import time

# Replace with your Instagram credentials
USERNAME = "k_fkonk"
PASSWORD = "sadek@_/123456@"

# Set up the ChromeDriver path using the Service class
service = Service('C:/WebDrivers/chromedriver.exe')  # Update this path to the location of your chromedriver

# Initialize WebDriver
driver = webdriver.Chrome(service=service)

# Open Instagram
driver.get("https://www.instagram.com")

# Log in
time.sleep(2)
username_input = driver.find_element_by_name("k_fkonk")
password_input = driver.find_element_by_name("sadek@_/123456@")
username_input.send_keys(USERNAME)
password_input.send_keys(PASSWORD)
password_input.send_keys(Keys.RETURN)

# Wait for login to complete
time.sleep(5)

# Navigate to the profile page
driver.get(f"https://www.instagram.com/{USERNAME}/")

# Access liked posts
driver.get("https://www.instagram.com/accounts/activity/?type=liked")

time.sleep(5)

# Unlike posts (this is a simplified version)
liked_posts = driver.find_elements_by_css_selector("article div div a")

for post in liked_posts:
    post.click()
    time.sleep(2)
    unlike_button = driver.find_element_by_xpath("//span[@aria-label='Unlike']")
    unlike_button.click()
    time.sleep(1)
    driver.back()
    time.sleep(2)

# Close the browser
driver.quit()
