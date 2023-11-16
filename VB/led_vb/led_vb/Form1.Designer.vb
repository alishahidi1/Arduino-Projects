<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.btnOn = New System.Windows.Forms.Button()
        Me.btnOff = New System.Windows.Forms.Button()
        Me.btnMonitoring = New System.Windows.Forms.Button()
        Me.txtMonitoring = New System.Windows.Forms.TextBox()
        Me.SerialPort1 = New System.IO.Ports.SerialPort(Me.components)
        Me.SuspendLayout()
        '
        'btnOn
        '
        Me.btnOn.BackColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(192, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.btnOn.Font = New System.Drawing.Font("Times New Roman", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(178, Byte))
        Me.btnOn.Location = New System.Drawing.Point(37, 33)
        Me.btnOn.Name = "btnOn"
        Me.btnOn.Size = New System.Drawing.Size(178, 65)
        Me.btnOn.TabIndex = 0
        Me.btnOn.Text = "Turn On"
        Me.btnOn.UseVisualStyleBackColor = False
        '
        'btnOff
        '
        Me.btnOff.BackColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(192, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.btnOff.Font = New System.Drawing.Font("Times New Roman", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(178, Byte))
        Me.btnOff.Location = New System.Drawing.Point(241, 33)
        Me.btnOff.Name = "btnOff"
        Me.btnOff.Size = New System.Drawing.Size(178, 65)
        Me.btnOff.TabIndex = 0
        Me.btnOff.Text = "Turn Off"
        Me.btnOff.UseVisualStyleBackColor = False
        '
        'btnMonitoring
        '
        Me.btnMonitoring.BackColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(192, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.btnMonitoring.Font = New System.Drawing.Font("Times New Roman", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(178, Byte))
        Me.btnMonitoring.Location = New System.Drawing.Point(445, 33)
        Me.btnMonitoring.Name = "btnMonitoring"
        Me.btnMonitoring.Size = New System.Drawing.Size(178, 65)
        Me.btnMonitoring.TabIndex = 0
        Me.btnMonitoring.Text = "Monitoring"
        Me.btnMonitoring.UseVisualStyleBackColor = False
        '
        'txtMonitoring
        '
        Me.txtMonitoring.BackColor = System.Drawing.SystemColors.InactiveCaption
        Me.txtMonitoring.Font = New System.Drawing.Font("Times New Roman", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(178, Byte))
        Me.txtMonitoring.Location = New System.Drawing.Point(37, 168)
        Me.txtMonitoring.Name = "txtMonitoring"
        Me.txtMonitoring.Size = New System.Drawing.Size(288, 41)
        Me.txtMonitoring.TabIndex = 1
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(652, 246)
        Me.Controls.Add(Me.txtMonitoring)
        Me.Controls.Add(Me.btnMonitoring)
        Me.Controls.Add(Me.btnOff)
        Me.Controls.Add(Me.btnOn)
        Me.Font = New System.Drawing.Font("Times New Roman", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(178, Byte))
        Me.Margin = New System.Windows.Forms.Padding(4, 3, 4, 3)
        Me.Name = "Form1"
        Me.Text = "Monitoring"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnOn As Button
    Friend WithEvents btnOff As Button
    Friend WithEvents btnMonitoring As Button
    Friend WithEvents txtMonitoring As TextBox
    Friend WithEvents SerialPort1 As IO.Ports.SerialPort
End Class
