nscore
nscrt
nscomptr
nsstring
nsreadableutils
nsicomponentmanager
nsiservicemanager
nsiimportservice
nsiimportfieldmap
nsabbasecid
nsiabcard
nsoeaddressiterator
oedebuglog
nsdefinecid
kabcardpropertycid
nsabcardpropertycid
print
mozfield
print
multiline
ulong
mapitag
mapifields
define
kismultiline
define
knomultiline
mapifields
gmapifields
kismultiline
prcomment
knomultiline
prbusinesstelephonenumber
knomultiline
prhometelephonenumber
knomultiline
prcompanyname
knomultiline
prtitle
knomultiline
prcellulartelephonenumber
knomultiline
prpagertelephonenumber
knomultiline
prbusinessfaxnumber
knomultiline
prhomefaxnumber
knomultiline
prcountry
knomultiline
prlocality
knomultiline
prstateorprovince
prstreetaddress
knomultiline
prpostalcode
knomultiline
prpersonalhomepage
knomultiline
prbusinesshomepage
knomultiline
prhomeaddresscity
knomultiline
prhomeaddresscountry
knomultiline
prhomeaddresspostalcode
knomultiline
prhomeaddressstateorprovince
prhomeaddressstreet
knomultiline
prdepartmentname
nsoeaddressiterator
nsoeaddressiterator
cwab
pwab
nsiaddrdatabase
database
mpwab
pwab
mdatabase
database
nsifaddref
mdatabase
nsoeaddressiterator
nsoeaddressiterator
nsifrelease
mdatabase
nsresult
nsoeaddressiterator
enumuser
prunichar
pname
lpentryid
peid
ulong
cbeid
importlog
user
pname
nsresult
rv
nsok
mdatabase
lpmailuser
puser
mpwab
getuser
cbeid
peid
puser
nsimdbrow
newrow
nsnull
rv
mdatabase
getnewrow
newrow
nsensuresuccess
rv
rv
newrow
buildcard
pname
newrow
puser
rv
mdatabase
addcardrowtodb
newrow
nsensuresuccess
rv
rv
importlog
added
entry
to
address
book
database
mpwab
releaseuser
puser
rv
nsresult
nsoeaddressiterator
enumlist
prunichar
pname
lpentryid
peid
ulong
cbeid
pname
pname
nsok
nsresult
rv
nserrorfailure
mdatabase
rv
nscomptr
nsimdbrow
newrow
rv
mdatabase
getnewlistrow
getteraddrefs
newrow
nsensuresuccess
rv
rv
rv
mdatabase
addlistname
newrow
nsconvertucstoutf
pname
get
nsensuresuccess
rv
rv
rv
mdatabase
addcardrowtodb
newrow
nsensuresuccess
rv
rv
rv
mdatabase
addlistdirnode
newrow
rv
nsoeaddressiterator
sanitizevalue
nsstring
val
val
replacesubstring
nsliteralstring
xd
xa
get
nsliteralstring
get
val
replacechar
val
replacechar
nsoeaddressiterator
splitstring
nsstring
val
nsstring
val
nsstring
temp
print
idx
val
rfind
xd
xa
print
cnt
idx
cnt
idx
val
rfindchar
idx
idx
val
rfindchar
idx
val
right
val
val
length
idx
cnt
val
left
temp
idx
val
temp
sanitizevalue
val
prbool
nsoeaddressiterator
buildcard
prunichar
pname
nsimdbrow
newrow
lpmailuser
puser
nsstring
lastname
nsstring
firstname
nsstring
email
nsstring
nickname
nsstring
middlename
lpspropvalue
pprop
mpwab
getuserproperty
puser
premailaddress
pprop
mpwab
getvaluestring
pprop
email
sanitizevalue
email
mpwab
freeproperty
pprop
pprop
mpwab
getuserproperty
puser
prgivenname
pprop
mpwab
getvaluestring
pprop
firstname
sanitizevalue
firstname
mpwab
freeproperty
pprop
pprop
mpwab
getuserproperty
puser
prsurname
pprop
mpwab
getvaluestring
pprop
lastname
sanitizevalue
lastname
mpwab
freeproperty
pprop
pprop
mpwab
getuserproperty
puser
prmiddlename
pprop
mpwab
getvaluestring
pprop
middlename
sanitizevalue
middlename
mpwab
freeproperty
pprop
pprop
mpwab
getuserproperty
puser
prnickname
pprop
mpwab
getvaluestring
pprop
nickname
sanitizevalue
nickname
mpwab
freeproperty
pprop
firstname
isempty
lastname
isempty
firstname
pname
nsstring
displayname
pprop
mpwab
getuserproperty
puser
prdisplayname
pprop
mpwab
getvaluestring
pprop
displayname
sanitizevalue
displayname
mpwab
freeproperty
pprop
displayname
isempty
firstname
isempty
displayname
pname
displayname
firstname
middlename
isempty
displayname
append
prunichar
displayname
append
middlename
lastname
isempty
displayname
append
prunichar
displayname
append
lastname
displayname
isempty
mdatabase
adddisplayname
newrow
nsconvertucstoutf
displayname
get
firstname
isempty
mdatabase
addfirstname
newrow
nsconvertucstoutf
firstname
get
lastname
isempty
mdatabase
addlastname
newrow
nsconvertucstoutf
lastname
get
nickname
isempty
mdatabase
addnickname
newrow
nsconvertucstoutf
nickname
get
email
isempty
mdatabase
addprimaryemail
newrow
nsconvertucstoutf
email
get
nsstring
value
nsstring
line
nsresult
rv
nscomptr
nsiimportservice
impsvc
dogetservice
nsimportservicecontractid
rv
nssucceeded
rv
nsiimportfieldmap
pfieldmap
nsnull
rv
impsvc
createnewfieldmap
pfieldmap
nssucceeded
rv
pfieldmap
max
gmapifields
mapifields
max
pprop
mpwab
getuserproperty
puser
gmapifields
mapitag
pprop
mpwab
getvaluestring
pprop
value
mpwab
freeproperty
pprop
value
isempty
gmapifields
multiline
knomultiline
sanitizevalue
value
pfieldmap
setfieldvalue
mdatabase
newrow
gmapifields
mozfield
value
get
gmapifields
multiline
kismultiline
pfieldmap
setfieldvalue
mdatabase
newrow
gmapifields
mozfield
value
get
line
truncate
splitstring
value
line
value
isempty
pfieldmap
setfieldvalue
mdatabase
newrow
gmapifields
mozfield
value
get
line
isempty
pfieldmap
setfieldvalue
mdatabase
newrow
gmapifields
multiline
line
get
nsrelease
pfieldmap
prtrue