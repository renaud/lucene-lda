nsmsgcopy
nsxpidlstring
nscomptr
nsipref
nsmsgbasecid
nsmsgfolderflags
nsimsgfolder
nsimsgaccountmanager
nsifolder
nsisupportsarray
nsimsgincomingserver
nsisupports
nsirdfservice
nsirdfresource
nsrdfcid
nsiurl
nsnetcid
nsmsgcomposestringbundle
nsmsgcomputils
prcmon
nsimapcore
nsimsgimapmailfolder
nsiimapincomingserver
nsieventqueueservice
nsmsgsimulateerror
nsdefinecid
krdfservicecid
nsrdfservicecid
nsdefinecid
keventqueueservicecid
nseventqueueservicecid
nsimplthreadsafeaddref
copylistener
nsimplthreadsaferelease
copylistener
nsinterfacemapbegin
copylistener
nsinterfacemapentryambiguous
nsisupports
nsimsgcopyservicelistener
nsinterfacemapentry
nsimsgcopyservicelistener
nsinterfacemapendthreadsafe
copylistener
copylistener
mcopyobject
nsnull
mcopyinprogress
prfalse
copylistener
copylistener
nsresult
copylistener
onstartcopy
ifdef
nsdebug
printf
copylistener
onstartcopy
endif
mcomposeandsend
mcomposeandsend
notifylisteneronstartcopy
nsok
nsresult
copylistener
onprogress
pruint
aprogress
pruint
aprogressmax
ifdef
nsdebug
printf
copylistener
onprogress
of
aprogress
aprogressmax
endif
mcomposeandsend
mcomposeandsend
notifylisteneronprogresscopy
aprogress
aprogressmax
nsok
nsresult
copylistener
setmessagekey
pruint
amessagekey
mcomposeandsend
mcomposeandsend
setmessagekey
amessagekey
nsok
nsresult
copylistener
getmessageid
nscstring
amessageid
mcomposeandsend
mcomposeandsend
getmessageid
amessageid
nsok
nsresult
copylistener
onstopcopy
nsresult
astatus
nssucceeded
astatus
ifdef
nsdebug
printf
copylistener
successful
on
the
copy
operation
endif
ifdef
nsdebug
printf
copylistener
copy
operation
failed
endif
mcopyobject
prcentermonitor
mcopyobject
prcnotifyall
mcopyobject
mcopyinprogress
prfalse
prcexitmonitor
mcopyobject
mcomposeandsend
mcomposeandsend
notifylisteneronstopcopy
astatus
nsok
nsresult
copylistener
setmsgcomposeandsendobject
nsimsgsend
obj
obj
mcomposeandsend
obj
nsok
nsimplisupports
nsmsgcopy
nsiurllistener
nsmsgcopy
nsmsgcopy
mcopylistener
nsnull
mfilespec
nsnull
mmode
nsimsgsend
nsmsgdelivernow
msavepref
nsnull
nsmsgcopy
nsmsgcopy
prfreeif
msavepref
nsresult
nsmsgcopy
startcopyoperation
nsimsgidentity
auseridentity
nsifilespec
afilespec
nsmsgdelivermode
amode
nsimsgsend
amsgsendobj
asavepref
nsimsgdbhdr
amsgtoreplace
nscomptr
nsimsgfolder
dstfolder
prbool
isdraft
prfalse
prbool
waitforurl
prfalse
nsresult
rv
amsgsendobj
nserrorinvalidarg
asavepref
msavepref
plstrdup
asavepref
amode
nsimsgsend
nsmsgqueueforlater
rv
getunsentmessagesfolder
auseridentity
getteraddrefs
dstfolder
waitforurl
isdraft
prfalse
dstfolder
nsfailed
rv
nsmsgunabletosendlater
amode
nsimsgsend
nsmsgsaveasdraft
rv
getdraftsfolder
auseridentity
getteraddrefs
dstfolder
waitforurl
isdraft
prtrue
dstfolder
nsfailed
rv
nsmsgunabletosavedraft
amode
nsimsgsend
nsmsgsaveastemplate
rv
gettemplatesfolder
auseridentity
getteraddrefs
dstfolder
waitforurl
isdraft
prfalse
dstfolder
nsfailed
rv
checksimulatederror
simulatedsenderror
nsmsgunabletosavetemplate
rv
getsentfolder
auseridentity
getteraddrefs
dstfolder
waitforurl
isdraft
prfalse
dstfolder
nsfailed
rv
nsmsgcouldntopenfccfolder
mmode
amode
waitforurl
rv
docopy
afilespec
dstfolder
amsgtoreplace
isdraft
nsnull
amsgsendobj
mfilespec
afilespec
mdstfolder
dstfolder
mmsgtoreplace
amsgtoreplace
misdraft
isdraft
mmsgsendobj
amsgsendobj
rv
nsresult
nsmsgcopy
docopy
nsifilespec
adiskfile
nsimsgfolder
dstfolder
nsimsgdbhdr
amsgtoreplace
prbool
aisdraft
nsimsgwindow
msgwindow
nsimsgsend
amsgsendobj
nsresult
rv
nsok
adiskfile
dstfolder
nserrorinvalidarg
nssucceeded
rv
copylistener
tptr
copylistener
tptr
nserroroutofmemory
mcopylistener
doqueryinterface
tptr
rv
nsfailed
rv
mcopylistener
nserroroutofmemory
mcopylistener
setmsgcomposeandsendobject
amsgsendobj
nscomptr
nsieventqueue
eventqueue
aisdraft
nscomptr
nsimsgimapmailfolder
imapfolder
doqueryinterface
dstfolder
nscomptr
nsimsgaccountmanager
accountmanager
dogetservice
nsmsgaccountmanagercontractid
rv
nsfailed
rv
rv
prbool
shutdowninprogress
prfalse
rv
accountmanager
getshutdowninprogress
shutdowninprogress
nssucceeded
rv
shutdowninprogress
imapfolder
mcopylistener
mcopyobject
doqueryinterface
tptr
mcopylistener
mcopyinprogress
prtrue
nscomptr
nsieventqueueservice
peventqservice
dogetservice
keventqueueservicecid
rv
nsfailed
rv
rv
peventqservice
getthreadeventqueue
nscurrentthread
getteraddrefs
eventqueue
nscomptr
copylistener
acopylistener
doqueryinterface
tptr
nscomptr
nsimsgcopyservice
copyservice
dogetservice
nsmsgcopyservicecontractid
rv
nsensuresuccess
rv
rv
rv
copyservice
copyfilemessage
adiskfile
dstfolder
amsgtoreplace
aisdraft
mcopylistener
msgwindow
acopylistener
mcopyinprogress
prcentermonitor
acopylistener
prcwait
acopylistener
prmicrosecondstointerval
ul
prcexitmonitor
acopylistener
eventqueue
eventqueue
processpendingevents
rv
nsimethodimp
nsmsgcopy
onstartrunningurl
nsiuri
aurl
nsok
nsimethodimp
nsmsgcopy
onstoprunningurl
nsiuri
aurl
nsresult
aexitcode
nsresult
rv
aexitcode
nssucceeded
aexitcode
rv
docopy
mfilespec
mdstfolder
mmsgtoreplace
misdraft
nsnull
mmsgsendobj
rv
nsresult
nsmsgcopy
getunsentmessagesfolder
nsimsgidentity
useridentity
nsimsgfolder
folder
prbool
waitforurl
nsresult
ret
locatemessagefolder
useridentity
nsimsgsend
nsmsgqueueforlater
msavepref
folder
createifmissing
folder
waitforurl
ret
nsresult
nsmsgcopy
getdraftsfolder
nsimsgidentity
useridentity
nsimsgfolder
folder
prbool
waitforurl
nsresult
ret
locatemessagefolder
useridentity
nsimsgsend
nsmsgsaveasdraft
msavepref
folder
createifmissing
folder
waitforurl
ret
nsresult
nsmsgcopy
gettemplatesfolder
nsimsgidentity
useridentity
nsimsgfolder
folder
prbool
waitforurl
nsresult
ret
locatemessagefolder
useridentity
nsimsgsend
nsmsgsaveastemplate
msavepref
folder
createifmissing
folder
waitforurl
ret
nsresult
nsmsgcopy
getsentfolder
nsimsgidentity
useridentity
nsimsgfolder
folder
prbool
waitforurl
nsresult
ret
locatemessagefolder
useridentity
nsimsgsend
nsmsgdelivernow
msavepref
folder
createifmissing
folder
waitforurl
ret
nsresult
nsmsgcopy
createifmissing
nsimsgfolder
folder
prbool
waitforurl
nsresult
ret
nsok
folder
folder
nscomptr
nsifolder
parent
folder
getparent
getteraddrefs
parent
parent
nscomptr
nsifilespec
folderpath
folder
getpath
getteraddrefs
folderpath
prbool
isimapfolder
nscrt
strncasecmp
msavepref
imap
prbool
exists
prfalse
isimapfolder
folderpath
folderpath
exists
exists
exists
folder
createstorageifmissing
isimapfolder
waitforurl
prtrue
ret
nsok
ret
nsresult
locatemessagefolder
nsimsgidentity
useridentity
nsmsgdelivermode
afoldertype
afolderuri
nsimsgfolder
msgfolder
nsresult
rv
nsok
returnsimulatederror
simulatedsenderror
nserrorfailure
msgfolder
nserrornullpointer
msgfolder
nsnull
afolderuri
afolderuri
nserrorinvalidarg
plstrncasecmp
anyserver
afolderuri
strlen
afolderuri
nscomptr
nsirdfservice
rdf
dogetservice
krdfservicecid
rv
nsfailed
rv
rv
nscomptr
nsirdfresource
resource
rv
rdf
getresource
nsdependentcstring
afolderuri
getteraddrefs
resource
nsfailed
rv
rv
nscomptr
nsimsgfolder
folderresource
folderresource
doqueryinterface
resource
rv
nssucceeded
rv
folderresource
nscomptr
nsimsgincomingserver
server
rv
folderresource
getserver
getteraddrefs
server
nsensuresuccess
rv
rv
server
getmsgfolderfromuri
folderresource
afolderuri
amsgfolder
server
nscomptr
nsimsgfolder
rootmsgfolder
server
getrootmsgfolder
getteraddrefs
rootmsgfolder
rootmsgfolder
nscomptr
nsiimapincomingserver
imapserver
doqueryinterface
server
prbool
namespaceprefixadded
prfalse
nsxpidlcstring
folderuriwithnamespace
imapserver
imapserver
geturiwithnamespaceprefixifnecessary
kpersonalnamespace
afolderuri
gettercopies
folderuriwithnamespace
folderuriwithnamespace
isempty
rv
rootmsgfolder
getchildwithuri
folderuriwithnamespace
prtrue
prfalse
msgfolder
namespaceprefixadded
prtrue
rv
rootmsgfolder
getchildwithuri
afolderuri
prtrue
prfalse
msgfolder
rv
rootmsgfolder
getchildwithuri
afolderuri
prtrue
prtrue
msgfolder
msgfolder
namespaceprefixadded
nscomptr
nsirdfresource
resource
rv
rdf
getresource
folderuriwithnamespace
getteraddrefs
resource
nsfailed
rv
rv
nscomptr
nsimsgfolder
folderresource
folderresource
doqueryinterface
resource
rv
nsfailed
rv
rv
msgfolder
folderresource
nsaddref
msgfolder
msgfolder
folderresource
nsaddref
msgfolder
rv
nsmsgerrorfoldermissing
nsmsgerrorfoldermissing
endif
nserrorfailure
pruint
cnt
pruint
useridentity
nserrorinvalidarg
nscomptr
nsimsgaccountmanager
accountmanager
dogetservice
nsmsgaccountmanagercontractid
rv
nsfailed
rv
rv
nscomptr
nsisupportsarray
retval
accountmanager
getserversforidentity
useridentity
getteraddrefs
retval
retval
nserrorfailure
rv
retval
count
cnt
nsfailed
rv
rv
cnt
nscomptr
nsimsgincomingserver
inserver
inserver
doqueryelementat
retval
rv
nsfailed
rv
inserver
serveruri
nsnull
rv
inserver
getserveruri
serveruri
nsfailed
rv
serveruri
serveruri
nscomptr
nsifolder
folder
rv
inserver
getrootfolder
getteraddrefs
folder
nsfailed
rv
folder
nscomptr
nsimsgfolder
rootfolder
rootfolder
doqueryinterface
folder
rv
nsfailed
rv
rootfolder
pruint
numfolders
afoldertype
nsimsgsend
nsmsgqueueforlater
rv
rootfolder
getfolderswithflag
msgfolderflagqueue
numfolders
msgfolder
afoldertype
nsimsgsend
nsmsgsaveasdraft
rv
rootfolder
getfolderswithflag
msgfolderflagdrafts
numfolders
msgfolder
afoldertype
nsimsgsend
nsmsgsaveastemplate
rv
rootfolder
getfolderswithflag
msgfolderflagtemplates
numfolders
msgfolder
rv
rootfolder
getfolderswithflag
msgfolderflagsentmail
numfolders
msgfolder
nssucceeded
rv
msgfolder
nsok
nserrorfailure
nsresult
messagefolderislocal
nsimsgidentity
useridentity
nsmsgdelivermode
afoldertype
afolderuri
prbool
aresult
nsresult
rv
afolderuri
nserrornullpointer
nscomptr
nsiurl
url
docreateinstance
nsstandardurlcontractid
rv
nsfailed
rv
rv
rv
url
setspec
nsdependentcstring
afolderuri
nsfailed
rv
rv
rv
url
schemeis
mailbox
aresult
nsfailed
rv
rv
nsok