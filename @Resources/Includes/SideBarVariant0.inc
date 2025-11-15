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
[Page_Content_Background_0]
Meter=Shape
Y=20r
MeterStyle=Page_Content_Background_Style
[Page_Content_Icon_0]
Meter=Image
ImageName=#@#Images\FluentIcons\SideBar\Home[&Func:getIconStyle('#CURRENTSECTION#',#Current_Page_Index#)].png
MeterStyle=Page_Content_Icon_Style | Page_Content_Icon_Active_0_Style
[Page_Content_Text_0]
Meter=String
Text=Home
MeterStyle=Page_Content_Text_Style | Page_Content_Text_Active_0_Style

[Page_Content_Background_1]
Meter=Shape
MeterStyle=Page_Content_Background_Style
[Page_Content_Icon_1]
Meter=Image
ImageName=#@#Images\FluentIcons\SideBar\Widgets[&Func:getIconStyle('#CURRENTSECTION#',#Current_Page_Index#)].png
MeterStyle=Page_Content_Icon_Style
[Page_Content_Text_1]
Meter=String
Text=Widgets
MeterStyle=Page_Content_Text_Style | Page_Content_Text_Active_0_Style

[Page_Content_Background_2]
Meter=Shape
MeterStyle=Page_Content_Background_Style
[Page_Content_Icon_2]
Meter=Image
ImageName=#@#Images\FluentIcons\SideBar\Store[&Func:getIconStyle('#CURRENTSECTION#',#Current_Page_Index#)].png
MeterStyle=Page_Content_Icon_Style
[Page_Content_Text_2]
Meter=String
Text=Store
MeterStyle=Page_Content_Text_Style | Page_Content_Text_Active_0_Style

[Page_Content_Background_3]
Meter=Shape
MeterStyle=Page_Content_Background_Style
[Page_Content_Icon_3]
Meter=Image
ImageName=#@#Images\FluentIcons\SideBar\About[&Func:getIconStyle('#CURRENTSECTION#',#Current_Page_Index#)].png
MeterStyle=Page_Content_Icon_Style
[Page_Content_Text_3]
Meter=String
Text=About
MeterStyle=Page_Content_Text_Style | Page_Content_Text_Active_0_Style

[SideBar_Divider]
Meter=Shape
X=([SideBar_Background:X]+10)
Y=([SideBar_Background:Y]+[SideBar_Background:H]-70)
Shape=Line 0,0,([SideBar_Background:W]-20),0 | StrokeWidth 1 | Stroke Color #Icon_Color#,100
Group=SideBar_Content
DynamicVariables=1

[Page_Content_Background_4]
Meter=Shape
Y=10R
MeterStyle=Page_Content_Background_Style
[Page_Content_Icon_4]
Meter=Image
ImageName=#@#Images\FluentIcons\SideBar\Settings[&Func:getIconStyle('#CURRENTSECTION#',#Current_Page_Index#)].png
MeterStyle=Page_Content_Icon_Style
[Page_Content_Text_4]
Meter=String
Text=Settings
MeterStyle=Page_Content_Text_Style | Page_Content_Text_Active_0_Style
