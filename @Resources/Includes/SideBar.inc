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
[Variables]
SideBar_Hover_State=0
Current_SideBar_Width=60
Original_SideBar_Width=60
SideBar_X_Pos=10
Hover_SideBar_Width=200
SideBar_Stroke_Width=5
SideBar_Animation_Steps=15
;------------------
Page_Content_Icon_Width=25
Page_Content_Icon_Height=25
Page_Content_Background_Width=([SideBar_Background:W]-20)
Page_Content_Background_Height=40
;=============================================================
;           MeterStyles
;=============================================================
[Page_Content_Background_Style]
X=(#SideBar_X_Pos#+#SideBar_Stroke_Width#+4)
Y=15R
Shape=Rectangle 0,0,#Page_Content_Background_Width#,#Page_Content_Background_Height#,8 | StrokeWidth 0 | Extend This
This=FillColor 0,0,0,0
MouseOverAction=[!SetOption #CURRENTSECTION# This  "FillColor #On_Hover_Color#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This  "FillColor 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=SideBar_Content
DynamicVariables=1

[Page_Content_Icon_Style]
X=((60-20)-(#Page_Content_Icon_Width#/2))
Y=((#Page_Content_Background_Height#/2)-(#Page_Content_Icon_Height#/2))r
W=#Page_Content_Icon_Width#
H=#Page_Content_Icon_Height#
Group=SideBar_Content
DynamicVariables=1

[Page_Content_Icon_Active_0_Style]
ImageTint=#Icon_Color#

[Page_Content_Icon_Active_1_Style]
ImageTint=#Active_Icon_Color#

[Page_Content_Text_Style]
FontColor=255,255,255
X=15R
Y=(#Page_Content_Icon_Width#/2)r
W=(#Current_SideBar_Width#-80)
H=20
ClipString=2
Antialias=1
StringAlign=LeftCenter
FontFace=#Font_Style#
FontSize=10
FontWeight=100
Group=SideBar_Content
DynamicVariables=1

[Page_Content_Text_Active_0_Style]
FontColor=#Secondary_Text_Color#

[Page_Content_Text_Active_1_Style]
FontColor=#Primary_Text_Color#
;=============================================================
;           Measures
;=============================================================
[SideBar_Content_Transition_Timer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ExpandStep,25,15
ActionList2=Repeat ShrinkStep,25,15
ExpandStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#+#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"][!UpdateMeasure SideBar_Content_Transition_Timer][!SetVariable SideBar_Hover_State "1"][!UpdateMeterGroup SideBar_Content][!UpdateMeasure #CURRENTSECTION#][!Redraw]
ShrinkStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#-#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"][!UpdateMeasure SideBar_Content_Transition_Timer][!SetVariable SideBar_Hover_State "0"][!UpdateMeterGroup SideBar_Content][!UpdateMeasure #CURRENTSECTION#][!Redraw]
DynamicVariables=1
;=============================================================
;           Content
;=============================================================
[SideBar_Background]
Meter=Shape
X=#SideBar_X_Pos#
Y=(#TitleBar_Height#+#SideBar_Stroke_Width#)
Shape=Rectangle 0,0,(#Current_SideBar_Width#),(#Skin_Height#-#TitleBar_Height#-(#SideBar_Stroke_Width#+10)),15 | StrokeWidth #SideBar_Stroke_Width# | StrokeColor #Primary_Color# | FillColor #Secondary_Color#
Group=SideBar_Content
DynamicVariables=1
MouseOverAction=[!CommandMeasure SideBar_Content_Transition_Timer "Stop 2"][!CommandMeasure SideBar_Content_Transition_Timer "Execute 1"]
MouseLeaveAction=[!CommandMeasure SideBar_Content_Transition_Timer "Stop 1"][!CommandMeasure SideBar_Content_Transition_Timer "Execute 2"]

@include_sidebar_variant=#@#Includes\SideBarVariant#SideBar_Variant#.inc
