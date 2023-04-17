import os

compile_errors = 0

for root, dirs, files in os.walk(".", topdown=False):
    for filename in files:
        if not (filename.endswith(".c") or filename.endswith(".cpp")):
            continue
        print(f"Processing {dirs} {filename}")
        filepath = os.path.join(root, filename)
        with open(filepath) as f:
            first_line = f.readline().strip()
        
        if filename.endswith(".c"):
            compiler = "gcc"
        else:
            compiler = "g++"

        if "nocompile" in first_line:
            # Only check for errors in this file
            exit_code = os.system(f"{compiler}  -fsyntax-only {filepath}")
            if exit_code != 0:
                compile_errors += 1
        elif "cmake" in first_line:
            # Use make to build the project
            os.chdir(os.path.dirname(filepath))
            os.system("cmake .")
            exit_code = os.system("make")
            if exit_code != 0:
                compile_errors += 1
        else:
            # Use gcc to compile the file
            exit_code = os.system(f"{compiler} -o {filepath + '.out'} {filepath}")
            if exit_code != 0:
                compile_errors += 1

print(f"Failed to compile {compile_errors} files")
