ifdef
mozlogging
define
forceprlog
endif
nscore
nscrt
nsstring
nsreadableutils
nsiservicemanager
nsiimportservice
nsicomponentmanager
nsoutlookimport
nsimemory
nsiimportservice
nsiimportmail
nsiimportmailboxdescriptor
nsiimportgeneric
nsiimportaddressbooks
nsiimportabdescriptor
nsiimportfieldmap
nsxpcom
nsisupportsprimitives
nsioutputstream
nsiaddrdatabase
nsoutlooksettings
nstextformatter
nsoutlookstringbundle
nsistringbundle
outlookdebuglog
nsoutlookmail
mapiapi
nsdefineiid
kisupportsiid
nsisupportsiid
prlogmoduleinfo
outlooklogmodule
nsnull
importoutlookmailimpl
nsiimportmail
importoutlookmailimpl
importoutlookmailimpl
nsresult
create
nsiimportmail
aimport
nsdeclisupports
nsimethod
getdefaultlocation
nsifilespec
location
prbool
found
prbool
userverify
nsimethod
findmailboxes
nsifilespec
location
nsisupportsarray
retval
nsimethod
importmailbox
nsiimportmailboxdescriptor
source
nsifilespec
destination
prunichar
perrorlog
prunichar
psuccesslog
prbool
fatalerror
nsimethod
getimportprogress
pruint
retval
reportsuccess
nsstring
name
print
count
nsstring
pstream
reporterror
print
errornum
nsstring
name
nsstring
pstream
addlinebreak
nsstring
pstream
setlogs
nsstring
success
nsstring
error
prunichar
perror
prunichar
psuccess
nsoutlookmail
mmail
pruint
mbytesdone
importoutlookaddressimpl
nsiimportaddressbooks
importoutlookaddressimpl
importoutlookaddressimpl
nsresult
create
nsiimportaddressbooks
aimport
nsdeclisupports
nsimethod
getsupportsmultiple
prbool
retval
retval
prtrue
nsok
nsimethod
getautofind
prunichar
description
prbool
retval
nsimethod
getneedsfieldmap
nsifilespec
location
prbool
retval
retval
prfalse
nsok
nsimethod
getdefaultlocation
nsifilespec
location
prbool
found
prbool
userverify
nserrorfailure
nsimethod
findaddressbooks
nsifilespec
location
nsisupportsarray
retval
nsimethod
initfieldmap
nsifilespec
location
nsiimportfieldmap
fieldmap
nserrorfailure
nsimethod
importaddressbook
nsiimportabdescriptor
source
nsiaddrdatabase
destination
nsiimportfieldmap
fieldmap
prbool
isaddrlochome
prunichar
errorlog
prunichar
successlog
prbool
fatalerror
nsimethod
getimportprogress
pruint
retval
nsimethod
getsampledata
print
index
prbool
pfound
prunichar
pstr
nserrorfailure
nsimethod
setsamplelocation
nsifilespec
nsok
reportsuccess
nsstring
name
nsstring
pstream
pruint
mmsgcount
pruint
mmsgtotal
nsoutlookmail
maddress
nsoutlookimport
nsoutlookimport
outlooklogmodule
outlooklogmodule
prnewlogmodule
import
importlog
nsoutlookimport
module
created
nsoutlookstringbundle
getstringbundle
nsoutlookimport
nsoutlookimport
importlog
nsoutlookimport
module
deleted
nsimplisupports
nsoutlookimport
nsiimportmodule
nsimethodimp
nsoutlookimport
getname
prunichar
name
nsprecondition
name
nsnull
ptr
name
nserrornullpointer
name
nsoutlookstringbundle
getstringbyid
outlookimportname
nsok
nsimethodimp
nsoutlookimport
getdescription
prunichar
name
nsprecondition
name
nsnull
ptr
name
nserrornullpointer
name
nsoutlookstringbundle
getstringbyid
outlookimportdescription
nsok
nsimethodimp
nsoutlookimport
getsupports
supports
nsprecondition
supports
nsnull
ptr
supports
nserrornullpointer
supports
nscrt
strdup
koutlooksupportsstring
nsok
nsimethodimp
nsoutlookimport
getsupportsupgrade
prbool
pupgrade
nsprecondition
pupgrade
nsnull
ptr
pupgrade
nserrornullpointer
pupgrade
prtrue
nsok
nsimethodimp
nsoutlookimport
getimportinterface
pimporttype
nsisupports
ppinterface
nsprecondition
pimporttype
nsnull
ptr
pimporttype
nserrornullpointer
nsprecondition
ppinterface
nsnull
ptr
ppinterface
nserrornullpointer
ppinterface
nsnull
nsresult
rv
nscrt
strcmp
pimporttype
mail
nsiimportmail
pmail
nsnull
nsiimportgeneric
pgeneric
nsnull
rv
importoutlookmailimpl
create
pmail
nssucceeded
rv
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
rv
nssucceeded
rv
rv
impsvc
createnewgenericmail
pgeneric
nssucceeded
rv
pgeneric
setdata
mailinterface
pmail
nsstring
name
nsoutlookstringbundle
getstringbyid
outlookimportname
name
nscomptr
nsisupportsstring
namestring
docreateinstance
nssupportsstringcontractid
rv
nssucceeded
rv
namestring
setdata
name
pgeneric
setdata
name
namestring
rv
pgeneric
queryinterface
kisupportsiid
ppinterface
nsifrelease
pmail
nsifrelease
pgeneric
rv
nscrt
strcmp
pimporttype
addressbook
nsiimportaddressbooks
paddress
nsnull
nsiimportgeneric
pgeneric
nsnull
rv
importoutlookaddressimpl
create
paddress
nssucceeded
rv
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
rv
nssucceeded
rv
rv
impsvc
createnewgenericaddressbooks
pgeneric
nssucceeded
rv
pgeneric
setdata
addressinterface
paddress
rv
pgeneric
queryinterface
kisupportsiid
ppinterface
nsifrelease
paddress
nsifrelease
pgeneric
rv
nscrt
strcmp
pimporttype
settings
nsiimportsettings
psettings
nsnull
rv
nsoutlooksettings
create
psettings
nssucceeded
rv
psettings
queryinterface
kisupportsiid
ppinterface
nsifrelease
psettings
rv
nserrornotavailable
nsresult
importoutlookmailimpl
create
nsiimportmail
aimport
nsprecondition
aimport
nsnull
ptr
aimport
nserrornullpointer
aimport
importoutlookmailimpl
aimport
nserroroutofmemory
nsaddref
aimport
nsok
importoutlookmailimpl
importoutlookmailimpl
importoutlookmailimpl
importoutlookmailimpl
nsimplthreadsafeisupports
importoutlookmailimpl
nsiimportmail
nsimethodimp
importoutlookmailimpl
getdefaultlocation
nsifilespec
pploc
prbool
found
prbool
userverify
nsprecondition
pploc
nsnull
ptr
nsprecondition
found
nsnull
ptr
nsprecondition
userverify
nsnull
ptr
pploc
found
userverify
nserrornullpointer
found
prfalse
pploc
nsnull
userverify
prfalse
cmapiapi
mapi
mapi
initialize
nsok
mapi
logon
nsok
cmapifolderlist
store
mapi
iteratestores
store
nsok
store
getsize
nsok
nsresult
rv
nsifilespec
spec
nsfailed
rv
nsnewfilespec
spec
rv
found
prtrue
pploc
spec
userverify
prfalse
nsok
nsimethodimp
importoutlookmailimpl
findmailboxes
nsifilespec
ploc
nsisupportsarray
pparray
nsprecondition
ploc
nsnull
ptr
nsprecondition
pparray
nsnull
ptr
ploc
pparray
nserrornullpointer
mmail
getmailfolders
pparray
importoutlookmailimpl
addlinebreak
nsstring
pstream
pstream
pstream
append
prunichar
nscrt
lf
importoutlookmailimpl
reportsuccess
nsstring
name
print
count
nsstring
pstream
pstream
nsistringbundle
pbundle
nsoutlookstringbundle
getstringbundleproxy
prunichar
pfmt
nsoutlookstringbundle
getstringbyid
outlookimportmailboxsuccess
pbundle
prunichar
ptext
nstextformatter
smprintf
pfmt
name
get
count
pstream
append
ptext
nstextformatter
smprintffree
ptext
nsoutlookstringbundle
freestring
pfmt
addlinebreak
pstream
nsifrelease
pbundle
importoutlookmailimpl
reporterror
print
errornum
nsstring
name
nsstring
pstream
pstream
nsistringbundle
pbundle
nsoutlookstringbundle
getstringbundleproxy
prunichar
pfmt
nsoutlookstringbundle
getstringbyid
errornum
prunichar
ptext
nstextformatter
smprintf
pfmt
name
get
pstream
append
ptext
nstextformatter
smprintffree
ptext
nsoutlookstringbundle
freestring
pfmt
addlinebreak
pstream
nsifrelease
pbundle
importoutlookmailimpl
setlogs
nsstring
success
nsstring
error
prunichar
perror
prunichar
psuccess
perror
perror
tonewunicode
error
psuccess
psuccess
tonewunicode
success
nsimethodimp
importoutlookmailimpl
importmailbox
nsiimportmailboxdescriptor
psource
nsifilespec
pdestination
prunichar
perrorlog
prunichar
psuccesslog
prbool
fatalerror
nsprecondition
psource
nsnull
ptr
nsprecondition
pdestination
nsnull
ptr
nsprecondition
fatalerror
nsnull
ptr
nscomptr
nsistringbundle
bundle
dontaddref
nsoutlookstringbundle
getstringbundleproxy
nsstring
success
nsstring
error
psource
pdestination
fatalerror
nsoutlookstringbundle
getstringbyid
outlookimportmailboxbadparam
error
bundle
fatalerror
fatalerror
prtrue
setlogs
success
error
perrorlog
psuccesslog
nserrornullpointer
prbool
abort
prfalse
nsstring
name
prunichar
pname
nssucceeded
psource
getdisplayname
pname
name
pname
nscrt
free
pname
pruint
mailsize
psource
getsize
mailsize
mailsize
reportsuccess
name
success
setlogs
success
error
perrorlog
psuccesslog
nsok
pruint
index
psource
getidentifier
index
print
msgcount
nsresult
rv
nsok
mbytesdone
rv
mmail
importmailbox
mbytesdone
abort
print
index
name
get
pdestination
msgcount
nssucceeded
rv
reportsuccess
name
msgcount
success
reporterror
outlookimportmailboxconverterror
name
error
setlogs
success
error
perrorlog
psuccesslog
rv
nsimethodimp
importoutlookmailimpl
getimportprogress
pruint
pdonesofar
nsprecondition
pdonesofar
nsnull
ptr
pdonesofar
nserrornullpointer
pdonesofar
mbytesdone
nsok
nsresult
importoutlookaddressimpl
create
nsiimportaddressbooks
aimport
nsprecondition
aimport
nsnull
ptr
aimport
nserrornullpointer
aimport
importoutlookaddressimpl
aimport
nserroroutofmemory
nsaddref
aimport
nsok
importoutlookaddressimpl
importoutlookaddressimpl
mmsgcount
mmsgtotal
importoutlookaddressimpl
importoutlookaddressimpl
nsimplthreadsafeisupports
importoutlookaddressimpl
nsiimportaddressbooks
nsimethodimp
importoutlookaddressimpl
getautofind
prunichar
description
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
retval
prtrue
nsstring
str
nsoutlookstringbundle
getstringbyid
outlookimportaddrname
str
description
tonewunicode
str
nsok
nsimethodimp
importoutlookaddressimpl
findaddressbooks
nsifilespec
location
nsisupportsarray
retval
nsprecondition
retval
nsnull
ptr
retval
nserrornullpointer
maddress
getaddressbooks
retval
nsimethodimp
importoutlookaddressimpl
importaddressbook
nsiimportabdescriptor
source
nsiaddrdatabase
destination
nsiimportfieldmap
fieldmap
prbool
isaddrlochome
prunichar
perrorlog
prunichar
psuccesslog
prbool
fatalerror
mmsgcount
mmsgtotal
nsprecondition
source
nsnull
ptr
nsprecondition
destination
nsnull
ptr
nsprecondition
fatalerror
nsnull
ptr
nscomptr
nsistringbundle
bundle
dontaddref
nsoutlookstringbundle
getstringbundleproxy
nsstring
success
nsstring
error
source
destination
fatalerror
importlog
bad
param
passed
to
outlook
address
nsoutlookstringbundle
getstringbyid
outlookimportaddressbadparam
error
bundle
fatalerror
fatalerror
prtrue
importoutlookmailimpl
setlogs
success
error
perrorlog
psuccesslog
nserrornullpointer
nsstring
name
prunichar
pname
nssucceeded
source
getpreferredname
pname
name
pname
nscrt
free
pname
pruint
id
nsfailed
source
getidentifier
id
importoutlookmailimpl
reporterror
outlookimportaddressbadsourcefile
name
error
importoutlookmailimpl
setlogs
success
error
perrorlog
psuccesslog
nserrorfailure
nsresult
rv
nsok
rv
maddress
importaddresses
mmsgcount
mmsgtotal
name
get
id
destination
error
nssucceeded
rv
error
isempty
reportsuccess
name
success
importoutlookmailimpl
reporterror
outlookimportaddressconverterror
name
error
importoutlookmailimpl
setlogs
success
error
perrorlog
psuccesslog
importlog
returning
from
outlook
address
rv
destination
commit
nsaddrdbcommittype
klargecommit
rv
nsimethodimp
importoutlookaddressimpl
getimportprogress
pruint
retval
nsprecondition
retval
nsnull
ptr
retval
nserrornullpointer
pruint
result
mmsgcount
mmsgtotal
result
result
mmsgtotal
result
result
result
retval
result
nsok
importoutlookaddressimpl
reportsuccess
nsstring
name
nsstring
pstream
pstream
nsistringbundle
pbundle
nsoutlookstringbundle
getstringbundleproxy
prunichar
pfmt
nsoutlookstringbundle
getstringbyid
outlookimportaddresssuccess
pbundle
prunichar
ptext
nstextformatter
smprintf
pfmt
name
get
pstream
append
ptext
nstextformatter
smprintffree
ptext
nsoutlookstringbundle
freestring
pfmt
importoutlookmailimpl
addlinebreak
pstream
nsifrelease
pbundle