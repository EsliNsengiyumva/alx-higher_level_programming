-- Connect to MySQL server on localhost
mysql -u root -p

-- Run the following queries to check privileges for 'user_0d_1'
SHOW GRANTS FOR 'user_0d_1'@'localhost';

-- Run the following queries to check privileges for 'user_0d_2'
SHOW GRANTS FOR 'user_0d_2'@'localhost';

-- Exit MySQL prompt
exit

