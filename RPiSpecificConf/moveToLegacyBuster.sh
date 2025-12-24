# move default repository from http://raspbian.raspberrypi.org/raspbian/ to http://legacy.raspbian.org/raspbian/
awk '{
  if ($0 !~ /^#/){
    if ($0 ~ /http:\/\/raspbian.raspberrypi.org/){
      buff = $0;
      sub("raspbian.raspberrypi.org", "legacy.raspbian.org", buff);
      print buff "\n# "
    }
    print
  } else {
    print
  }
}' /etc/apt/sources.list > /tmp/tmp.txt

sudo mv /tmp/tmp.txt /etc/apt/sources.list
