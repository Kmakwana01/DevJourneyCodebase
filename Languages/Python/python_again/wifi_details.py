import subprocess
import csv

# Command to list Wi-Fi networks
command = "netsh wlan show networks mode=bssid"

try:
    # Run the command and capture output
    output = subprocess.check_output(command, shell=True, text=True)
    
    # Debugging: Print the command output
    print("Command Output:")
    print(output)

    # Parse and save Wi-Fi details
    wifi_details = []
    for line in output.split("\n"):
        if "SSID" in line or "Signal" in line:
            wifi_details.append(line.strip())
    
    # Debugging: Print parsed Wi-Fi details
    print("Parsed Wi-Fi Details:")
    print(wifi_details)

    # Save to CSV file
    if wifi_details:
        with open("wifi_data.csv", "w", newline="") as file:
            writer = csv.writer(file)
            for detail in wifi_details:
                writer.writerow([detail])
        print("Wi-Fi data saved to wifi_data.csv")
    else:
        print("No Wi-Fi details found.")

except subprocess.CalledProcessError as e:
    print("Error running the command:", e)
