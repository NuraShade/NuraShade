; ============================================================
;  NuraShade Skin
;  Copyright (c) 2025 NuraShade
;
;  Licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
;  You are free to:
;    • Share — copy and redistribute the material in any medium or format
;    • Adapt — remix, transform, and build upon the material
;      for any purpose, even commercially.
;
;  Under the following terms:
;    • Attribution — You must give appropriate credit, provide a link to the license,
;      and indicate if changes were made.
;    • ShareAlike — If you remix, transform, or build upon the material,
;      you must distribute your contributions under the same license as the original.
;
;  License Details: https://creativecommons.org/licenses/by-sa/3.0/
; ============================================================
;=============================================================
;           MeterStyles
;=============================================================
[WindowControls_Icons_Style]
Y=((#TitleBar_Height#/2)-21)
W=25
H=25
ImageName=#@#Images\FluentIcons\WindowControls\[&Func:trimText('#CURRENTSECTION#','_Icon','')].png 
SolidColor=0,0,0,0
ImageTint=#Icons_Color#
Padding=10,10,10,10
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #On_Hover_Color# ][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 0,0,0,0][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

;=============================================================
;          Content
;=============================================================
[TitleBar_Background]
Meter=Shape
X=(#Skin_Border#/2)
Y=(#Skin_Border#/2)
Shape=Rectangle 0,0,(#Skin_Width#-#Skin_Border#),#TitleBar_Height#,0 | StrokeWidth 0 | FillColor 0,0,0,0
LeftMouseDoubleClickAction=[!CommandMeasure WindowHandler ToggleMaximize()]
MouseActionCursor=0
DynamicVariables=1

;NuraShade Logo in TitleBar
[NuraShade_Logo]
Meter=Image 
ImageName=#@#Images\#Skin_Name#.png 
W=35
H=35
X=5
Y=5

;NuraShade Text in TitleBar
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

;Window Control Icons
[Minimize_Icon]
Meter=Image
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
X=(#Skin_Width#-45)
MeterStyle=WindowControls_Icons_Style