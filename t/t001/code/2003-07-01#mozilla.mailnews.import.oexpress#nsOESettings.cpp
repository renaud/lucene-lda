nscomptr
nscore
nsreadableutils
nsoeimport
nsicomponentmanager
nsiservicemanager
nsiimportservice
nsoeregutil
nsimsgaccountmanager
nsimsgaccount
nsiimportsettings
nsoesettings
nsmsgbasecid
nsmsgcompcid
nsismtpservice
nsismtpserver
nsoestringbundle
oedebuglog
nsipopincomingserver
nsdefineiid
kisupportsiid
nsisupportsiid
nsdefinecid
kcomponentmanagercid
nscomponentmanagercid
oesettings
hkey
findkey
hkey
findkey
hkey
findaccountskey
prbool
doimport
nsimsgaccount
ppaccount
prbool
doimapserver
nsimsgaccountmanager
pmgr
hkey
hkey
pservername
nsimsgaccount
ppaccount
prbool
dopopserver
nsimsgaccountmanager
pmgr
hkey
hkey
pservername
nsimsgaccount
ppaccount
setidentities
nsimsgaccountmanager
pmgr
nsimsgaccount
pacc
hkey
hkey
prbool
identitymatches
nsimsgidentity
pident
pname
pserver
pemail
preply
pusername
setsmtpserver
nsimsgaccountmanager
pmgr
nsimsgaccount
pacc
pserver
puser
nsresult
getaccountname
hkey
hkey
defaultname
nsstring
acctname
nsresult
nsoesettings
create
nsiimportsettings
aimport
nsprecondition
aimport
nsnull
ptr
aimport
nserrornullpointer
aimport
nsoesettings
aimport
nserroroutofmemory
nsaddref
aimport
nsok
nsoesettings
nsoesettings
nsoesettings
nsoesettings
nsimplisupports
nsoesettings
nsiimportsettings
nsimethodimp
nsoesettings
autolocate
prunichar
description
nsifilespec
location
prbool
retval
nsprecondition
description
nsnull
ptr
nsprecondition
retval
nsnull
ptr
description
retval
nserrornullpointer
description
nsoestringbundle
getstringbyid
oeimportname
retval
prfalse
location
location
nsnull
hkey
key
key
oesettings
findkey
key
nsnull
retval
prtrue
regclosekey
key
key
oesettings
findkey
key
nsnull
retval
prtrue
regclosekey
key
retval
key
oesettings
findaccountskey
key
nsnull
retval
prfalse
regclosekey
key
nsok
nsimethodimp
nsoesettings
setlocation
nsifilespec
location
nsok
nsimethodimp
nsoesettings
import
nsimsgaccount
localmailaccount
prbool
retval
nsprecondition
retval
nsnull
ptr
oesettings
doimport
localmailaccount
retval
prtrue
importlog
settings
appears
successful
retval
prfalse
importlog
settings
returned
false
nsok
hkey
oesettings
findaccountskey
hkey
skey
regopenkeyex
hkeycurrentuser
software
microsoft
internet
account
manager
accounts
keyqueryvalue
keyenumeratesubkeys
skey
errorsuccess
skey
nsnull
hkey
oesettings
findkey
prbool
success
prfalse
hkey
skey
regopenkeyex
hkeycurrentuser
identities
keyqueryvalue
skey
errorsuccess
byte
pbytes
nsoeregutil
getvaluebytes
skey
default
user
id
regclosekey
skey
pbytes
nscstring
key
identities
key
pbytes
nsoeregutil
freevaluebytes
pbytes
key
software
microsoft
outlook
express
regopenkeyex
hkeycurrentuser
key
get
keyqueryvalue
skey
errorsuccess
skey
nsnull
hkey
oesettings
findkey
hkey
skey
regopenkeyex
hkeycurrentuser
software
microsoft
outlook
express
keyqueryvalue
skey
errorsuccess
skey
nsnull
prbool
oesettings
doimport
nsimsgaccount
ppaccount
hkey
hkey
findaccountskey
hkey
nsnull
importlog
error
finding
outlook
express
registry
account
keys
prfalse
nsresult
rv
nscomptr
nsimsgaccountmanager
accmgr
dogetservice
nsmsgaccountmanagercontractid
rv
nsfailed
rv
importlog
failed
to
create
account
manager
prfalse
hkey
subkey
nscstring
defmailname
regopenkeyex
hkeycurrentuser
software
microsoft
outlook
express
keyqueryvalue
subkey
errorsuccess
byte
pbytes
nsoeregutil
getvaluebytes
subkey
default
mail
account
regclosekey
subkey
pbytes
defmailname
pbytes
nsoeregutil
freevaluebytes
pbytes
dword
index
dword
numchars
tchar
keyname
filetime
modtime
long
result
errorsuccess
byte
pbytes
popcount
accounts
nscstring
keycomp
result
errorsuccess
numchars
result
regenumkeyex
hkey
index
keyname
numchars
modtime
index
result
errorsuccess
regopenkeyex
hkey
keyname
keyqueryvalue
subkey
errorsuccess
importlog
opened
outlook
express
account
keyname
nsimsgaccount
anaccount
nsnull
pbytes
nsoeregutil
getvaluebytes
subkey
imap
server
pbytes
doimapserver
accmgr
subkey
pbytes
anaccount
accounts
nsoeregutil
freevaluebytes
pbytes
pbytes
nsoeregutil
getvaluebytes
subkey
pop
server
pbytes
popcount
dopopserver
accmgr
subkey
pbytes
anaccount
popcount
accounts
ppaccount
anaccount
ppaccount
anaccount
nsaddref
anaccount
dopopserver
accmgr
subkey
pbytes
anaccount
popcount
accounts
ppaccount
ppaccount
nsrelease
ppaccount
ppaccount
nsnull
nsoeregutil
freevaluebytes
pbytes
anaccount
keycomp
keyname
keycomp
equals
defmailname
accmgr
setdefaultaccount
anaccount
nsrelease
anaccount
regclosekey
subkey
rv
accmgr
saveaccountinfo
nsassertion
nssucceeded
rv
can
save
account
info
to
pref
file
accounts
nsresult
oesettings
getaccountname
hkey
hkey
defaultname
nsstring
acctname
byte
paccname
nsoeregutil
getvaluebytes
hkey
account
name
nsresult
rv
nsok
paccname
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
impsvc
rv
impsvc
systemstringtounicode
paccname
acctname
nsoeregutil
freevaluebytes
paccname
acctname
assign
nsconvertasciitoucs
defaultname
rv
prbool
oesettings
doimapserver
nsimsgaccountmanager
pmgr
hkey
hkey
pservername
nsimsgaccount
ppaccount
ppaccount
ppaccount
nsnull
byte
pbytes
pbytes
nsoeregutil
getvaluebytes
hkey
imap
user
name
pbytes
prfalse
prbool
result
prfalse
nscomptr
nsimsgincomingserver
in
nsresult
rv
pmgr
findserver
pbytes
pservername
imap
getteraddrefs
in
nsfailed
rv
in
nsnull
rv
pmgr
createincomingserver
pbytes
pservername
imap
getteraddrefs
in
nssucceeded
rv
in
rv
in
settype
imap
importlog
created
imap
server
named
username
pservername
pbytes
nsstring
prettyname
nssucceeded
getaccountname
hkey
pservername
prettyname
prunichar
pretty
tonewunicode
prettyname
pretty
rv
in
setprettyname
pretty
nscrt
free
pretty
nscomptr
nsimsgaccount
account
rv
pmgr
createaccount
getteraddrefs
account
nssucceeded
rv
account
rv
account
setincomingserver
in
importlog
created
an
account
set
the
imap
server
as
the
incoming
server
setidentities
pmgr
account
hkey
result
prtrue
ppaccount
account
queryinterface
nsgetiid
nsimsgaccount
ppaccount
result
prtrue
nsoeregutil
freevaluebytes
pbytes
result
prbool
oesettings
dopopserver
nsimsgaccountmanager
pmgr
hkey
hkey
pservername
nsimsgaccount
ppaccount
ppaccount
ppaccount
nsnull
byte
pbytes
pbytes
nsoeregutil
getvaluebytes
hkey
pop
user
name
pbytes
prfalse
prbool
result
prfalse
nscomptr
nsimsgincomingserver
in
nsresult
rv
pmgr
findserver
pbytes
pservername
pop
getteraddrefs
in
nsfailed
rv
in
nsnull
rv
pmgr
createincomingserver
pbytes
pservername
pop
getteraddrefs
in
nssucceeded
rv
in
rv
in
settype
pop
rv
in
sethostname
pservername
rv
in
setusername
pbytes
importlog
created
pop
server
named
username
pservername
pbytes
nsstring
prettyname
nssucceeded
getaccountname
hkey
pservername
prettyname
prunichar
pretty
tonewunicode
prettyname
pretty
rv
in
setprettyname
pretty
nscrt
free
pretty
nscomptr
nsimsgaccount
account
rv
pmgr
createaccount
getteraddrefs
account
nssucceeded
rv
account
rv
account
setincomingserver
in
importlog
created
account
set
the
incoming
server
to
the
pop
server
nscomptr
nsipopincomingserver
popserver
doqueryinterface
in
rv
nsensuresuccess
rv
rv
byte
pleaveonserver
nsoeregutil
getvaluebytes
hkey
leave
mail
on
server
pleaveonserver
popserver
setleavemessagesonserver
pleaveonserver
prtrue
prfalse
nsoeregutil
freevaluebytes
pleaveonserver
setidentities
pmgr
account
hkey
result
prtrue
ppaccount
account
queryinterface
nsgetiid
nsimsgaccount
ppaccount
result
prtrue
nsoeregutil
freevaluebytes
pbytes
result
prbool
oesettings
identitymatches
nsimsgidentity
pident
pname
pserver
pemail
preply
pusername
pident
prfalse
piname
nsnull
piemail
nsnull
pireply
nsnull
prbool
result
prtrue
prunichar
ppiname
nsnull
nsresult
rv
pident
getfullname
ppiname
rv
pident
getemail
piemail
rv
pident
getreplyto
pireply
ppiname
nsstring
name
ppiname
nscrt
free
ppiname
piname
tonewcstring
name
preply
pireply
nscrt
strcasecmp
preply
pireply
result
prfalse
pemail
piemail
nscrt
strcasecmp
pemail
piemail
result
prfalse
nscrt
free
piname
nscrt
free
piemail
nscrt
free
pireply
result
oesettings
setidentities
nsimsgaccountmanager
pmgr
nsimsgaccount
pacc
hkey
hkey
pname
nsoeregutil
getvaluebytes
hkey
smtp
display
name
pserver
nsoeregutil
getvaluebytes
hkey
smtp
server
pemail
nsoeregutil
getvaluebytes
hkey
smtp
email
address
preply
nsoeregutil
getvaluebytes
hkey
smtp
reply
to
email
address
pusername
nsoeregutil
getvaluebytes
hkey
smtp
user
name
porgname
nsoeregutil
getvaluebytes
hkey
smtp
organization
name
nsresult
rv
pemail
pname
pserver
nscomptr
nsimsgidentity
id
rv
pmgr
createidentity
getteraddrefs
id
id
nsautostring
fullname
organization
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
impsvc
rv
impsvc
systemstringtounicode
pname
fullname
nssucceeded
rv
id
setfullname
fullname
get
id
setidentityname
fullname
get
rv
impsvc
systemstringtounicode
porgname
organization
nssucceeded
rv
id
setorganization
organization
get
id
setemail
pemail
preply
id
setreplyto
preply
pacc
addidentity
id
importlog
created
identity
added
to
the
account
importlog
tname
pname
importlog
temail
pemail
pusername
nscomptr
nsimsgincomingserver
incomingserver
rv
pacc
getincomingserver
getteraddrefs
incomingserver
nssucceeded
rv
incomingserver
rv
incomingserver
getusername
pusername
nsassertion
nssucceeded
rv
unable
to
get
username
from
incomingserver
setsmtpserver
pmgr
pacc
pserver
pusername
nsoeregutil
freevaluebytes
byte
pname
nsoeregutil
freevaluebytes
byte
pserver
nsoeregutil
freevaluebytes
byte
pemail
nsoeregutil
freevaluebytes
byte
preply
nsoeregutil
freevaluebytes
byte
pusername
oesettings
setsmtpserver
nsimsgaccountmanager
pmgr
nsimsgaccount
pacc
pserver
puser
nsresult
rv
nscomptr
nsismtpservice
smtpservice
dogetservice
nssmtpservicecontractid
rv
nssucceeded
rv
smtpservice
nscomptr
nsismtpserver
foundserver
rv
smtpservice
findserver
puser
pserver
getteraddrefs
foundserver
nssucceeded
rv
foundserver
importlog
smtp
server
already
exists
pserver
nscomptr
nsismtpserver
smtpserver
rv
smtpservice
createsmtpserver
getteraddrefs
smtpserver
nssucceeded
rv
smtpserver
smtpserver
sethostname
pserver
puser
smtpserver
setusername
puser
importlog
created
smtp
server
pserver