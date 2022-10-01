# importing the subprocess module
import subprocess
  
# using the check_output() for having the network term retrieval
devices = subprocess.check_output(['netsh','wlan','show','network'])
  
# decode it to strings
devices = devices.decode('ascii')
devices= devices.replace("\r","")
  
# displaying the information
print(devices)
