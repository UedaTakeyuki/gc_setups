# -*- coding: utf-8 -*-
# original: https://raw.githubusercontent.com/UedaTakeyuki/slider/master/mh_z19.py
#
# © Takeyuki UEDA 2020 -

import requests
from bs4 import BeautifulSoup

res = requests.get('https://golang.org/dl/')
soup = BeautifulSoup(res.text, 'html.parser')

version = soup.find('div', class_='toggleVisible')['id']

print(version)

# Beautiful Soup reference
# https://qiita.com/Chanmoro/items/db51658b073acddea4ac
