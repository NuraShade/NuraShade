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
State=0
Current_SideBar_Width=60
Original_SideBar_Width=60
Hover_SideBar_Width=150
SideBar_Stroke_Width=5
SideBar_Animation_Steps=10

[SideBar_Content_Transition_Timer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ExpandStep,25,15
ActionList2=Repeat ShrinkStep,25,15
ExpandStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#+#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"][!UpdateMeasure SideBar_Content_Transition_Timer][!UpdateMeterGroup SideBar_Content][!Redraw]
ShrinkStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#-#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"][!UpdateMeasure SideBar_Content_Transition_Timer][!UpdateMeterGroup SideBar_Content][!Redraw]
DynamicVariables=1

[SideBar_Background]
Meter=Shape
X=10
Y=(#TitleBar_Height#+#SideBar_Stroke_Width#)
Shape=Rectangle 0,0,(#Current_SideBar_Width#),(#Skin_Height#-#TitleBar_Height#-(#SideBar_Stroke_Width#+10)),15 | StrokeWidth #SideBar_Stroke_Width# | StrokeColor #Primary_Color# | FillColor #Secondary_Color#
Group=SideBar_Content
DynamicVariables=1
MouseOverAction=[!CommandMeasure SideBar_Content_Transition_Timer "Execute 1"]
MouseLeaveAction=[!CommandMeasure SideBar_Content_Transition_Timer "Execute 2"]