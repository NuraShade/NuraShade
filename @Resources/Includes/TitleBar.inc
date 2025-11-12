;===========================================================================
;           MeterStyles
;===========================================================================

[WindowControls_Icons_Style]
Y=((#TitleBar_Height#/2)-21)
SolidColor=0,0,0,0
DynamicVariables=1
Padding=10,10,10,10
W=25
H=25
ImageTint=#Icons_Color#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #Solid_Color_On_Hover# ][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 0,0,0,0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[TitleBar_Background]
Meter=Shape
X=(#Skin_Border#/2)
Y=(#Skin_Border#/2)
Shape=Rectangle 0,0,(#Skin_Width#-#Skin_Border#),#TitleBar_Height#,0 | StrokeWidth 0 | FillColor 0,0,0,0
LeftMouseDoubleClickAction=[!CommandMeasure WindowHandler ToggleMaximize()]
MouseActionCursor=0
DynamicVariables=1

[NuraShade_Logo]
Meter=Image 
ImageName=#@#Images\#Skin_Name#.png 
W=35
H=35
X=5
Y=5

[NuraShade_String]
Meter=String
Text=#Skin_Name#
X=5R
Y=23
FontColor=#Primary_Text_Color#
FontSize=13
FontFace=#Font_Style#
FontWeight=100
StringAlign=LeftCenter
Antialias=1
DynamicVariables=1

[Minimize_Icon]
Meter=Image
ImageName=#@#Images\FluentIcons\WindowControls\Minimize.png 
X=(#Skin_Width#-135)
MeterStyle=WindowControls_Icons_Style
LeftMouseUpAction=[!CommandMeasure WindowHandler Minimize()]

[Maximize_Icon]
Meter=Image
ImageName=#@#Images\FluentIcons\WindowControls\Maximize#Window_Maximized#.png 
X=(#Skin_Width#-90)
MeterStyle=WindowControls_Icons_Style
LeftMouseUpAction=[!CommandMeasure WindowHandler ToggleMaximize()]

[Close_Icon]
Meter=Image
ImageName=#@#Images\FluentIcons\WindowControls\Close.png 
X=(#Skin_Width#-45)
MeterStyle=WindowControls_Icons_Style