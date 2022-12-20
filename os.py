import os
for file in os.listdir(os.getcwd()):
    if 'Copy' in file:
        os.remove(file)