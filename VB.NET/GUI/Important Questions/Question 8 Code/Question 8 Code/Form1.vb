Public Class Form1
    Private Sub RadBtnCheckChanged(sender As Object, e As EventArgs) Handles RadioButton1.CheckedChanged, RadioButton2.CheckedChanged, RadioButton3.CheckedChanged
        If RadioButton1.Checked Then
            areaofcircle.Show()
        Else
            areaofcircle.Hide()
        End If
        If RadioButton2.Checked Then
            areaoftriangle.Show()
        Else
            areaoftriangle.Hide()
        End If
        If RadioButton3.Checked Then
            volumeofcube.Show()
        Else
            volumeofcube.Hide()
        End If
    End Sub
    Private Sub FrmOption_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        RadioButton1.Checked = False
        RadioButton2.Checked = False
        RadioButton3.Checked = False
    End Sub
End Class