import mysql.connector
mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="kmakwana@123",
  database = "khushal"
)

mycursor = mydb.cursor()
mycursor.execute("drop table khuh")
