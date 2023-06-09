
[Variables]

;----------
;--System--
;----------
fontName=Trebuchet MS
textSize=8
colorText=64,255,0,205
colorLine=255,0,4,255
colorBar=0,255,0,255
heightBar=2

;------------
;--CPU Info--
;------------
coreNumber=4
threadNumber=8
maxTempCPU=100

;---------
;--Disks--
;---------
;Speeds in MB/s
diskNumber=2
disk1=C
disk1Speed=120
disk2=D
disk2Speed=120
disk3=E
disk3Speed=100
disk4=F
disk4Speed=100

;-----------
;--Network--
;-----------
;Measure in Mb/s
maxDownload=50
maxUpload=50

;---------
;--Clock--
;---------
;Set to "1" for 12 hour clock
12Hour=9

;------------
;--GPU Info--
;------------
GPUMemory=2048
maxTempGPU=100

;-----------
;--Weather--
;-----------
ZIP=27406

;----------------
;--Music Player--
;----------------
;For supported players: http://docs.rainmeter.net/manual/plugins/nowplaying#playerlist
MusicPlayer=WMP

[styleTitle]
StringAlign=Center
StringCase=Upper
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=(#textsize# + 2)
AntiAlias=1
ClipString=1

[styleLeftText]
; Meters using styleLeftText will be left-aligned.
StringAlign=Left
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
W=190
H=15

[styleRightText]
; Meters using styleRightText will be right-aligned.
StringAlign=Right
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
W=190
H=15

[styleCenterText]
; Meters using styleCenterText will be center-aligned.
StringAlign=Center
StringCase=None
StringStyle=Bold
StringEffect=Shadow
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1
W=190
H=15

[styleBar]
BarColor=#colorBar#
BarOrientation=Horizontal
SolidColor=255,255,255,15
W=190
H=#heightBar#

[styleLine]
LineCount=1
LineColor=#colorLine#
AntiAlias=1
GraphStart=Left
W=190
H=25

[styleSeperator]
SolidColor=255,255,255,15
W=190
H=#heightBar#
