import os
i=0

if(not os.path.exists("data")):
    os.mkdir("data")

for i,index in enumerate(range(1,101)):
    if(not os.path.exists(f"data/{index}")):
        os.mkdir(f"data/{index}")
        
    