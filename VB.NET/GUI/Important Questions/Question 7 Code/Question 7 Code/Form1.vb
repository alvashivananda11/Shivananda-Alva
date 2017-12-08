Public Class Form1
    Dim num, remainder, temp, reverseInt As Integer

    Private Sub BtnValidate_Click(sender As Object, e As EventArgs) Handles Button1.Click
        reverseInt = 0
        temp = TextBox1.Text
        While temp <> 0
            remainder = temp Mod 10
            reverseInt = reverseInt * 10 + remainder
            temp /= 10
        End While
        If temp = reverseInt Then
            Label1.Text = "The Number is a Pallindrome Number"
        Else
            Label1.Text = "The Number is Not a Pallindrome Number"

        End If

    End Sub

End Class