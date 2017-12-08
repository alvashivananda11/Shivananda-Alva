' ===========================================================================================================
' ===========================================================================================================
'
'                   Write a GUI Application which will show different colours in the list.
'                        When User will click on " SELECT " Button, then set the 
'                      backgroung colour of the application with the selected colour.
'
'                                               DIFFERENCE
'
'               1. Here there are Different buttons for the Name of colours written on them.
'               2. The Event of colour change occurs when the User Hovers Over the Button.
'
' ===========================================================================================================
' ===========================================================================================================

Public Class Form1
    Private Sub Button1_Click_1(sender As Object, e As EventArgs) Handles Button1.Click
        Dim a As String = ListBox1.SelectedItem
        Select Case a
            Case "Red"
                Me.BackColor = Drawing.Color.Red
            Case "Blue"
                Me.BackColor = Drawing.Color.Blue
            Case "Green"
                Me.BackColor = Drawing.Color.Green
        End Select
    End Sub
End Class
