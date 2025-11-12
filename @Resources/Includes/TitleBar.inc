[Variables]
Mo=([NuraShade_Logo:Y]+([NuraShade_Logo:W]/2))
[TitleBar_Background]
Meter=Shape
X=(#Skin_Border#/2)
Y=(#Skin_Border#/2)
Shape=Rectangle 0,0,(#Skin_Width#-#Skin_Border#),#TitleBar_Height#,0 | StrokeWidth 0 | FillColor 10,10,10
LeftMouseDoubleClickAction=[!CommandMeasure WindowHandler ToggleMaximize()]
MouseActionCursor=0
DynamicVariables=1

[NuraShade_Logo]
Meter=Image 
ImageName=#@#Images\NuraShade.png 
W=35
H=35
X=5
Y=5

[NuraShade_String]
Meter=String
Text=NuraShade
X=5R
Y=23
FontColor=#Primary_Text_Color#
FontSize=13
FontFace=#Font_Style#
FontWeight=100
StringAlign=LeftCenter
Antialias=1
DynamicVariables=1