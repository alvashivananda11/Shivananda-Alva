
' ===========================================================================================================
' ===========================================================================================================
'
'                   Take L1 & L2 and 4 Buttons viz. Add, AddAll, Delete, DeleteAll.
'                       When Add is Clicked, item from L1 should egt added to L2.
'                   When Delete is clicked, selected item from L2 should get Deleted.
'           Similarly when AddAll / DeleteAll, are clicked, it should addall / deleteall elements.
'
' ===========================================================================================================
' ===========================================================================================================

Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        L2.Items.Add(L1.SelectedItem)
        Label1.Text = "hii"

    End Sub


    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click



        L2.Items.Clear()

        L2.Items.AddRange(L1.Items)


    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click

        L2.Items.Remove(L2.SelectedItem)

    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click

        L2.Items.Clear()

    End Sub
End Class