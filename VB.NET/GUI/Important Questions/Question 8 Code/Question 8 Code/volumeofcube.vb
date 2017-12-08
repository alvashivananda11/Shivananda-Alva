Public Class volumeofcube

    Private Sub TxtCubeInput_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

        Dim side, volume As Double

        side = TextBox1.Text

        volume = Math.Pow(side, 3)

        Result.Label1.Text = "Volume of the Cube is : " & volume.ToString

        Result.Show()

        Me.Hide()

    End Sub

End Class