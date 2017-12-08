Public Class Form1
    Dim r As Integer = 0
    Dim g As Integer = 0
    Dim b As Integer = 0
    Private Sub HScrollBar1_Scroll(sender As Object, e As ScrollEventArgs) Handles HScrollBar1.Scroll
        r = HScrollBar1.Value()
        Me.BackColor = Color.FromArgb(r, g, b)
    End Sub
    Private Sub HScrollBar2_Scroll(sender As Object, e As ScrollEventArgs) Handles HScrollBar2.Scroll
        g = HScrollBar2.Value()
        Me.BackColor = Color.FromArgb(r, g, b)
    End Sub
    Private Sub HScrollBar3_Scroll(sender As Object, e As ScrollEventArgs) Handles HScrollBar3.Scroll
        b = HScrollBar3.Value()
        Me.BackColor = Color.FromArgb(r, g, b)
    End Sub
End Class
