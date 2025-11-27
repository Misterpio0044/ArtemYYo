#! /bin/bash

service apache2 start
service ssh start

chown -R www-data:www-data /var/www/html

while [ 1 == 1 ]; do

	cat -;

	sleep 1;

done;
