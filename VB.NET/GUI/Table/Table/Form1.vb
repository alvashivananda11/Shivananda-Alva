Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        For i = 1 To 10
            Dim n As Integer
            n = Val(TextBox1.Text)

            ListBox1.Items.Add(n * i)
        Next
    End Sub
End Class
