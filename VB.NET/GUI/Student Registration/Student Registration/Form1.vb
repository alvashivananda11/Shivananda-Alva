Public Class Form1
    Dim a As Integer = 1
    Dim b As String = "shivananda"
    Dim z As Integer = 18
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If (TextBox1.Text = b And TextBox3.Text = z) Then
            Label6.Text = a
            a = a + 1
            MessageBox.Show("Data Is Valid")
            MsgBox(TextBox1.Text)
            MsgBox(TextBox2.Text)
            MessageBox.Show(TextBox3.Text)
            MsgBox(TextBox4.Text)
            TextBox1.Clear()
            TextBox2.Clear()
            TextBox3.Clear()
            TextBox4.Clear()
        Else
            MsgBox("Data is Not Valid")
            TextBox1.Clear()
            TextBox2.Clear()
            TextBox3.Clear()
            TextBox4.Clear()
        End If
    End Sub
End Class
