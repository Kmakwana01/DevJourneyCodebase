import pymysql

def create_connection(host_name, user_name, user_password, db_name, port):
    connection = None
    try:
        connection = pymysql.connect(
            host=host_name,
            user=user_name,
            password=user_password,
            database=db_name,
            port=port  # Specify the custom port here
        )
        print("Connection to MySQL DB successful")
    except pymysql.MySQLError as e:
        print(f"The error '{e}' occurred")

    return connection

# Example usage
connection = create_connection("127.0.0.1", "root", "123456", "dd_billavenue", 3008)  # Use port 3008
