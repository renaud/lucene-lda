nscomptr
nsimimeemitter
mimemsg
mimemoz
prmem
prio
plstr
msgcore
prlog
prprf
nscrt
nsmimestringresources
nsmimetypes
nsmsgmessageflags
nsescape
nsstring
mimetext
mimecryp
mimetpfl
define
mimesuperclass
mimecontainerclass
mimedefclass
mimemessage
mimemessageclass
mimemessageclass
mimesuperclass
mimemessageinitialize
mimeobject
mimemessagefinalize
mimeobject
mimemessageaddchild
mimeobject
mimeobject
mimemessageparsebegin
mimeobject
mimemessageparseline
print
mimeobject
mimemessageparseeof
mimeobject
prbool
mimemessagecloseheaders
mimeobject
obj
mimemessagewriteheadershtml
mimeobject
mimemessagepartialmessagehtml
data
closure
mimeheaders
headers
ifdef
mozsecurity
hg
endif
ifdef
xpunix
mimeheadersdounixdisplayhookhack
mimeheaders
endif
defined
debug
defined
xpunix
mimemessagedebugprint
mimeobject
prfiledesc
print
depth
endif
mimeobjectclass
mimemultipartclass
mimemessageclassinitialize
mimemessageclass
clazz
mimeobjectclass
oclass
mimeobjectclass
clazz
mimecontainerclass
cclass
mimecontainerclass
clazz
prassert
oclass
classinitialized
oclass
initialize
mimemessageinitialize
oclass
finalize
mimemessagefinalize
oclass
parsebegin
mimemessageparsebegin
oclass
parseline
mimemessageparseline
oclass
parseeof
mimemessageparseeof
cclass
addchild
mimemessageaddchild
defined
debug
defined
xpunix
oclass
debugprint
mimemessagedebugprint
endif
mimemessageinitialize
mimeobject
object
mimemessage
msg
mimemessage
object
msg
grabsubject
prfalse
mimeobjectclass
mimesuperclass
initialize
object
mimemessagefinalize
mimeobject
object
mimemessage
msg
mimemessage
object
msg
hdrs
mimeheadersfree
msg
hdrs
msg
hdrs
mimeobjectclass
mimesuperclass
finalize
object
mimemessageparsebegin
mimeobject
obj
mimemessage
msg
mimemessage
obj
status
mimeobjectclass
mimesuperclass
parsebegin
obj
status
status
obj
parent
msg
grabsubject
prtrue
mimeobjectwriteseparator
obj
mimemessageparseline
aline
print
alength
mimeobject
obj
line
aline
print
length
alength
mimemessage
msg
mimemessage
obj
status
prassert
line
line
line
line
ifdef
mozsecurity
hg
endif
msg
grabsubject
plstrncasecmp
line
subject
obj
parent
obj
headers
obj
headers
mungedsubject
obj
headers
mungedsubject
plstrndup
line
length
tptr
obj
headers
mungedsubject
tptr
tptr
nscrt
cr
tptr
nscrt
lf
tptr
tptr
msg
container
nchildren
mimeobject
kid
msg
container
children
prbool
nl
prassert
kid
kid
nl
length
line
length
nscrt
cr
line
length
nscrt
lf
ifdef
mimedrafts
mimetypep
kid
mimeobjectclass
mimemessageclass
obj
options
obj
options
decomposefilep
obj
options
ismultipartmsg
obj
options
decomposefileoutputfn
obj
options
decryptp
length
line
mimetypep
kid
mimeobjectclass
mimeinlinetextplainflowedclass
line
length
status
obj
options
decomposefileoutputfn
line
length
obj
options
streamclosure
status
status
nl
status
obj
options
decomposefileoutputfn
msglinebreak
msglinebreaklen
obj
options
streamclosure
status
status
status
endif
nl
kid
clazz
parsebuffer
line
length
kid
prmalloc
length
msglinebreaklen
mimeoutofmemory
memcpy
line
length
plstrcpy
length
msglinebreak
status
kid
clazz
parsebuffer
length
msglinebreaklen
kid
prfree
status
msg
hdrs
msg
hdrs
mimeheadersnew
msg
hdrs
mimeoutofmemory
ifdef
mimedrafts
obj
options
obj
options
decomposefilep
obj
options
ismultipartmsg
obj
options
doneparsingouterheaders
obj
options
decomposefileoutputfn
status
obj
options
decomposefileoutputfn
line
length
obj
options
streamclosure
status
status
endif
status
mimeheadersparseline
line
length
msg
hdrs
status
status
line
nscrt
cr
line
nscrt
lf
status
mimemessagecloseheaders
obj
status
status
mimemessagecloseheaders
mimeobject
obj
mimemessage
msg
mimemessage
obj
status
ct
mimeobject
body
msg
hdrs
prbool
outerp
obj
headers
ifdef
mimedrafts
outerp
obj
options
obj
options
decomposefilep
obj
options
callerneedrootheaders
obj
options
decomposeheadersinfofn
ifdef
enablesmime
obj
options
decryptp
mimecryptoobjectp
msg
hdrs
prfalse
obj
options
decryptp
prfalse
endif
obj
options
callerneedrootheaders
obj
obj
options
state
root
status
obj
options
decomposeheadersinfofn
obj
options
streamclosure
msg
hdrs
endif
outerp
obj
outputp
obj
options
obj
options
writehtmlp
obj
options
generateheaderhtmlfn
lstatus
html
obj
options
state
firstdatawrittenp
lstatus
mimeobjectoutputinit
obj
texthtml
lstatus
lstatus
prassert
obj
options
state
firstdatawrittenp
html
obj
options
generateheaderhtmlfn
obj
options
htmlclosure
msg
hdrs
html
lstatus
mimeobjectwrite
obj
html
strlen
html
prfalse
prfree
html
lstatus
lstatus
prbool
ok
prtrue
mv
mimeheadersget
msg
hdrs
headermimeversion
prtrue
prfalse
ifdef
requiremimeversionheader
ok
mv
nscrt
strcmp
mv
ok
prtrue
endif
ok
ct
mimeheadersget
msg
hdrs
headercontenttype
prtrue
prfalse
mv
ct
ct
nscrt
strdup
textplain
prfreeif
mv
obj
outputp
obj
options
obj
options
decryptp
ifdef
enablesmime
mimecryptoobjectp
msg
hdrs
prfalse
endif
obj
options
decryptp
prfalse
obj
outputp
obj
options
obj
options
writehtmlp
obj
options
headers
mimeheaderscitation
outerp
obj
options
headers
mimeheaderssome
status
mimemessagewriteheadershtml
obj
status
status
obj
outputp
status
mimeobjectwrite
obj
prfalse
status
status
status
mimeheaderswriterawheaders
msg
hdrs
obj
options
obj
options
decryptp
status
status
ifdef
xpunix
outerp
obj
outputp
mimeheadersdounixdisplayhookhack
msg
hdrs
endif
obj
options
obj
options
state
obj
options
state
separatorsuppressedp
prtrue
ifdef
mimedrafts
obj
headers
obj
options
obj
options
decomposefilep
ct
obj
options
ismultipartmsg
plstrcasestr
ct
multipart
endif
body
mimecreate
ct
msg
hdrs
obj
options
prfreeif
ct
body
mimeoutofmemory
status
mimecontainerclass
obj
clazz
addchild
obj
body
status
mimefree
body
status
mimetypep
body
mimeobjectclass
mimeinlinetextclass
mimeinlinetext
body
needupdatemsgwincharset
prtrue
status
body
clazz
parsebegin
body
status
status
prbool
outerp
obj
headers
outerp
obj
options
parttoload
obj
options
formatout
nsmimeoutput
nsmimemessagebodydisplay
mimetypep
body
mimeobjectclass
mimeinlinetextclass
mimeinlinetext
text
mimeinlinetext
body
text
text
charset
text
charset
setmailcharactersettomsgwindow
body
text
charset
msgid
mimeheadersget
msg
hdrs
headermessageid
prfalse
prfalse
outcharset
obj
options
forceusercharset
outcharset
utf
mimeemitterstartbody
obj
options
obj
options
headers
mimeheadersnone
msgid
outcharset
prfreeif
msgid
xmoz
mimeheadersget
msg
hdrs
headerxmozillastatus
prfalse
prfalse
xmoz
pruint
flags
dummy
sscanf
xmoz
lx
flags
dummy
flags
msgflagpartial
obj
options
generatefooterhtmlfn
mimemessagepartialmessagehtml
prfreeif
xmoz
mimemessageparseeof
mimeobject
obj
prbool
abortp
status
prbool
outerp
mimemessage
msg
mimemessage
obj
obj
closedp
status
mimeobjectclass
mimesuperclass
parseeof
obj
abortp
status
status
outerp
obj
headers
outerp
obj
options
obj
options
writehtmlp
obj
options
generatefooterhtmlfn
mimestreamdata
msd
mimestreamdata
obj
options
streamclosure
msd
html
obj
options
generatefooterhtmlfn
msd
origurlname
obj
options
htmlclosure
msg
hdrs
html
lstatus
mimeobjectwrite
obj
html
strlen
html
prfalse
prfree
html
lstatus
lstatus
obj
options
parttoload
obj
options
formatout
nsmimeoutput
nsmimemessagebodydisplay
obj
options
headers
mimeheadersonly
mimeemitterendbody
obj
options
ifdef
mimedrafts
obj
options
obj
options
decomposefilep
obj
options
doneparsingouterheaders
obj
options
ismultipartmsg
mimetypep
obj
mimeobjectclass
mimeencryptedclass
obj
options
decomposefileclosefn
status
obj
options
decomposefileclosefn
obj
options
streamclosure
status
status
endif
abortp
outerp
status
mimeobjectwriteseparator
obj
status
status
mimemessageaddchild
mimeobject
parent
mimeobject
child
mimecontainer
cont
mimecontainer
parent
prassert
parent
child
parent
child
prassert
cont
nchildren
cont
nchildren
ifdef
mimedrafts
parent
options
parent
options
decomposefilep
parent
options
ismultipartmsg
mimetypep
child
mimeobjectclass
mimeencryptedclass
parent
options
decomposefileinitfn
status
status
parent
options
decomposefileinitfn
parent
options
streamclosure
mimemessage
parent
hdrs
status
status
endif
mimecontainerclass
mimesuperclass
addchild
parent
child
determinemailcharset
mimemessage
msg
retcharset
nsnull
msg
msg
hdrs
ct
mimeheadersget
msg
hdrs
headercontenttype
prfalse
prfalse
ct
retcharset
mimeheadersgetparameter
ct
charset
prfree
ct
retcharset
retcharset
mimeheadersget
msg
hdrs
headerxsuncharset
prfalse
prfalse
retcharset
nscrt
strdup
iso
retcharset
mimemessagewriteheadershtml
mimeobject
obj
mimemessage
msg
mimemessage
obj
status
ifdef
mozsecurity
hg
endif
obj
options
obj
options
outputfn
prassert
obj
outputp
obj
options
writehtmlp
obj
options
headers
mimeheadersnone
obj
obj
options
state
root
mailcharset
determinemailcharset
msg
mailcharset
plstrcasecmp
mailcharset
us
ascii
plstrcasecmp
mailcharset
iso
mimeemitterupdatecharacterset
obj
options
mailcharset
prfreeif
mailcharset
obj
options
state
firstdatawrittenp
status
mimeobjectoutputinit
obj
texthtml
status
mimeemitterendheader
obj
options
status
prassert
obj
options
state
firstdatawrittenp
msgid
mimeheadersget
msg
hdrs
headermessageid
prfalse
prfalse
prbool
outerp
obj
headers
outerp
obj
options
formatout
nsmimeoutput
nsmimemessagebodydisplay
obj
options
parttoload
id
mimepartaddress
obj
id
outerp
strcmp
id
obj
options
parttoload
prfree
id
mailcharset
determinemailcharset
msg
mimeemitterstartheader
obj
options
outerp
obj
options
headers
mimeheadersonly
msgid
mailcharset
prfreeif
msgid
prfreeif
mailcharset
ifdef
mozsecurity
hg
endif
status
mimeheaderswriteallheaders
msg
hdrs
obj
options
prfalse
status
mimeemitterendheader
obj
options
status
msg
cryptostampedp
ifdef
mozsecurity
hg
endif
obj
options
obj
options
state
obj
options
generatepostheaderhtmlfn
obj
options
state
postheaderhtmlrunp
html
prassert
obj
options
state
firstdatawrittenp
html
obj
options
generatepostheaderhtmlfn
obj
options
htmlclosure
msg
hdrs
obj
options
state
postheaderhtmlrunp
prtrue
html
status
mimeobjectwrite
obj
html
strlen
html
prfalse
prfree
html
status
mimeemitterendheader
obj
options
status
mimeemitterendheader
obj
options
mimemessagepartialmessagehtml
data
closure
mimeheaders
headers
nscautostring
origurl
data
partialmsghtml
nsnull
uidl
mimeheadersget
headers
headerxuidl
prfalse
prfalse
msgid
mimeheadersget
headers
headermessageid
prfalse
prfalse
msgidptr
plstrstr
msgid
origurl
replacesubstring
mailbox
message
mailbox
origurl
replacesubstring
number
msgidptr
msgidptr
msgidptr
msgid
gtptr
plstrstr
msgidptr
gtptr
gtptr
escapeduidl
uidl
nsescape
uidl
urlxalphas
nsnull
escapedmsgid
msgidptr
nsescape
msgidptr
urlpath
nsnull
fmt
mimegetstringbyid
fmt
mimegetstringbyid
fmt
mimegetstringbyid
msgurl
prsmprintf
messageid
uidl
origurl
get
escapedmsgid
escapeduidl
partialmsghtml
prsmprintf
fmt
fmt
msgurl
fmt
prfree
uidl
prfree
escapeduidl
prfree
msgid
prfree
escapedmsgid
prfree
msgurl
prfree
fmt
prfree
fmt
prfree
fmt
partialmsghtml
defined
debug
defined
xpunix
mimemessagedebugprint
mimeobject
obj
prfiledesc
stream
print
depth
mimemessage
msg
mimemessage
obj
addr
mimepartaddress
obj
depth
prwrite
stream
prfreeif
addr
msg
hdrs
depth
define
dump
header
depth
prwrite
stream
mimeheadersget
msg
hdrs
header
prfalse
prtrue
prfreeif
dump
headersubject
dump
headerdate
dump
headerfrom
dump
headerto
dump
headernewsgroups
dump
headermessageid
undef
dump
prwrite
stream
endif
prassert
msg
container
nchildren
msg
container
nchildren
mimeobject
kid
msg
container
children
status
kid
clazz
debugprint
kid
stream
depth
status
status
endif