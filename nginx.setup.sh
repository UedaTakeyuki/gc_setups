# NGINX, php
sudo apt-get install nginx
sudo apt-get install php5-fpm
sudo sed -i 's|index index.html index.htm|index index.php index.html index.htm|g' /etc/nginx/sites-enabled/default
sudo sed -i 's|#location ~ \\\.php$ {|location ~ \\\.php$ {|' /etc/nginx/sites-enabled/default
sudo sed -i 's|#\tinclude snippets/fastcgi-php.conf;|\tinclude snippets/fastcgi-php.conf;|g' /etc/nginx/sites-enabled/default
sudo sed -i 's|#\tfastcgi_pass unix:/var/run/php5-fpm.sock;|\tfastcgi_pass unix:/var/run/php5-fpm.sock; }|g' /etc/nginx/sites-enabled/default
