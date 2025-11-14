[Description_Text]
Meter=String
X=20
Y=(#Skin_Height#*0.35)
Text=NuraShade #CRLF##CRLF#A new era of desktop customization.#CRLF#Modern. Simple. Yours.Bringing a cleaner, smarter, and more visually immersive experience that empowers you to redesign your workspace exactly the way you want, all with a truly modern approach.
Antialias=1
FontFace=#Font_Style#
FontColor=#Primary_Text_Color#
FontSize=(30*[Scale_Size])
FontWeight=900
DynamicVariables=1
W=((#Skin_Width#-#Skin_Border#-#Original_SideBar_Width#-#SideBar_X_Pos#-#SideBar_Stroke_Width#)/2)
ClipString=2
StringAlign=LeftCenter
Container=Content_Container
InlineSetting=Shadow | 2 | 2 | 3.5 | #Secondary_Text_Color#,80
InlinePattern=(?s)^(.*customization)
InlineSetting2=GradientColor | 180 | #Primary_Accent_Color# ; 0.0 | #Secondary_Accent_Color# ; 0.5 
InlinePattern2=(?s)^(.*customization.)
InlineSetting3=Size | (12*[Scale_Size])
InlinePattern3=Modern\..*$
InlineSetting4=Weight | 100
InlinePattern4=Modern\..*$
InlineSetting5=Color | #Secondary_Text_Color#
InlinePattern5=Modern\..*$
InlineSetting6=Size | (60*[Scale_Size])
InlinePattern6=^NuraShade

[Social_Icon_Background_Style]
X=20R
Y=([Description_Text:Y]+[Description_Text:H]+30)
Shape=Rectangle 0,0,(45*[Scale_Size]),(45*[Scale_Size]),(45*[Scale_Size]) | StrokeWidth (4*[Scale_Size]) | Stroke LinearGradient MyStrokeGradient | Fill LinearGradient MyFillGradient 
MyFillGradient=180 | 0,0,0,0 ; 0.0 | 0,0,0,0 ; 0.5 
MyStrokeGradient=90 | #Primary_Accent_Color# ; 0.0 | #Secondary_Accent_Color# ; 0.5 
DynamicVariables=1
Container=Content_Container
Group=Social_Link
MouseOverAction=[!SetOption #CURRENTSECTION# MyFillGradient "180 | #Primary_Accent_Color# ; 0.0 | #Secondary_Accent_Color# ; 0.5"][!SetOption #CURRENTSECTION# MyStrokeGradient "180 | #Primary_Accent_Color# ; 0.0 | #Secondary_Accent_Color# ; 0.5 "][!UpdateMeterGroup Social_Link][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# MyFillGradient "180 | 0,0,0,0 ; 0.0 | 0,0,0,0 ; 0.5"][!SetOption #CURRENTSECTION# MyStrokeGradient "90 | #Primary_Accent_Color# ; 0.0 | #Secondary_Accent_Color# ; 0.5"][!UpdateMeterGroup Social_Link][!Redraw]
[Social_Icon_Style]
ImageName=#@#Images\Social\[&Func:trimText('#CURRENTSECTION#','_Icon','')].png
X=(((45*[Scale_Size])/2)-((30*[Scale_Size])/2))r
Y=(((45*[Scale_Size])/2)-((30*[Scale_Size])/2))r
W=(30*[Scale_Size])
H=(30*[Scale_Size])
DynamicVariables=1
ImageTint=#Icon_Color#
Container=Content_Container

[Website_Background_Shape]
Meter=Shape
X=20
MeterStyle=Social_Icon_Background_Style
[Website_Icon]
Meter=Image
MeterStyle=Social_Icon_Style

[Github_Background_Shape]
Meter=Shape
MeterStyle=Social_Icon_Background_Style
[Github_Icon]
Meter=Image
MeterStyle=Social_Icon_Style

[Deviantart_Background_Shape]
Meter=Shape
MeterStyle=Social_Icon_Background_Style
[Deviantart_Icon]
Meter=Image
MeterStyle=Social_Icon_Style

[Discord_Background_Shape]
Meter=Shape
MeterStyle=Social_Icon_Background_Style
[Discord_Icon]
Meter=Image
MeterStyle=Social_Icon_Style

[NuraShade__Home_Logo]
Meter=Image
ImageName=#@#Images\NuraShade.png
X=(#Skin_Width#-((500)*[Scale_Size]))
Y=(#Skin_Height#*0.10)
W=(500*[Scale_Size])
H=(500*[Scale_Size])
SolidColor=0,0,0,0
DynamicVariables=1
Container=Content_Container