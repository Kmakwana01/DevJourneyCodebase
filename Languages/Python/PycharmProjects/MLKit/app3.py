from pathlib import Path
path = Path("pk_demo")
print(path.exists())

path = Path()
for file in path.glob('*'):
    print(file)
