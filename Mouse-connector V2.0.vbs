Dim Re
Re = msgbox("【免责声明】" & Chr(13) & "" & Chr(13) &"(1)本软件仅限于特定情况使用" & Chr(13) & "" & Chr(13) & "(2)本软件完全免费，任何人不得用于商业用途。任何违规使用造成的法律后果与软件开发者无关。" & Chr(13) & "" & Chr(13) & "务必接受上述条款才可继续使用，是否接受?",1+64,"鼠标连点器v2.0波动版")
If Re = vbOK Then
Set Ws=CreateObject("Wscript.Shell")
Ws.Run("start.exe")
End If
