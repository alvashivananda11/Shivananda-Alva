Public Class form1
    Private Sub LstB1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged
        Button1.Text = ListBox1.SelectedItem
    End Sub

    Private Sub BtnAdd_Click(sender As Object, e As EventArgs) Handles Button1.Click
        ListBox2.Items.Add(ListBox1.SelectedItem)
    End Sub
End Class