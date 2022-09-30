import subprocess

profiles = subprocess.check_output(["netsh", "wlan", "show", "profiles"]).decode("utf-8").split("\n")
names = [x.split(":")[1][1:-1] for x in profiles if "All User Profile" in x]

for name in names:
    keys = subprocess.check_output(["netsh", "wlan", "show", "profile", name, "key=clear"]).decode("utf-8").split("\n")
    keys = [key.split(":")[1][1:-1] for key in keys if "Key Content" in key]
    
    try:
        print(f' Wifi Name: {name}\t Password: {keys[0]}')
    except IndexError:
        print(f' Wifi Name: {name}\t Password: Can\'t find')
