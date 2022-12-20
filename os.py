import os

# old_path = os.getcwd()
for file in os.listdir(os.getcwd()):
    if 'Copy' in file:
        os.remove(file)