import os, time

current_dir = os.getcwd()
compile_errors = 0
total_compiled = 0

print("🎈 CI Started")
ci_started = time.time()
for root, dirs, files in os.walk(".", topdown=False):
    for filename in files:
        try:
            if not (filename.endswith(".c") or filename.endswith(".cpp")):
                continue
            process_start = time.time()
            filepath = os.path.join(root, filename)
            os.chdir(current_dir)
            
            print(f"⚙️ Processing {filepath}")
            with open(filepath) as f:
                first_line = f.readline().strip()
            
            if filename.endswith(".c"):
                compiler = "gcc"
            else:
                compiler = "g++"

            if "nocompile" in first_line:
                # Only check for errors in this file
                exit_code = os.system(f"{compiler}  -fsyntax-only '{filepath}' -lm")
                if exit_code != 0:
                    compile_errors += 1
            elif "cmake" in first_line:
                # Use make to build the project
                os.chdir(os.path.dirname(filepath))
                os.system("cmake .")
                exit_code = os.system("cmake")
                if exit_code != 0:
                    compile_errors += 1
            else:
                # Use gcc to compile the file
                exit_code = os.system(f"{compiler} -o {filepath + '.out'} '{filepath}' -lm")
                if exit_code != 0:
                    compile_errors += 1
            total_compiled += 1
            process_end = time.time()
            print(f"🎉 Done in {process_end - process_start:.4f}s")
        except Exception as e:
            print(f"⚠️ Failed to process {filepath} : {e}")
            compile_errors +=1
ci_end = time.time()
print(f"🎈 CI Finished in {ci_end - ci_started:.4f}s")
print(f"Failed to compile {compile_errors} files, {total_compiled} files in total")
