Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        SerialPort1.PortName = "com1"
        SerialPort1.Close()

    End Sub

    Private Sub btnOn_Click(sender As Object, e As EventArgs) Handles btnOn.Click
        SerialPort1.Open()
        SerialPort1.WriteLine("1")
        SerialPort1.Close()
    End Sub

    Private Sub btnOff_Click(sender As Object, e As EventArgs) Handles btnOff.Click
        SerialPort1.Open()
        SerialPort1.WriteLine("2")
        SerialPort1.Close()
    End Sub

    Private Sub txtMonitoring_TextChanged(sender As Object, e As EventArgs) Handles txtMonitoring.TextChanged

    End Sub

    Private Sub btnMonitoring_Click(sender As Object, e As EventArgs) Handles btnMonitoring.Click
        SerialPort1.Open()
        SerialPort1.WriteLine("3")
        txtMonitoring.Text = SerialPort1.ReadLine()
        SerialPort1.Close()
    End Sub
End Class
