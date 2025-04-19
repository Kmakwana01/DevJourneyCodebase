import numpy as np

# Creating a 3-dimensional array from a list of lists
list1 = [[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]]
array1 = np.array(list1)

print('Array type:', type(array1))  # Expected output: <class 'numpy.ndarray'>
print("NumPy version:", np.__version__)
print('Dimensions of array1:', array1.ndim)  # Outputs the number of dimensions

# Setting a minimum number of dimensions with ndmin
arr = np.array([1, 2, 3, 4], ndmin=5)
print('Number of dimensions of arr:', arr.ndim)  # Expected: 5 dimensions

# Indexing and Slicing arrays
arr2 = np.array([1, 2, 3, 4, 5, 6, 7])
print('Slice arr2[-3:-1]:', arr2[-3:-1])  # Slices elements from the 3rd last to the 2nd last
print('Reverse arr2:', arr2[::-1])  # Reverses the array
print('Data type of arr2:', arr2.dtype)

# Copying and viewing arrays
x = arr2.copy()  # Creates a copy of arr2
y = arr2         # Creates a reference to arr2
z = arr2.view()  # Creates a view (shallow copy) of arr2

print('arr2:', arr2)
print('Copy of arr2 (x):', x)

# Checking if arrays share the same memory location
print('Is x the same object as arr2?', x is arr2)  # False, x is a copy
print('Is y the same object as arr2?', arr2 is y)  # True, y is a reference to arr2
print('Base of x:', x.base)  # None, as x is a deep copy
print('Base of z:', z.base)  # arr2, as z is a view

# Array shape and reshaping
arr3 = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
print('Shape of arr3:', arr3.shape)  # Outputs (2, 4), 2 rows and 4 columns

arr4 = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
newarr = arr4.reshape(4, 3)  # Reshapes arr4 into a 4x3 matrix
print('Reshaped array (newarr):', newarr)

# Concatenation and stacking arrays
arr5 = np.array([1, 2, 3])
arr6 = np.array([4, 5, 6])

concatenate_array = np.concatenate((arr5, arr6))
stack_array = np.stack((arr5, arr6), axis=1)
hstack_array = np.hstack((arr5, arr6))
vstack_array = np.vstack((arr5, arr6))
dstack_array = np.dstack((arr5, arr6))

print('Concatenated array:', concatenate_array)  # Combines elements
print('Stacked array (along new axis):', stack_array)
print('Horizontally stacked array:', hstack_array)  # Joins arrays along x-axis
print('Vertically stacked array:', vstack_array)    # Joins arrays along y-axis
print('Depth stacked array:', dstack_array)         # Joins arrays along depth

# Splitting arrays
arr8 = np.array([1, 2, 3, 4, 5, 6])
array_split = np.array_split(arr8, 3)  # Splits arr8 into 3 equal parts
print('Split array:', array_split)

# Searching arrays
arr9 = np.array([1, 2, 3, 4, 5, 4, 4])
indices_of_4 = np.where(arr9 == 4)
print('Indices where arr9 == 4:', indices_of_4)

even_indices = np.where(arr9 % 2 == 0)
print('Indices of even elements in arr9:', even_indices)

# Sorting arrays
arr10 = np.array([3, 2, 0, 1])
sorted_arr10 = np.sort(arr10)
print('Sorted arr10:', sorted_arr10)

# Filtering arrays
arr11 = np.array([41, 42, 43, 44])
filter_mask = [True, False, True, False]
filtered_arr = arr11[filter_mask]
print('Filtered array:', filtered_arr)  # Only includes elements where mask is True

# Broadcasting: Operations between arrays of different shapes
arr7 = np.array([1, 2, 3])
arr8 = np.array([[10], [20], [30]])
broadcasted_sum = arr7 + arr8  # Adds arr7 to each row of arr8 due to broadcasting
print('Broadcasted sum:', broadcasted_sum)

# Mathematical and statistical operations
arr12 = np.array([1, 2, 3, 4, 5])
print('Sum of arr12:', np.sum(arr12))
print('Mean of arr12:', np.mean(arr12)) #  3
print('Standard deviation of arr12:', np.std(arr12))
print('Product of arr12:', np.prod(arr12))

# Linear algebra operations
arr13 = np.array([[1, 2], [3, 4]])
arr14 = np.array([[5, 6], [7, 8]])
print('Dot product of arr13 and arr14:', np.dot(arr13, arr14))
print('Matrix multiplication of arr13 and arr14:', np.matmul(arr13, arr14))
print('Transpose of arr13:', arr13.T)

