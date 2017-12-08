Public Class Form1
    Dim a As Double
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Timer1.Enabled = True
    End Sub
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        Label1.Text = a.ToString
        a += 0.1
        If a > 0.0 Then
            OvalShape1.FillColor = Color.Red
            OvalShape3.FillColor = Color.White
        End If
        If a > 1 Then
            OvalShape2.FillColor = Color.Yellow
            OvalShape1.FillColor = Color.White
        End If
        If a > 2 Then
            OvalShape3.FillColor = Color.Green
            OvalShape2.FillColor = Color.White
        End If
        If a > 3 Then
            a = 0.0
            Timer1.Enabled = False
            Timer1.Enabled = True
        End If
    End Sub
End Class
