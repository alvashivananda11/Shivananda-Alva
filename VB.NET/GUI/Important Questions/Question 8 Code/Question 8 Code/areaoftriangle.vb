Public Class areaoftriangle

    Private Sub BtnArTriangle_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Dim base, height, area As Double

        base = TextBox1.Text
        height = TextBox1.Text

        area = (0.5 * base) / height

        Result.Label1.Text = "Area of the Triangle is : " & area.ToString

        Result.Show()

        Me.Hide()

    End Sub

End Class