# import matplotlib.pyplot as plt
# import numpy as np


# xpoints = np.array([0, 6])
# ypoints = np.array([100, 250])

# plt.plot(xpoints, ypoints,'o')
# plt.show()

#Three lines to make our compiler able to draw:
# import matplotlib.pyplot as plt
# import numpy as np

# ypoints = np.array([3, 8, 1, 10])

# plt.plot(ypoints, marker = 'o')
# plt.show()

import matplotlib.pyplot as plt
import numpy as np

y = np.array([50, 25, 25])

plt.pie(y)
plt.show() 