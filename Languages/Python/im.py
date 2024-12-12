import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="kmakwana101"
)
mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE mydatabase2")
# mycursor = mydb.cursor()

# sql = "INSERT INTO customer (customer,mode,city) VALUES (%s, %s, %s)"
# val = ("Johafdn", "Highasdfway 21","asasdfdf")

# mycursor.execute(sql, val)
# mydb.commit()
