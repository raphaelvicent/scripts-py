# python automation scripts

import os

os.mkdir("name_dir")     # > create directory
os.listdir()                       # > list directory

os.getcwd()                    # > current directory

path = "/"                      # > actual directory


>> example >>

# Python program to explain os.listdir() method
     
import os
path = "/"
dir_list = os.listdir(path)
print("Files and directories in '", path, "' :")
print(dir_list)