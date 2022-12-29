import os

# 要插入的注释
comment = """/*
	Warning! All the contents are automatically generated by KakennL which might be not correct!
   ▄▄▄▄▄▄▄  ▄  ▄         ▄▄▄▄▄▄▄  
   █ ▄▄▄ █ ▄▄█▀█ ▄▀▀▀▄▀▀ █ ▄▄▄ █  
   █ ███ █  ▀█▀ ▄██▀▄█▀  █ ███ █  
   █▄▄▄▄▄█ ▄▀▄ ▄ █▀▄ ▄▀█ █▄▄▄▄▄█  
   ▄▄▄ ▄▄▄▄█▀█▄▀█▄███ ▄█▄▄   ▄    
   ██▄▀▄█▄▀▀▄▀▀ ▀█▀▀▄   ▀█▄▄▀▄▄█  
      █  ▄▄▄  ▀▄█ █ ▀▀██▄█  ▄ █▄  
   ▀ █▄▀ ▄█▀█▄██▀▀ ▄▀█ ▀▀▀▄ █ ▄█  
   ▄ ▄▄█▄▄ ▄▀▀▄▀█▀█▄█ ▄██▄▄ █ █▄  
   ▄▀███ ▄▄ ▄▀▀ █▀▀█ ▄ ▀▀█  ▀▀▄█  
   ▄▀▀██▄▄ █▀▄▀▄█▄ ▀▀  ▄▄▄▄█▀ ▀   
   ▄▄▄▄▄▄▄ █  ███▀ ▀▀███ ▄ █▄▀██  
   █ ▄▄▄ █ █  ▄█▀▀▄██▀ █▄▄▄█▀ █   
   █ ███ █ ▄▀▄▀   ▀█▀ █▀▄ ▀█▄▀▀█  
   █▄▄▄▄▄█ █▀▀ ▄█▀ ▄▀ ▀█ ▄▄▄▄ █▄  
                                  
*/"""

# 遍历当前目录下的所有文件
for file_name in os.listdir():
    # 如果文件是 .c 文件，打开它并在开头插入注释
    if file_name.endswith(".c"):
        with open(file_name, "r+") as f:
            # 将文件内容读入内存
            content = f.read()
            # 在文件开头插入注释
            content = comment + "\n" + content
            # 将修改后的内容写回文件
            f.seek(0)
            f.write(content)
