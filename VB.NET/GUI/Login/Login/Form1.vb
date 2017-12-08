Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If (TextBox1.Text = "admin" And TextBox2.Text = 12345) Then
            Form2.Show()
            Me.Hide()
        Else
            Form3.Show()
            Me.Hide()
        End If
    End Sub
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Me.Text = "Welcome to login page"
    End Sub
End Class
