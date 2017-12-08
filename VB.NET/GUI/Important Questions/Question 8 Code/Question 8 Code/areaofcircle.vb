Public Class areaofcircle

    Private Sub BtnArCircle_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Dim radius, area As Double

        radius = CDbl(TextBox1.Text)

        area = 3.142857 * radius * radius

        Result.Label1.Text = "Area of the Circle is : " & area.ToString

        Result.Show()

        Me.Hide()

    End Sub

End Class