Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        If Not ComboBox1.Items.Contains(TextBox1.Text.ToUpper) Then

            ComboBox1.Items.Add(TextBox1.Text.ToUpper)
            Label1.Text = "Color " & TextBox1.Text.ToUpper & " is Added in the List."
            TextBox1.Text = ""
            TextBox1.Focus()

        Else

            Label1.Text = " The Color of this Name already Exists"

        End If

    End Sub

    Private Sub ComboBoxColors_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ComboBox1.SelectedIndexChanged

        Try

            Dim SelectedColor As String = ComboBox1.SelectedItem
            Dim C As Color

            C = Color.FromName(SelectedColor)
            Me.BackColor = C

        Catch ex As Exception

            MsgBox("Color does not Exist.", MsgBoxStyle.RetryCancel)

        End Try

    End Sub

End Class