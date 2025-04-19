import pandas as pd

#  Create the dataset with the given parameters.
# student_data = [
#     [1,'Khushal','male',"Bhavnagar"],
#     [2,'Vishal','male',"Surat"],
#     [3,'Khushi','female',"Vadodara"],
#     [4,'Ravi','male',"Ahmedabad"],
#     [5,'Raj','male',"Bharuch"],
# ]
# df = pd.DataFrame(student_data,columns=['student_id','name','gender','city'])
# print('df',df)

# Read the CSV file
df = pd.read_csv('./student.csv')
# print(df)
# print(df.to_string())
# print(df.head(2))
# print(df.tail(2))
# print(df.shape)
# print(df.Name)
# print(df['Name'])
# print(df[['Name','Gender']])
# print(df.size)
# print(df.dtypes)
# print(df.values)
# print(df.index)
# print(df.loc[0]) # single row
# print(df.iloc[[0,1]]) # single row both SAME iloc == loc
# print(df[df['Gender'] == 'female']) # conditional
# df.insert(0,'Roll_no',[11,12,13,14,15])
# df['Roll_no'] = [11,12,13,14,15]
# df = df.drop(columns=['Gender'])
# del df['Gender']
# df.loc[1] = [9,'RRR','female','Rajkot']
# df.loc[0,'Gender'] = 'female'
print(df)


# # Read the Excel file
# df = pd.read_excel('C:/Users/1/Desktop/Sheet For Onboarding.xlsx')
# df = df.dropna(axis=0, how='all').dropna(axis=1, how='all')

# # Rename columns if they have default "Unnamed" headers
# df.columns = [col if 'Unnamed' not in col else f'Column_{i}' for i, col in enumerate(df.columns)]

# # Save the cleaned DataFrame to a CSV file
# df.to_csv('./Cleaned_Onboarding_Sheet.csv', index=False)

# print("Data has been cleaned and saved to CSV with proper headers.")