import os
import json
import requests
import urllib.request
from bs4 import BeautifulSoup

USER_INFO_URL = 'http://codeforces.com/api/user.status?handle=mo1ein'

try :
    data = json.loads(urllib.request.urlopen(USER_INFO_URL).read().decode('utf-8'))
except:
    print('an error for connecting...')

c=0
t=0
for item in data['result']:
    if item['verdict'] == 'OK':
        Lang = item['programmingLanguage']
        NAME = item['problem']['name']
        INDEX = item['problem']['index']
        SID = item['id']
        Verdict = 'OK'

        if 'contestId' in item['problem']:
            CID = item['problem']['contestId']   

            out = str(CID) + INDEX + '(' + NAME + ')' 
            print(out)

            SUBMISSION_URL = f'https://codeforces.com/contest/{CID}/submission/{SID}'
            page = requests.get(SUBMISSION_URL)
            soup = BeautifulSoup(page.content, 'html5lib')
            mydivs = soup.findAll("pre", {"class": "prettyprint"},text=True)

            CWD = os.getcwd()

            if CID >= 0 and CID <= 99:
                di='0-99'
            elif CID >= 100 and CID <= 199:
                di='100-199'
            elif CID >= 200 and CID <= 299:
                di='200-299'
            elif CID >= 300 and CID <= 399:
                di='300-399'
            elif CID >= 400 and CID <= 499:
                di='400-499'
            elif CID >= 500 and CID <= 599:
                di='500-599'
            elif CID >= 600 and CID <= 699:
                di='600-699'
            elif CID >= 700 and CID <= 799:
                di='700-799'
            elif CID >= 800 and CID <= 899:
                di='800-899'
            elif CID >= 900 and CID <= 999:
                di='900-999'
            elif CID >= 1000 and CID <= 1099:
                di='1000-1099'
            elif CID >= 1100 and CID <= 1199:
                di='1100-1199'
            elif CID >= 1200 and CID <= 1299:
                di='1200-1299'
            elif CID >= 1300 and CID <= 1399:
                di='1300-1399'
            elif CID >= 1400 and CID <= 1499:
                di='1400-1499'

            up = os.path.join(CWD,di)
            new = os.path.join(up,str(CID))
            print(up)
            print(new)

            if not os.path.exists(new):
                os.makedirs(new)

            writeTo = os.path.join(new,f'{out}.cpp')
            print(writeTo)

            commit = 'submit ' + str(SID) + ' for ' + out + ' with lang:' + Lang + ' and verdict:' + Verdict
            print(commit)

            if not os.path.exists(writeTo):
                with open(writeTo,'w') as file :
                    file.write(mydivs[0].text)
                os.system(f'git add * && git commit -m \'{commit}\'')
            else:
                print ('=== file is exist ===')
            c+=1
print(c)

#SUBMISSION_URL = 'http://codeforces.com/contest/{ContestId}/submission/{SubmissionId}'
#SUBMISSION_URL_GYM = 'http://codeforces.com/gym/{ContestId}/submission/{SubmissionId}'
#USER_INFO_URL = 'http://codeforces.com/api/user.status?handle=mo1ein&from=1&count={count}'

