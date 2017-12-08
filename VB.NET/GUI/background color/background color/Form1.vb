Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Radiobutton1.BackColor = Color.White
        RadioButton2.BackColor = Color.White
    End Sub
    Private Sub RadioButton1_CheckedChanged(sender As Object, e As EventArgs) Handles Radiobutton1.CheckedChanged
        Me.BackColor = Color.Red
    End Sub

    Private Sub RadioButton2_CheckedChanged(sender As Object, e As EventArgs) Handles RadioButton2.CheckedChanged
        Me.BackColor = Color.Blue
    End Sub
End Class
