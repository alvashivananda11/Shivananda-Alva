Imports System.IO
Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Me.RichTextBox1.LoadFile("D:\Programs\VB.NET\My Codes\GUI\file1.txt", RichTextBoxStreamType.PlainText)
    End Sub
End Class
