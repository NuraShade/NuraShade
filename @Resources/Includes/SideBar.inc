[Variables]
OriginalWidth=150
HoverWidth=250
CurrentWidth=150
State=0
U=[!UpdateMeasure MeasureAnimationTimer][!UpdateMeter *][!Redraw]
;-----------
Current_SideBar_Width=70
Original_SideBar_Width=70
Hover_SideBar_Width=150

SideBar_Stroke_Width=5
SideBar_Animation_Steps=10

[MeasureAnimationTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ExpandStep,25,15
ActionList2=Repeat ShrinkStep,25,15
ExpandStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#+#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"]#U#
ShrinkStep=[!SetVariable Current_SideBar_Width "(Clamp(#Current_SideBar_Width#-#SideBar_Animation_Steps#,#Original_SideBar_Width#,#Hover_SideBar_Width#))"]#U#
DynamicVariables=1

[SideBar_Background]
Meter=Shape
X=10
Y=(#TitleBar_Height#+#SideBar_Stroke_Width#)
Shape=Rectangle 0,0,(#Current_SideBar_Width#*[Scale_Size]),(#Skin_Height#-#TitleBar_Height#-(#SideBar_Stroke_Width#+10)),15 | StrokeWidth #SideBar_Stroke_Width# | StrokeColor #Primary_Color# | FillColor #Secondary_Color#
DynamicVariables=1
MouseOverAction=[!CommandMeasure MeasureAnimationTimer "Execute 1"][!Log "Mouse Over Detected"]
MouseLeaveAction=[!CommandMeasure MeasureAnimationTimer "Execute 2"][!Log "Mouse Leave Detected"]