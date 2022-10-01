import webbrowser
url = input("enter video url : ")
url = url[:12]+"ss"+url[12:]
webbrowser.open(url)