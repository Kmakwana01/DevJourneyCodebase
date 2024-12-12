import os
i=0

if(not os.path.exists("data")):
    os.mkdir("data")

for i,index in enumerate(range(1,500)):
    os.mkdir(f"data/{index}")