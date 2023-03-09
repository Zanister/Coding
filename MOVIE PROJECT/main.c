#include <stdio.h>
#include <mysql.h>

int main() {
    MYSQL *conn;
    conn = mysql_init(MySQL);

    if (!mysql_real_connect(conn, "localhost", "root", "kali@123", "mydb", 3306, MySQL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        return 1;
    }

    printf("Connected to the database successfully!\n");
    mysql_close(conn);
    return 0;
}
