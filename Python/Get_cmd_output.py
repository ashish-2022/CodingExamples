
import subprocess

out = subprocess.Popen(['wc', '-l', 'my_text_file.txt'],
           stdout=subprocess.PIPE,
           stderr=subprocess.STDOUT)

stdout,stderr = out.communicate()

print(stdout)
print(stderr)