# Generating random numbers
random_arr = np.random.rand(3, 3)  # 3x3 array with random floats in [0, 1)
randint_arr = np.random.randint(10, size=(2, 2))  # Random integers up to 10 in a 2x2 array
choice_arr = np.random.choice([1, 2, 3, 4], size=5)  # Random choice from list
print('Random array (3x3):', random_arr)
print('Random integer array (2x2):', randint_arr)
print('Random choice array:', choice_arr)

# Python vs. NumPy data types
# Python: integer, float, string, boolean, complex.
# NumPy: i - integer, b - boolean, u - unsigned integer, f - float, c - complex, 
#        m - timedelta, M - datetime, O - object, S - string, U - unicode string, V - void

# Memory-efficient array creation
zero_arr = np.zeros((2, 2))  # Creates a 2x2 array of zeros
one_arr = np.ones((3, 3))  # Creates a 3x3 array of ones
empty_arr = np.empty((2, 3))  # Creates an uninitialized 2x3 array
print('Zero array (2x2):', zero_arr)
print('One array (3x3):', one_arr)
print('Empty array (2x3):', empty_arr)

# Advanced array manipulations
flat_arr = arr3.flatten()  # Flatten array into 1D
transposed_arr3 = arr3.T  # Transpose of arr3
print('Flattened arr3:', flat_arr)
print('Transposed arr3:', transposed_arr3)

# Additional reshaping techniques
reshaped_arr = np.arange(1, 13).reshape(3, 4)  # Creates and reshapes an array
print('Reshaped array (3x4):', reshaped_arr)

# Using masked arrays for filtering
masked_arr = np.ma.masked_where(arr11 > 42, arr11)  # Masks values in arr11 greater than 42
print('Masked array:', masked_arr)

# Statistical Operations on 1D Array
# 1. max()
# 1. min()
# 1. sum()
# 1. mean()
# 1. median()
# 1. prod()
# 1. var()
# 1. std()

# Create a sample 1D array for demonstration
arr15 = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])

# 1. max() - Returns the maximum value in the array.
# The max() function is used to find the largest element in the 1D array.
max_value = arr15.max()
print(f"Maximum value: {max_value}")  # Output: 10

# 2. min() - Returns the minimum value in the array.
# The min() function is used to find the smallest element in the 1D array.
min_value = arr15.min()
print(f"Minimum value: {min_value}")  # Output: 1

# 3. sum() - Returns the sum of all elements in the array.
# The sum() function is used to calculate the total sum of the elements in the array.
sum_value = arr15.sum()
print(f"Sum of all elements: {sum_value}")  # Output: 55

# 4. mean() - Returns the arithmetic mean (average) of the array.
# The mean() function is used to find the average of all the elements. sumOfArray/numberOfArrayElements
mean_value = arr15.mean()
print(f"Mean (average) value: {mean_value}")  # Output: 5.5

# 5. median() - Returns the median value of the array.
# The median() function finds the middle value of the array when sorted.
# If the array has an odd number of elements, it returns the middle element.
# If the array has an even number of elements, it returns the average of the two middle elements. # center value
median_value = np.median(arr15)
print(f"Median value: {median_value}")  # Output: 5.5

# 6. prod() - Returns the product of all elements in the array.
# The prod() function calculates the product of all the elements in the array. #first sort after -> 1*2*3*.....10
prod_value = arr15.prod()
print(f"Product of all elements: {prod_value}")  # Output: 3628800

# 7. var() - Returns the variance of the array.
# Variance measures how much the elements in the array deviate from the mean.
# A low variance means the numbers are close to the mean, and high variance means they are spread out.
variance_value = arr15.var()
print(f"Variance value: {variance_value}")  # Output: 8.25

# 8. std() - Returns the standard deviation of the array.
# Standard deviation is the square root of the variance and provides a measure of spread of the elements.
# It tells you how much the values in the array deviate from the mean on average.
std_dev_value = arr15.std()
print(f"Standard Deviation: {std_dev_value}")  # Output: 2.8722813232690143

# Python Data Types:
# - str: for text (e.g., "Hello")
# - int: for integers (e.g., -1, 0, 100)
# - float: for real numbers (e.g., 1.23, 45.6)
# - bool: for boolean values (True or False)
# - complex: for complex numbers (e.g., 3 + 4j)

# NumPy Data Types:
# - 'i' - integer
# - 'b' - boolean
# - 'u' - unsigned integer
# - 'f' - float
# - 'c' - complex float
# - 'm' - timedelta
# - 'M' - datetime
# - 'O' - object
# - 'S' - byte string
# - 'U' - Unicode string
# - 'V' - void (for raw data)

# The code demonstrates various functionalities of NumPy arrays such as array creation, reshaping, concatenation, 
# stacking, splitting, searching, sorting, and filtering, with clear comments on how each operation works.
